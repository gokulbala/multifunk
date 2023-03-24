#!/bin/perl -w

# Marshaler/demarshaler generator for Multifunk Protocol
# http://www.multi-funk.de/
# <geisinger@fortiss.org>

# TODO: Es muss verhindert werden, dass durch die zusätzlichen Operationen NaN oder Inf entsteht!
# Voraussetzung für diese Optimierungen ist die Zusicherung, dass die folgenden Werte nicht auftreten:
#  - NaN (exp = max.&& mant. != 0)
#  - +Inf (exp = max. && mant == 0 && sgn = 0)
#  - -Inf (exp = max. && mant == 0 && sgn = 1)
# Sofern eine dieser "Zahlen" auftritt, muss der gesamte Zahlenbereich angegeben werden, d.h. Exponent
# und Mantisse wie bei float bzw. double. Damit wird die Komprimierung unterdrückt.

use strict;
use POSIX 'ceil';

my $FLAG = 1; # flag (Boolean value)
my $INT = 2; # integer value
my $DECIMAL = 3; # decimal (i.e., floating-point) value

# Example parameters:
# (primitiveDataType, minOrExponentBits, maxOrSignificandBits)

# Flag
my @FlagParamDT = ($FLAG, 0, 1);
my @FlagParam = ('flag', \@FlagParamDT, 1);

# Temperature value as integer (range -500, +1500)
my @IntegerTemperatureParamDT = ($INT, -500, +1500, 16); # the last argument is the number of bits to use for the function argument
my @IntegerTemperatureParam = ('temp_int', \@IntegerTemperatureParamDT, 1);

# Temperature value as integer (range -32768, 32767)
my @IntegerTemperatureParam2DT = ($INT, -32768, 32767, 16);
my @IntegerTemperatureParam2 = ('temp_int2', \@IntegerTemperatureParam2DT, 1);

# Flag
my @FlagParam2DT = ($FLAG, 0, 1);
my @FlagParam2 = ('flag2', \@FlagParam2DT, 1);

# Temperature value as decimal
#my @DecimalTemperatureParamDT = ($DECIMAL, 4, 13, 50.0, 5); # value bias, exponent bias
my @DecimalTemperatureParamDT = ($DECIMAL, 8, 23, 0.0, 0); # value bias, exponent bias
my @DecimalTemperatureParam = ('temp_dec', \@DecimalTemperatureParamDT, 1);

# Temperature value as decimal
my @DecimalTemperatureParam2DT = ($DECIMAL, 4, 6, 50.0, 4); # value bias, exponent bias
my @DecimalTemperatureParam2 = ('temp_dec2', \@DecimalTemperatureParam2DT, 1);

# Array of port parameters
my @PortParameters = (
	\@FlagParam,
	\@IntegerTemperatureParam,
	\@IntegerTemperatureParam2,
	\@FlagParam2,
	\@DecimalTemperatureParam,
	\@DecimalTemperatureParam2
);

# Array for storing marshaler/demarshaler operations in abstract form
# for later code generation.
my @marshalerAll;
my @demarshalerAll;

my $scriptName = $0;
$scriptName =~ s/^.*[\/\\](.+?)$/$1/;
my ($sec, $min, $hour, $mday, $mon, $year, $wday, $yday, $isdst) = localtime(time);
$year += 1900;
my $message = sprintf("group 'Generated with %s on %i-%02i-%02i %02i:%02i:%02i'", $scriptName, $year, $mon, $mday, $hour, $min, $sec);
push(@marshalerAll, $message);
push(@demarshalerAll, $message);

my $realSize = 0;
my $compressedSize = 0;

