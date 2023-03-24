#!/bin/perl -w

# Decimal bits calculator for Multifunk Protocol
# http://www.multi-funk.de/
# <geisinger@fortiss.org>

use strict;
use POSIX;

my $minValue = -50.0;
my $maxValue = +150.0;
my $minStep = 0.05;

if ($minValue > $maxValue)
{
	my $temp = $minValue;
	$minValue = $maxValue;
	$maxValue = $temp;
}

printf "Minimum value:   %15f\nMaximum value:   %15f\nMinimum step:    %15f\n", $minValue, $maxValue, $minStep;

##############
# Value bias #
##############
my $valueBias = -$minValue;
$minValue = 0;
$maxValue += $valueBias;

printf "Minimum biased:  %15f\nMaximum biased:  %15f\n", $minValue, $maxValue;

my @expHisto;
my @expRecent;
for (my $i=-1022; $i<1023; $i++)
{
	push(@expHisto, 0);
	push(@expRecent, undef);
}

my @mantHisto;
my @mantRecent;
for (my $i=0; $i<52; $i++)
{
	push(@mantHisto, 0);
	push(@mantRecent, undef);
}

my $minExp = undef;
my $minMant = undef;
my $maxExp = undef;
my $maxMant = undef;
for (my $value = $minValue; $value <= $maxValue; $value += $minStep)
{
	my ($exp, $mant) = &process($value, 0);

	$minExp = &min($minExp, $exp);
	$minMant = &min($minMant, $mant);
	$maxExp = &max($maxExp, $exp);
	$maxMant = &max($maxMant, $mant);
}

#&process(183.2, 1);

printf "Required exponent: %i .. %i abs\n", $minExp, $maxExp;
printf "Required mantissa: %i .. %i bit\n", $minMant, $maxMant;

#################
# Exponent bias #
#################
my $expBias = -$minExp;
my $expBiasedMax = $maxExp+$expBias;
printf "Required exponent range: 0 .. %i\n", $expBiasedMax;

my $expBits = log($expBiasedMax) / log(2);
my $expBitsInt = ceil($expBits);
printf "Required exponent bits: %i (%f)\n", $expBitsInt, $expBits;

print "Exponent table:\n--------------------\n";
for (my $i=0; $i<scalar(@expHisto); $i++)
{
	next unless (0 != $expHisto[$i]);
	printf "%5i | %4i | %s\n", ($i-1022), $expHisto[$i], (defined($expRecent[$i]) ? $expRecent[$i] : '');
}

print "Mantissa table:\n--------------------\n";
for (my $i=0; $i<scalar(@mantHisto); $i++)
{
	next unless (0 != $mantHisto[$i]);
	printf "%3i | %4i | %s\n", $i, $mantHisto[$i], (defined($mantRecent[$i]) ? $mantRecent[$i] : '');
}

# Testcase for special values
#&process(0.0, 1);
#print "---\n";
#&process(199.999999999993, 1);
#print "---\n";

print "Summary:\n--------------------\n";
printf "Value bias:    %3f\n", $valueBias;
printf "Exponent bias: %3i\n", $expBias;
printf "Sign bits:     %3i\n", 0;
printf "Exponent bits: %3i\n", $expBitsInt;
printf "Mantissa bits: %3i\n", $maxMant;
print "------------------\n";
printf "Total bits:    %3i\n", 0 + $expBitsInt + $maxMant;

