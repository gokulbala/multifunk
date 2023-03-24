#ifndef COMMAND_H
#define COMMAND_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Command.hh"

#include "Node.hh"

#include "easyutil/SharedForThisEnabled.h"

#include <string>

/******************************************************************************/
/***   Class definitions                                                    ***/
/******************************************************************************/
class Command: public util::SharedForThisEnabled<Command>
{
friend class Node;
private:
	NodePtr _parentNode;
	std::string _shortcut;
	std::string _name;

protected:
	Command(NodePtr parentNode, const std::string shortcut, const std::string name);

	inline void setParentNode(NodePtr parentNode)
	{
		_parentNode = parentNode;
	}

public:
	virtual ~Command(void);

	virtual bool execute(void) = 0;

	inline NodePtr
	getParentNode(void)
	{
		return _parentNode;
	}

	inline const std::string
	getShortcut(void)
	{
		return _shortcut;
	}

	inline const std::string
	getName(void)
	{
		return _name;
	}
};

class DelayCommand: public Command
{
private:
	unsigned int _delay;

protected:
	DelayCommand(NodePtr parentNode, const std::string shortcut, const std::string name, unsigned int delay);

public:
	static CommandPtr create(unsigned int delay, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());

	virtual bool execute(void);
};

class SensorCommand: public Command
{
protected:
	SensorCommand(NodePtr parentNode, const std::string shortcut, const std::string name);

public:
	virtual unsigned int getValue(void) = 0;
	virtual const char* getValueString(void) = 0;
};

#endif // #ifndef COMMAND_H