# Iterate over data types and generate abstract marshaler/demarshaler operations
foreach (@PortParameters)
{
	my @marshaler;
	my @demarshaler;

	my @param = @{$_};

	my $name = $param[0];
	my $dataRef = $param[1];
	my $card = $param[2];

	my @data = @{$dataRef};

	my $type = $data[0];
	my $p1 = $data[1];
	my $p2 = $data[2];
	my $p3 = $data[3];
	my $p4 = $data[4];

	if ($FLAG == $type)
	{
		push(@marshaler, sprintf("group 'Boolean flag \\'%s\\''", $name));
		push(@marshaler, sprintf("store bit from '%s'", $name));
		push(@demarshaler, sprintf("load bit into '*%s'", $name));
		push(@demarshaler, sprintf("group 'Boolean flag \\'%s\\''", $name));

		$realSize += 8;
		$compressedSize += 1;
	}
	elsif ($INT == $type)
	{
		my $varName = $name;
		my $converted = 0;

		my $minValue = $p1;
		my $maxValue = $p2;

		# Calculate value bias
		my $valueBias = -$minValue;

		# Calculate number of required bits
		my $range = $maxValue + $valueBias;
		my $bits = int(log($range)/log(2)) +1;

		my $varType = ($bits <= 8) ? 8 : (($bits <= 16) ? 16 : (($bits <= 32) ? 32 : 64));

		push(@marshaler, sprintf("group '%i bit %sinteger value \\'%s\\' (range %i..%i, %i bit%s)'", $varType, ($minValue < 0) ? '' : 'unsigned ', $name, $minValue, $maxValue, $bits, 1 == $bits ? '' : 's'));

		if (0 != $valueBias)
		{
			# Check whether all values will actually fit when the value bias is applied.
			# If not, we have to convert to/from unsigned types.
			my $done = 0;
			if ($minValue < 0)
			{
				# An unsigned type has to be used
				my $maxSignedVal = (2 ** ($varType-1)) -1;
				my $maxValueWithBias = $maxValue + $valueBias;
				if ($maxValueWithBias > $maxSignedVal)
				{
					# Type conversion required

					# Determine number of bits required for cast
					my $numBits = ceil(log($maxValueWithBias+1) / log(2));
					$numBits = ($numBits <= 8 ? 8 : ($numBits <= 16 ? 16 : ($numBits <= 32 ? 32 : 64)));

					if ($numBits*2 > 64)
					{
						printf(STDERR "Warning: Marshaling/demarshaling operation can not be guaranteed to be lossless. You should use a floating-point data type for parameter '%s' instead!\n", $name);
					}
					else
					{
						$numBits *= 2;
					}

					push(@marshaler, "scope begin");
					push(@demarshaler, "scope end");

					$varName = sprintf("conv_%s", $name);
					push(@marshaler, sprintf("add %i to %s(%i) '%s' and store as uint(%i) '%s'", $valueBias, $minValue >= 0 ? 'uint' : 'int', $numBits, $name, $varType, $varName));
					push(@demarshaler, sprintf("add %i to %s(%i) '%s' and store as '*%s'", -$valueBias, $minValue >= 0 ? 'uint' : 'int', $numBits, $varName, $name));

					$converted = 1;
					$done = 1;

					#push(@marshaler, sprintf("convert from int(%i) '%s' to uint(%i) '%s'", $varType, $name, $varType, $varName));
					#push(@demarshaler, sprintf("convert from uint(%i) '%s' to int(%i) '%s'", $varType, $varName, $varType, $name));
				}
			}

			if (!$done)
			{
				push(@marshaler, sprintf("add %i to '%s'", $valueBias, $varName));
				push(@demarshaler, sprintf("add %i to '*%s'", -$valueBias, $varName));
			}
		}

		my $typeName = 'int';
		if ($minValue >= 0 || $converted)
		{
			$typeName = 'uint';
		}

		push(@marshaler, sprintf("store %s(%i) from '%s' length %i", $typeName, $varType, $varName, $bits));
		push(@demarshaler, sprintf("load %s(%i) into '%s%s' length %i", $typeName, $varType, $converted ? '' : '*', $varName, $bits));

		if ($converted)
		{
			push(@demarshaler, sprintf("declare uint(%i) '%s' with initial value 0", $varType, $varName));

			push(@marshaler, "scope end");
			push(@demarshaler, "scope begin");
		}

		push(@demarshaler, sprintf("group '%i bit %sinteger value \\'%s\\' (range %i..%i, %i bit%s)'", $varType, ($minValue < 0) ? '' : 'unsigned ', $name, $minValue, $maxValue, $bits, 1 == $bits ? '' : 's'));

		$realSize += $varType;
		$compressedSize += $bits;
	}
	elsif ($DECIMAL == $type)
	{
		my $exponentBits = $p1;
		my $mantissaBits = $p2;

		my $typeSize = ($exponentBits <= 8 && $mantissaBits <= 23) ? 32 : 64;

		push(@marshaler, sprintf("group '%i bit floating-point number \\'%s\\' (%i exponent bits, %i mantissa bits)'", $typeSize, $name, $exponentBits, $mantissaBits));

		my $valueBias = $p3;
		if (0.0 != $valueBias)
		{
			push(@marshaler, sprintf("add %f to '%s'", $valueBias, $name));
			push(@demarshaler, sprintf("add %f to '*%s'", -$valueBias, $name));
		}

		my $exponentBias = $p4;
		if (0 != $exponentBias)
		{
			push(@marshaler, sprintf("exp %i to '%s'", $exponentBias, $name));
			push(@demarshaler, sprintf("exp %i to '*%s'", -$exponentBias, $name));
		}

		if ($exponentBits <= 8 && $mantissaBits <= 23)
		{
			# Single-precision (float)
			push(@marshaler, sprintf("store dec(32) from '%s' exponent %i mantissa %i", $name, $exponentBits, $mantissaBits));
			push(@demarshaler, sprintf("load dec(32) into '*%s' exponent %i mantissa %i", $name, $exponentBits, $mantissaBits));
		}
		else
		{
			# Double-precision is required
			push(@marshaler, sprintf("store dec(64) from '%s' exponent %i mantissa %i", $name, $exponentBits, $mantissaBits));
			push(@demarshaler, sprintf("load dec(64) into '*%s' exponent %i mantissa %i", $name, $exponentBits, $mantissaBits));
		}

		push(@demarshaler, sprintf("group '%i bit floating-point number \\'%s\\' (%i exponent bits, %i mantissa bits)'", $typeSize, $name, $exponentBits, $mantissaBits));

		$realSize += $typeSize;
		$compressedSize += $exponentBits + $mantissaBits;
	}
	else
	{
		print STDERR "Unknown data type!\n";
	}

	push(@marshalerAll, @marshaler);
	push(@demarshalerAll, reverse @demarshaler);
}

