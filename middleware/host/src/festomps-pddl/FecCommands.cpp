/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "FecCommands.h"

#include "Node.h"

#include <map>

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
FecStartCommand::FecStartCommand(NodePtr parentNode, const std::string shortcut, PlcDomain_t domain, const std::string name)
: Command(parentNode, shortcut, name)
, _domain(domain)
{
}

CommandPtr
FecStartCommand::create(PlcDomain_t domain, const std::string shortcut, NodePtr parentNode)
{
	static std::map<PlcDomain_t, CommandPtr> p;
	
	std::map<PlcDomain_t, CommandPtr>::const_iterator i = p.find(domain);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new FecStartCommand(parentNode, shortcut, domain, "Start"));
		p[domain] = c;
		return c;
	}
}

bool
FecStartCommand::execute(void)
{
	return getParentNode()->sendRequestAndChompReply("ME1.0=1", 7, "Error sending command!");
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
FecStopCommand::FecStopCommand(NodePtr parentNode, const std::string shortcut, PlcDomain_t domain, const std::string name)
: Command(parentNode, shortcut, name)
, _domain(domain)
{
}

CommandPtr
FecStopCommand::create(PlcDomain_t domain, const std::string shortcut, NodePtr parentNode)
{
	static std::map<PlcDomain_t, CommandPtr> p;
	
	std::map<PlcDomain_t, CommandPtr>::const_iterator i = p.find(domain);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new FecStopCommand(parentNode, shortcut, domain, "Stop"));
		p[domain] = c;
		return c;
	}
}

bool
FecStopCommand::execute(void)
{
	return getParentNode()->sendRequestAndChompReply("ME1.1=0", 7, "Error sending command!");
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
FecResetCommand::FecResetCommand(NodePtr parentNode, const std::string shortcut, PlcDomain_t domain, const std::string name)
: Command(parentNode, shortcut, name)
, _domain(domain)
{
}

CommandPtr
FecResetCommand::create(PlcDomain_t domain, const std::string shortcut, NodePtr parentNode)
{
	static std::map<PlcDomain_t, CommandPtr> p;
	
	std::map<PlcDomain_t, CommandPtr>::const_iterator i = p.find(domain);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new FecResetCommand(parentNode, shortcut, domain, "Reset"));
		p[domain] = c;
		return c;
	}
}

bool
FecResetCommand::execute(void)
{
	return getParentNode()->sendRequestAndChompReply("ME1.3=1", 7, "Error sending command!");
}
