#!/bin/perl -w

use strict;

my @input = ('Strategy_1_sbc.txt', 'Strategy_2_eh.txt', 'Strategy_3_co.txt');
my @output = ('../Solution_1_sbc.cpp', '../Solution_2_eh.cpp', '../Solution_3_co.cpp');

my %argSorting =
	(
	# Predicates
	#'at' => ['unit', 'pos'],
	#'carry' => ['unit', 'gripper'],
	#'belt-connected' => ['pos1', 'pos2'],
	#'rod-located' => ['pos1', 'pos2'],
	#'next' => ['pos1', 'pos2'],
	#'color' => ['obj', 'col'],

	# Actions
	'robot-move' => ['from', 'to'],
	'robot-pick' => ['obj', 'room', 'gripper'],
	'robot-drop' => ['obj', 'room', 'gripper'],
	'belt-move' => ['obj', 'from', 'to'],
	'drill-in' => ['obj', 'pos'],
	'plate-rotate' => ['obj1', 'obj2', 'obj3', 'obj4', 'obj5', 'obj6', 'pos1', 'pos2', 'pos3', 'pos4', 'pos5', 'pos6'],
	'rod-push' => ['obj', 'from', 'to'],
	'trigger-color-sensor' => ['obj', 'pos'],
	'robot-pick-ground' => ['obj', 'room', 'gripper'],
	'robot-drop-ground' => ['obj', 'room', 'gripper'],
	'robot-check-shelf' => ['room', 'gri'],
	'robot-pick-shelf' => ['obj', 'room', 'gripper'],
	'robot-drop-shelf' => ['obj', 'room', 'gripper'],
);

for (my $i=0; $i<scalar(@input); $i++)
{
	&convert($input[$i], $output[$i]);
}

sub convert
{
	my $input = shift;
	my $output = shift;

	open(FILE, "<$input") || die "Unable to open input file!";
	my @lines = <FILE>;
	close(FILE);

	for (my $i=0; $i<scalar(@lines); $i++)
	{
		# Chomp line endings
		$lines[$i] =~ s/\s+$//;

		if ($lines[$i] =~ /^\/\* (Start|End) of block ([0-9]+): \*\//)
		{
			my $start = ($1 eq 'Start');
			my $block = $2;

			splice(@lines, $i+1, 0, sprintf('BLOCK_%s(%d);', $start ? 'START' : 'END', $block));
		}
		if ($lines[$i] =~ /^(.*?)\((.*&&.*)\)/)
		{
			my $prefix = $1;
			my $clause = $2;
			my @conds = split(/\s*&&\s*/, $clause);

			for (my $c=0; $c<scalar(@conds); $c++)
			{
				if ($conds[$c] =~ /^(.*?)=(.*)$/)
				{
					my $var = $1;
					my $values = $2;
					my @values = split(/,/, $values);
					
					my $result = '';
					foreach (@values)
					{
						$result .= ' || ' unless ($result eq '');
						$result .= sprintf('(%s = %s)', $var, $_);
					}

					$conds[$c] = $result;
				}

				$conds[$c] = sprintf('EVAL(%s)', $conds[$c]);
			}

			$lines[$i] = sprintf('%s(%s)', $prefix, join(' && ', @conds));
		}
		elsif ($lines[$i] =~ /^\t([^\(]+)\(\{([^\}]+)\}\)/)
		{
			my $fname = $1;
			my $args = $2;

			my $newArgs;
			my @args = split(/,\s*/, $args);
			my @params;
			my @values;
			foreach (@args)
			{
				if ($_ =~ /^\?([^=]+)=(.*)$/)
				{
					push(@params, $1);
					push(@values, $2);
				}
				else
				{
					printf STDERR "Unknown argument format '$_'!\n";
				}
			}

			my @inorder = ();
			if (defined($argSorting{$fname}))
			{
				my @sort = @{$argSorting{$fname}};
				foreach (@sort)
				{
					for (my $j=0; $j<scalar(@params); $j++)
					{
						if ($_ eq $params[$j])
						{
							push(@inorder, $values[$j]);
							last;
						}
					}
				}
			}
			else
			{
				@inorder = @values;
			}

			$lines[$i] = "\t$fname(" . join(', ', @inorder) . ');';
		}
	}

	my $line = join("\r\n", @lines);

	$line =~ s/Perform sequential code optimization//sg;
	$line =~ s/====================//sg;
	$line =~ s/^\*+//sg;
	$line =~ s/The total solving time for symbolic engine is [0-9\.]+ sec//sg;

	$line =~ s/IF/IF_END();\r\nif/sg;
	$line =~ s/-/_/sg;

	$line =~ s/ball([0-9]+)/Ball$1/sg;
	$line =~ s/p([0-9]+)/P$1/sg;
	$line =~ s/r([0-9]+)/R$1/sg;
	$line =~ s/(\W)x(\W)/$1X$2/sg;
	$line =~ s/(\W)y(\W)/$1Y$2/sg;
	$line =~ s/l([0-9]+)_/L$1_/sg;

	$line =~ s/=/==/sg;

	#$line =~ s/in_robot=([^ ])+/in_robot($1)/sg;

	open(FILE, ">$output");
	print FILE $line;
	close(FILE);
}