print "Marshaler pseudo-code:\n----------------------\n";
foreach (@marshalerAll)
{
	print "$_\n";
}

print "\nDemarshaler pseudo-code:\n----------------------\n";
foreach (@demarshalerAll)
{
	print "$_\n";
}

my $level = 0; # indentation level

print "\nMarshaler C code:\n----------------------\n";
my $byte = 0;
my $freeBits = 8;
print("void marshal(");
foreach (@PortParameters)
{
	my @param = @{$_};

	my $name = $param[0];
	my $dataRef = $param[1];

	my @data = @{$dataRef};

	my $type = $data[0];
	my $p1 = $data[1];
	my $p2 = $data[2];
	my $p3 = $data[3];
	my $p4 = $data[4];

	if ($FLAG == $type)
	{
		printf('bool %s, ', $name);
	}
	elsif ($INT == $type)
	{
		my $minValue = $p1;

		my $bits = $p3;
		my $varType = ($bits <= 8) ? 8 : (($bits <= 16) ? 16 : (($bits <= 32) ? 32 : 64));

		printf('%sint%i_t %s, ', $minValue >= 0 ? 'u' : '', $varType, $name);
	}
	elsif ($DECIMAL == $type)
	{
		my $exponentBits = $p1;
		my $mantissaBits = $p2;

		if ($exponentBits <= 8 && $mantissaBits <= 23)
		{
			# Single-precision (float)
			printf('float %s, ', $name);
		}
		else
		{
			# Double-precision is required
			printf('double %s, ', $name);
		}
	}
	else
	{
		print STDERR "Unknown data type!\n";
	}
}
print("uint8_t* buf)\n");
&beginBlock();
foreach (@marshalerAll)
{
	&generateCode($_);
}
&endBlock();
print("\n");

