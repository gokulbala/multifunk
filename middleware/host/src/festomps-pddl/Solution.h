#ifndef SOLUTION_H
#define SOLUTION_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Command.h"

/******************************************************************************/
/***   Defines                                                              ***/
/******************************************************************************/
#define USE_SOLUTION 3

/******************************************************************************/
/***   Class definitions                                                    ***/
/******************************************************************************/
class SolutionCommand : public Command
{
protected:
	SolutionCommand(NodePtr parentNode, const std::string shortcut, const std::string name);

public:
	static CommandPtr create(const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

/******************************************************************************/
/***   Prototypes                                                           ***/
/******************************************************************************/
void solution(void);

#endif // #ifndef SOLUTION_H
