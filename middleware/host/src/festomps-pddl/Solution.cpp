/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Solution.h"

#include "Mapping.h"

#include <Windows.h>

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
void solution(void)
{
	init();

#if USE_SOLUTION == 1
#	include "Solution_1_sbc.cpp"
#else
#	if USE_SOLUTION == 2
#		include "Solution_2_eh.cpp"
#	else
#		if USE_SOLUTION == 3
#			include "Solution_3_co.cpp"
#		endif
#	endif
#endif

}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
SolutionCommand::SolutionCommand(NodePtr parentNode, const std::string shortcut, const std::string name)
: Command(parentNode, shortcut, name)
{
}

CommandPtr
SolutionCommand::create(const std::string shortcut, NodePtr parentNode)
{
	static CommandPtr p(new SolutionCommand(parentNode, shortcut, "Run PDDL solution"));
	return p;
}

bool
SolutionCommand::execute(void)
{
/*	Sleep(5000);

	init();

	belt_move(Ball1, P1, P5);
	rod_push(Ball1, P5, R1);
	plate_rotate(Ball1, NO_UNIT, NO_UNIT, NO_UNIT, NO_UNIT, NO_UNIT, R1, R2, R3, R4, R5, R6);
	trigger_probe_sensor(Ball1, R2);
	plate_rotate(Ball1, NO_UNIT, NO_UNIT, NO_UNIT, NO_UNIT, NO_UNIT, R1, R2, R3, R4, R5, R6);
	drill_in(Ball1, R3);
	plate_rotate(Ball1, NO_UNIT, NO_UNIT, NO_UNIT, NO_UNIT, NO_UNIT, R1, R2, R3, R4, R5, R6);
	rod_push(Ball1, R4, P4);
	belt_move(Ball1, P4, P2);

	init();

	belt_move(Ball1, P1, P5);
	rod_push(Ball1, P5, R1);
	plate_rotate(Ball1, NO_UNIT, NO_UNIT, NO_UNIT, NO_UNIT, NO_UNIT, R1, R2, R3, R4, R5, R6);
	trigger_probe_sensor(Ball1, R2);
	plate_rotate(Ball1, NO_UNIT, NO_UNIT, NO_UNIT, NO_UNIT, NO_UNIT, R1, R2, R3, R4, R5, R6);
	//drill_in(Ball1, R3);
	plate_rotate(Ball1, NO_UNIT, NO_UNIT, NO_UNIT, NO_UNIT, NO_UNIT, R1, R2, R3, R4, R5, R6);
	rod_push(Ball1, R4, P4);
	belt_move(Ball1, P4, P2);*/

	solution();
	return true;
}