print "Demarshaler C code:\n----------------------\n";
$byte = 0;
$freeBits = 8;
print("void demarshal(");
foreach (@PortParameters)
{
	my @param = @{$_};

	my $name = $param[0];
	my $dataRef = $param[1];

	my @data = @{$dataRef};

	my $type = $data[0];
	my $p1 = $data[1];
	my $p2 = $data[2];
	my $p3 = $data[3];
	my $p4 = $data[4];

	if ($FLAG == $type)
	{
		printf('bool* %s, ', $name);
	}
	elsif ($INT == $type)
	{
		my $minValue = $p1;

		my $bits = $p3;
		my $varType = ($bits <= 8) ? 8 : (($bits <= 16) ? 16 : (($bits <= 32) ? 32 : 64));

		printf('%sint%i_t* %s, ', $minValue >= 0 ? 'u' : '', $varType, $name);
	}
	elsif ($DECIMAL == $type)
	{
		my $exponentBits = $p1;
		my $mantissaBits = $p2;

		if ($exponentBits <= 8 && $mantissaBits <= 23)
		{
			# Single-precision (float)
			printf('float* %s, ', $name);
		}
		else
		{
			# Double-precision is required
			printf('double* %s, ', $name);
		}
	}
	else
	{
		print STDERR "Unknown data type!\n";
	}
}
print("uint8_t* buf)\n");
&beginBlock();
foreach (@demarshalerAll)
{
	&generateCode($_);
}
&endBlock();
print("\n");

print "Statistics:\n----------------------\n";
printf "Real size:       %4i bit (%3i byte)\n", $realSize, int($realSize/8+0.999);
printf "Compressed size: %4i bit (%3i byte)\n", $compressedSize, int($compressedSize/8+0.999);
printf "Savings:         %4i bit (%3i byte)\n", $realSize-$compressedSize, int($realSize/8+0.999)-int($compressedSize/8+0.999);
printf "Savings in %%:     %3i%%    (%3i%%    )\n", int(($realSize-$compressedSize)/$realSize*100+0.5), int((int($realSize/8+0.999)-int($compressedSize/8+0.999))/int($realSize/8+0.999)*100+0.5);

