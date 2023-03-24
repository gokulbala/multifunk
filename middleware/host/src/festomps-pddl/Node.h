#ifndef NODE_H
#define NODE_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Node.hh"

#include "Command.h"

#include "easycom/com/ComFwd.h"
#include "easyutil/SharedForThisEnabled.h"

#include <string>
#include <vector>

/******************************************************************************/
/***   Types definitions                                                    ***/
/******************************************************************************/
typedef enum
{
	COND_INPUT,
	COND_OUTPUT
}
ConditionType_t;

/******************************************************************************/
/***   Class definitions                                                    ***/
/******************************************************************************/
class Node: public util::SharedForThisEnabled<Node>
{
private:
	bool _available;
	std::string _name;
	std::vector<CommandPtr> _commands;

protected:
	Node(const std::string name);

public:
	virtual ~Node(void);

	virtual easycom::com::ComPtr getComChannel(void) = 0;
	virtual const std::string getComInfo(void) = 0;
	virtual size_t comRead(void* buf, size_t size);
	virtual size_t comWrite(const void* buf, size_t size);
	virtual void chompReply(void);
	virtual bool sendRequestAndChompReply(const void* buf, size_t size, const char* errorMessage);
	virtual unsigned int waitForCondition(ConditionType_t type, size_t identifier, unsigned int mask, size_t delay) = 0;

	inline
	bool isNodeAvailable(void)
	{
		return _available;
	}

	inline
	void setNodeAvailable(bool available)
	{
		_available = available;
	}

	inline
	const std::string getName(void)
	{
		return _name;
	}

	inline
	void addCommand(CommandPtr command)
	{
		command->setParentNode(this->getPtr());
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

#endif // #ifndef NODE_H