sub process
{
	my $value = shift;
	my $debug = shift;

##	my $floatRepr = pack('f', $value);
	my $doubleRepr = pack('d', $value);

##	my $floatBits = scalar reverse(unpack('b*', $floatRepr));
	my $doubleBits = scalar reverse(unpack('b*', $doubleRepr));

##	printf "Float binary:    %s\n", $floatBits;
	printf "Double binary:   %s\n", $doubleBits if $debug;

##	my $floatExp = substr($floatBits, 1, 8);
##	my $floatMant = substr($floatBits, 9, 23);

	my $doubleExp = substr($doubleBits, 1, 11);
	my $doubleMant = substr($doubleBits, 12, 52);

##	printf "Float exponent:  %s\n", $floatExp;
##	printf "Float mantissa:  %s\n", $floatMant;

	printf "Double exponent: %s\n", $doubleExp if $debug;
	printf "Double mantissa: %s\n", $doubleMant if $debug;

##	my $floatExpInt = unpack('C', pack('b*', scalar reverse($floatExp)));
	my $doubleExpInt = unpack('S', pack('b*', scalar reverse($doubleExp)));

##	printf "Float exp int:   %i - 127 = %i\n", $floatExpInt, $floatExpInt-127; # Bias 127
	printf "Double exp int:  %i - 1023 = %i\n", $doubleExpInt, $doubleExpInt-1023 if $debug; # Bias 1023
	my $exp = $doubleExpInt-1023;

	# Ignore special values
	if (0.0 == $value && -1023 == $exp)
	{
		printf "Detected special value %f\n", $value;
		$exp = 0;
	}

	$expHisto[$exp+1022]++;
	$expRecent[$exp+1022] = "$value = $doubleExp";

	# Determine the minimum amount of mantissa bits that still yield the "correct"
	# result respective to $minStep when extracting the value from the binary
	# representation.
	
	# First, determine the maximum number of mantissa bits used anyway.
	# This is a worst-case bound for the number of bits we want to use.
	$doubleMant =~ /^([01]*?)0*$/;
	my $wcMantBits = length($1);

	# Now, starting from this representation, reduce the number of bits
	# until the value actually differs from the intended value
	# respective to the value of $minStep.
	my $mant = $wcMantBits;
	while ($mant > 0)
	{
		# Try with one bit less
		my $newMant = $mant-1;

		# Represent the number with $newMant bits
		my $newValueMant = substr($doubleMant, 0, $newMant);
		while (length($newValueMant) < 52)
		{
			$newValueMant .= '0'; # Fill with zeroes
		}
		my $newValueBits =
			substr($doubleBits, 0, 1) . # sign
			$doubleExp . # exponent
			$newValueMant; # mantissa
#printf "BITS:            %s\n", $newValueBits if $debug;
	
		# Generate a floating-point number
		my $newValueRepr = pack('b*', scalar reverse($newValueBits));
		my $newValue = unpack('d', $newValueRepr);

#printf "NVAL:            %.10f\n", $newValue if $debug;
##printf "FACT:            %f\n", (1.0 / $minStep) if $debug;
##printf "MULT:            %f\n", $newValue * (1.0 / $minStep) if $debug;
#printf "INTVAL:          %.10f\n", $newValue * 10 if $debug;
#printf "INTVAL:          %.10f\n", int($newValue * 10) if $debug;

		# With scaling:
		my $oldValueScaled = $value * (1.0 / $minStep);
		my $newValueScaled = $newValue * (1.0 / $minStep);
		my $oldValuePrinted = sprintf '%.0f', $oldValueScaled;
		my $newValuePrinted = sprintf '%.0f', $newValueScaled;

		# Without scaling (not suitable for step sizes values that are not powers of 10!):
#		my $digits = 0;
#		#if ($value != int($value))
#		# TODO: We assume that the minimum value is aligned with the minimum step size
#		if ($minStep < 1)
#		{
#			# Fractional numbers only
#			$digits = int(-log10($minStep) + 0.999999999999999);
#		}
#print "DIGITS:           $digits\n" if $debug;
#		my $oldValueScaled = $value;
#		my $newValueScaled = $newValue;
#		my $oldValuePrinted = sprintf '%.'.$digits.'f', $oldValueScaled;
#		my $newValuePrinted = sprintf '%.'.$digits.'f', $newValueScaled;

#printf "Mant: %i, New mant: %i, Old: %s, New: %s\n", $mant, $newMant, $oldValuePrinted, $newValuePrinted if $debug;

		last if ($oldValuePrinted ne $newValuePrinted);
#printf "OK!\n" if $debug;

		# Try to reduce even further
		$mant = $newMant;
		$doubleMant = substr($doubleMant, 0, $mant);
	}

	$mantHisto[$mant]++;
	$mantRecent[$mant] = "$value = $doubleMant";

	return ($exp, $mant);
}

sub min
{
	my $min = undef;
	foreach (@_)
	{
		if (!defined($min) || $min > $_)
		{
			$min = $_;
		}
	}
	return $min;
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