sub generateCode
{
	my $command = shift;

	#printf("%s\n", $command);

	if ($command =~ /^group '(.+?[^\\])'/)
	{
		my $group = $1;
		$group =~ s/\\'/'/g;

		printf("\n%s// %s\n", &indent(), $group);
	}
	elsif ($command =~ /^declare ([a-z]+)\(([0-9]+)\) '(.+?)'(.*)$/)
	{
		my $type = $1;
		my $length = $2;
		my $name = $3;
		my $init = $4;

		my $initialization = '';
		if ($init =~ /^ with initial value ([\-0-9e]+)/)
		{
			my $value = $1;

			$initialization = sprintf(' = %s', $value);
		}

		printf("%s%s%i_t %s%s;\n", &indent(), $type, $length, $name, $initialization);
	}
	elsif ($command =~ /^store (.*)$/)
	{
		my $args = $1;
		if ($args =~ /^bit from '(.+?)'/)
		{
			my $name = $1;

			printf("%sassert(0 == (uint8_t)%s >> 1); // Make sure that all unused bits in '%s' are actually zero\n", &indent(), $name, $name);
			printf("%sbuf[%i] |= ((uint8_t)%s << %i); // Store boolean flag '%s'\n", &indent(), $byte, $name, $freeBits-1, $name);
			&next(1);
		}
		elsif ($args =~ /^(u?)int\(([0-9]+)\) from '(.+?)' length ([0-9]+)/)
		{
			my $unsigned = ('u' eq $1);
			my $typeSize = $2;
			my $name = $3;
			my $serSize = $4;

			printf("%s// Store %i bit integer value '%s'\n", &indent(), $typeSize, $name);

			# Make sure that all unused bits are actually zero
			if ($serSize < $typeSize)
			{
				printf("%sassert(0 == (%s >> %i)); // Make sure that all unused bits in '%s' are actually zero\n", &indent(), $name, $serSize, $name);
			}

			&generateStoreOp($name, $serSize, 0, 0);
		}
		elsif ($args =~ /^dec\(([0-9]+)\) from '(.+?)' exponent ([0-9]+) mantissa ([0-9]+)/)
		{
			my $typeSize = $1;
			my $name = $2;
			my $expBits = $3;
			my $mantBits = $4;

			printf("%s// Store %i bit floating-point number '%s'\n", &indent(), $typeSize, $name);

			my $isSingle = ($typeSize <= 32);
			my $marshType = sprintf('marsh_%s', $isSingle ? 'float' : 'double');

			&beginBlock();

			# Extract bit representation. Tests have shown that this is beneficial for the
			# number of generated assembly statements for typical exponent and mantissa sizes.
			printf("#if defined(_MSC_VER)\n");
			printf("%suint%i_t _bits = ((%s*)&%s)->u;\n", &indent(), $typeSize, $marshType, $name);
			printf("#else /* #if defined(_MSC_VER) */\n");
			printf("%suint%i_t _bits = ((%s)%s).u;\n", &indent(), $typeSize, $marshType, $name);
			printf("#endif /* #if defined(_MSC_VER) */\n");

			# Transform and store exponent
			my $hexDigits = $typeSize >> 2;
			# The value zero is stored in denormalized form. This is why we need to treat this as a special case.
			printf("%suint%i_t _exp = (0 == _bits) ? 0 : ((%s >> %i) - %i) & 0x%0".$hexDigits."X;\n", &indent(), $expBits <= 8 ? 8 : 16, '_bits', $isSingle ? 23 : 52, $isSingle ? 127 : 1023, (2 ** $expBits) -1);
			&generateStoreOp('_exp', $expBits, 0, 0); # Using no mask is OK here since the only bit left of the exponent that could be non-zero is the sign bit, but the value bias ensures that it is never 1

			# Store mantissa
			my $mantPaddingRight = $typeSize - (($isSingle ? 9 : 12) + $mantBits); # Number of unused bits to the right (less significant bits) of the mantissa
			&generateStoreOp('_bits', $mantBits, $mantPaddingRight, 1);

			&endBlock();
		}
		else
		{
			printf(STDERR "	Unknown store command '%s'!\n", $command);
		}
	}
	elsif ($command =~ /^load (.*)$/)
	{
		my $args = $1;
		if ($args =~ /^bit into '(.+?)'/)
		{
			my $name = $1;

			printf("%s%s = (buf[%i] >> %i) & 0x01; // Load boolean flag into '%s'\n", &indent(), $name, $byte, $freeBits-1, $name);
			&next(1);
		}
		elsif ($args =~ /^(u?)int\(([0-9]+)\) into '(.+?)' length ([0-9]+)/)
		{
			my $unsigned = ('u' eq $1);
			my $typeSize = $2;
			my $name = $3;
			my $serSize = $4;

			printf("%s// Load %i bit integer value into '%s'\n", &indent(), $typeSize, $name);

			# Make sure the destination is initially "empty"
			printf("%sassert(0 == %s); // Make sure that '%s' is initially zero\n", &indent(), $name, $name);

			my $typeName = sprintf('%sint%i_t', $unsigned ? 'u' : '', $typeSize);

			&generateLoadOp($name, $typeName, $serSize, 0);
		}
		elsif ($args =~ /^dec\(([0-9]+)\) into '(.+?)' exponent ([0-9]+) mantissa ([0-9]+)/)
		{
			my $typeSize = $1;
			my $name = $2;
			my $expBits = $3;
			my $mantBits = $4;

			printf("%s// Load %i bit floating-point number into '%s'\n", &indent(), $typeSize, $name);

			my $isSingle = ($typeSize <= 32);
			my $bitRepr = sprintf('*(uint%i_t*)(&%s)', $typeSize, $name);
			my $typeName = sprintf('uint%i_t', $typeSize);

			# Make sure the destination is initially "empty"
			printf("%sassert(0 == %s); // Make sure that '%s' is initially zero\n", &indent(), $bitRepr, $name);

			# Load exponent
			&beginBlock();
			printf("%suint%i_t _bits = 0;\n", &indent(), $typeSize);
			printf("%suint%i_t _exp = 0;\n", &indent(), $expBits <= 8 ? 8 : 16);

			&generateLoadOp('_exp', $typeName, $expBits, 0);

			# Load mantissa
			my $mantPaddingRight = $typeSize - (($isSingle ? 9 : 12) + $mantBits); # Number of unused bits to the right (less significant bits) of the mantissa
			&generateLoadOp('_bits', $typeName, $mantBits, $mantPaddingRight);

			# Set exponent
			printf("%s%s = (0 == _bits) ? 0 : _bits | (((int%i_t)%s + %i) << %i);\n", &indent(), $bitRepr, $typeSize, '_exp', $isSingle ? 127 : 1023, $isSingle ? 23 : 52);
			&endBlock();
		}
		else
		{
			printf(STDERR "	Unknown store command '%s'!\n", $command);
		}
	}
	elsif ($command =~ /^add ([\-0-9\.e]+) to ([^']*)'(.+?)'(.*)/)
	{
		my $value = $1;
		my $initialCast = $2;
		my $name = $3;
		my $conversion = $4;

		my $cast = '';
		if ($initialCast =~ /^([a-z]+)\(([0-9]+)\) /)
		{
			my $type = $1;
			my $length = $2;

			$cast = sprintf('(%s%i_t)', $type, $length);
		}

		my $newName = '';
		my $newType = '';
		my $newLength = 0;
		if ($conversion ne '')
		{
			if ($conversion =~ /^ and store as ([^']*)'(.+?)'/)
			{
				my $newVar = $1;
				$newName = $2;

				if ($newVar =~ /^([a-z]+)\(([0-9]+)\) /)
				{
					$newType = $1;
					$newLength = $2;
				}
			}
		}

		my $varDecl = '';
		if ($newType ne '')
		{
			$varDecl = sprintf('%s%i_t ', $newType, $newLength);
		}

		if ($value < 0)
		{
			if ($newName ne '')
			{
				printf("%s%s%s = %s%s - %s; // Value bias\n", &indent(), $varDecl, $newName, $cast, $name, -$value);
			}
			else
			{
				printf("%s%s -= %s; // Value bias\n", &indent(), $name, -$value);
			}
		}
		else
		{
			if ($newName ne '')
			{
				printf("%s%s%s = %s%s + %s; // Value bias\n", &indent(), $varDecl, $newName, $cast, $name, $value);
			}
			else
			{
				printf("%s%s += %s; // Value bias\n", &indent(), $name, $value);
			}
		}
	}
	elsif ($command =~ /^exp ([\-0-9]+) to '(.+?)'/)
	{
		my $exp = $1;
		my $name = $2;

		if ($exp < 0)
		{
			printf("%s%s /= %i; // Exponent bias\n", &indent(), $name, 2 ** (-$exp));
		}
		else
		{
			printf("%s%s *= %i; // Exponent bias\n", &indent(), $name, 2 ** $exp);
		}
	}
	elsif ($command =~ /^scope ([a-z]+)/)
	{
		my $arg = $1;

		if ('begin' eq $arg)
		{
			&beginBlock();
		}
		elsif ('end' eq $arg)
		{
			&endBlock();
		}
		else
		{
			printf(STDERR "	Unknown scope command '%s'!\n", $command);
		}
	}
	else
	{
		printf(STDERR "	Unknown command '%s'!\n", $command);
	}
}

sub indent
{
	my $indent = '';
	for (my $i=0; $i<$level; $i++)
	{
		$indent .= "\t";
	}
	return $indent;
}

sub beginBlock
{
	printf("%s{\n", &indent());
	$level++;
}

sub endBlock
{
	$level--;
	printf("%s}\n", &indent());
}

sub generateStoreOp
{
	my $source = shift;
	my $totalBits = shift;
	my $paddingRight = shift;
	my $forceMask = shift;

	my $remBits = $totalBits;
	while ($remBits > 0)
	{
		# If there are some bits left of this one, we have to apply a mask
		my $mask = '';
		if ((($forceMask || $remBits != $totalBits) && $freeBits < 8) || ($paddingRight > 0 && $remBits < $freeBits))
		{
			my $hexDigits = $totalBits >> 2;
			$mask = sprintf(' & 0x%0'.$hexDigits.'X', ((2 ** $remBits)-1) << $paddingRight);
		}

		# Fill current byte
		if ($remBits >= $freeBits)
		{
			printf("%sbuf[%i] |= ((%s%s) >> %i); // %i bit%s\n", &indent(), $byte, $source, $mask, $remBits - $freeBits + $paddingRight, $freeBits, 1 == $freeBits ? '' : 's');
			$remBits -= $freeBits;
			&next($freeBits);
		}
		else
		{
			my $shift = $freeBits - $remBits - $paddingRight;
			printf("%sbuf[%i] |= ((%s%s) %s %i); // remaining %i bit%s\n", &indent(), $byte, $source, $mask, $shift < 0 ? '>>' : '<<', abs($shift), $remBits, 1 == $remBits ? '' : 's');
			&next($remBits);
			$remBits = 0;
		}
	}
}

sub generateLoadOp
{
	my $dest = shift;
	my $typeCast = shift;
	my $totalBits = shift;
	my $paddingRight = shift;

	my $remBits = $totalBits;
	while ($remBits > 0)
	{
		# If there are some bits left of this one, we have to apply a mask
		my $mask = '';
		if ($freeBits < 8 || $remBits < $freeBits)
		{
			my $hexDigits = $totalBits >> 2; # TODO: actually this should be sizeof($typeCast) >> 2, but it's only cosmetic
			$mask = sprintf(' & 0x%0'.$hexDigits.'X', (2 ** $freeBits) -1 - (2 ** (&max($freeBits - $remBits, 0)) -1));
		}

		# Read remaining bits from current byte
		if ($remBits >= $freeBits)
		{
			printf("%s%s |= (((%s)buf[%i]%s) << %i); // %i bit%s\n", &indent(), $dest, $typeCast, $byte, $mask, $remBits - $freeBits + $paddingRight, $freeBits, 1 == $freeBits ? '' : 's');
			$remBits -= $freeBits;
			&next($freeBits);
		}
		else
		{
			my $shift = $freeBits - $remBits - $paddingRight;
			printf("%s%s |= (((%s)buf[%i]%s) %s %i); // remaining %i bit%s\n", &indent(), $dest, $typeCast, $byte, $mask, $shift < 0 ? '<<' : '>>', abs($shift), $remBits, 1 == $remBits ? '' : 's');
			&next($remBits);
			$remBits = 0;
		}
	}
}

sub next
{
	$freeBits -= shift;
	while ($freeBits < 1)
	{
		$freeBits += 8;
		$byte++;
	}
}

sub max
{
	my $max = undef;
	foreach (@_)
	{
		if (!defined($max) || $max < $_)
		{
			$max = $_;
		}
	}
	return $max;
}
