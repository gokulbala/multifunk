/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Command.h"

#include "Node.h"

#include <Windows.h>

#include <map>
#include <sstream>

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
Command::Command(NodePtr parentNode, const std::string shortcut, const std::string name)
: _parentNode(parentNode)
, _shortcut(shortcut)
, _name(name)
{
}

Command::~Command(void)
{
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
DelayCommand::DelayCommand(NodePtr parentNode, const std::string shortcut, const std::string name, unsigned int delay)
: Command(parentNode, shortcut, name)
, _delay(delay)
{
}

CommandPtr
DelayCommand::create(unsigned int delay, const std::string shortcut, NodePtr parentNode)
{
	std::stringstream s;
	s << "Wait for " << delay << "ms";

	static std::map<unsigned int, CommandPtr> p;
	
	std::map<unsigned int, CommandPtr>::const_iterator i = p.find(delay);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new DelayCommand(parentNode, shortcut, s.str(), delay));
		p[delay] = c;
		return c;
	}
}

bool
DelayCommand::execute(void)
{
	Sleep(_delay);
	return true;
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
SensorCommand::SensorCommand(NodePtr parentNode, const std::string shortcut, const std::string name)
: Command(parentNode, shortcut, name)
{
}
