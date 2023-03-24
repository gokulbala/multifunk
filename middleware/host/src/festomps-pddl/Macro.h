#ifndef MACRO_H
#define MACRO_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Macro.hh"

#include "Command.h"

#include "easyutil/SharedForThisEnabled.h"

#include <vector>

/******************************************************************************/
/***   Class definitions                                                    ***/
/******************************************************************************/
class Macro: public util::SharedForThisEnabled<Macro>
{
private:
	std::string _name;
	std::vector<CommandPtr> _commands;

protected:
	Macro(const std::string name);

public:
	virtual ~Macro(void);

	static MacroPtr create(const std::string name);

	bool execute(void);

	inline
	const std::string getName(void)
	{
		return _name;
	}

	inline
	void addCommand(CommandPtr command)
	{
		//assert(command->getParentNode());
		_commands.push_back(command);
	}

	inline
	size_t commandCount(void)
	{
		return _commands.size();
	}

	inline
	CommandPtr getCommand(size_t index)
	{
		return _commands.at(index);
	}
};

#endif // #ifndef MACRO_H
