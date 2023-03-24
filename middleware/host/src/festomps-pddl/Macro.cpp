/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Macro.h"

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
MacroPtr Macro::create(const std::string name)
{
	return MacroPtr(new Macro(name));
}

Macro::Macro(const std::string name)
: _name(name)
{
}

Macro::~Macro(void)
{
	_commands.clear();
}

bool Macro::execute(void)
{
	for (size_t c=0; c<_commands.size(); c++)
	{
		CommandPtr command = _commands[c];
		assert(command);

		std::cout << "Executing command \"" << command->getName() << "\"" << std::endl;

		if (!command->execute())
		{
			return false;
		}
	}

	return true;
}
