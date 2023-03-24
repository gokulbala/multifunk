/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "LogoCommands.h"

#include "Node.h"

#include <map>
#include <sstream>

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
LogoProxyCommand::LogoProxyCommand(NodePtr parentNode, const std::string shortcut, LogoProxyDomain_t domain, const std::string name)
: Command(parentNode, shortcut, name),
_domain(domain)
{
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
LogoProxySupplyWorkpieceCommand::LogoProxySupplyWorkpieceCommand(NodePtr parentNode, const std::string shortcut, LogoProxyDomain_t domain, const std::string name)
: LogoProxyCommand(parentNode, shortcut, domain, name)
{
}

CommandPtr
LogoProxySupplyWorkpieceCommand::create(LogoProxyDomain_t domain, const std::string name, const std::string shortcut, NodePtr parentNode)
{
	static std::map<LogoProxyDomain_t, CommandPtr> p;
	
	std::map<LogoProxyDomain_t, CommandPtr>::const_iterator i = p.find(domain);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new LogoProxySupplyWorkpieceCommand(parentNode, shortcut, domain, name));
		p[domain] = c;
		return c;
	}
}

bool
LogoProxySupplyWorkpieceCommand::execute(void)
{
	std::stringstream s;
	s << "!SUPPLY[" << getDomain() << "]\r\n";
	return getParentNode()->sendRequestAndChompReply(s.str().c_str(), s.str().length(), "Error sending command!");
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
LogoProxyDeliverWorkpieceCommand::LogoProxyDeliverWorkpieceCommand(NodePtr parentNode, const std::string shortcut, LogoProxyDomain_t domain, const std::string name)
: LogoProxyCommand(parentNode, shortcut, domain, name)
{
}

CommandPtr
LogoProxyDeliverWorkpieceCommand::create(LogoProxyDomain_t domain, const std::string name, const std::string shortcut, NodePtr parentNode)
{
	static std::map<LogoProxyDomain_t, CommandPtr> p;
	
	std::map<LogoProxyDomain_t, CommandPtr>::const_iterator i = p.find(domain);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new LogoProxyDeliverWorkpieceCommand(parentNode, shortcut, domain, name));
		p[domain] = c;
		return c;
	}
}

bool
LogoProxyDeliverWorkpieceCommand::execute(void)
{
	std::stringstream s;
	s << "!DELIVER[" << getDomain() << "]\r\n";
	return getParentNode()->sendRequestAndChompReply(s.str().c_str(), s.str().length(), "Error sending command!");
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
LogoProxySensorCommand::LogoProxySensorCommand(NodePtr parentNode, const std::string shortcut, LogoProxyDomain_t domain, const std::string name)
: SensorCommand(parentNode, shortcut, name),
_domain(domain)
{
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
LogoProxySupplyableSensorCommand::LogoProxySupplyableSensorCommand(NodePtr parentNode, const std::string shortcut, LogoProxyDomain_t domain, const std::string name)
: LogoProxySensorCommand(parentNode, shortcut, domain, name)
, _supplyable(SA_UNKNOWN)
{
}

CommandPtr
LogoProxySupplyableSensorCommand::create(LogoProxyDomain_t domain, const std::string name, const std::string shortcut, NodePtr parentNode)
{
	static std::map<LogoProxyDomain_t, CommandPtr> p;
	
	std::map<LogoProxyDomain_t, CommandPtr>::const_iterator i = p.find(domain);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new LogoProxySupplyableSensorCommand(parentNode, shortcut, domain, name));
		p[domain] = c;
		return c;
	}
}

bool
LogoProxySupplyableSensorCommand::execute(void)
{
	std::stringstream s;
	s << "?STATE[" << getDomain() << "]\r\n";

	unsigned int mask = getParentNode()->waitForCondition(COND_INPUT, getDomain(), 0x00, 1000);

	_supplyable = (0 != (mask & 0x01)) ? SA_YES : SA_NO;

	return true;
}

unsigned int
LogoProxySupplyableSensorCommand::getValue(void)
{
	return _supplyable;
}

const char*
LogoProxySupplyableSensorCommand::getValueString(void)
{
	switch (_supplyable)
	{
		case SA_NO:  return "no";
		case SA_YES: return "yes";
		default:     return "unknown";
	}
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
LogoProxyDeliverableSensorCommand::LogoProxyDeliverableSensorCommand(NodePtr parentNode, const std::string shortcut, LogoProxyDomain_t domain, const std::string name)
: LogoProxySensorCommand(parentNode, shortcut, domain, name)
, _deliverable(DA_UNKNOWN)
{
}

CommandPtr
LogoProxyDeliverableSensorCommand::create(LogoProxyDomain_t domain, const std::string name, const std::string shortcut, NodePtr parentNode)
{
	static std::map<LogoProxyDomain_t, CommandPtr> p;
	
	std::map<LogoProxyDomain_t, CommandPtr>::const_iterator i = p.find(domain);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new LogoProxyDeliverableSensorCommand(parentNode, shortcut, domain, name));
		p[domain] = c;
		return c;
	}
}

bool
LogoProxyDeliverableSensorCommand::execute(void)
{
	unsigned int mask = getParentNode()->waitForCondition(COND_INPUT, getDomain(), 0x00, 1000);

	_deliverable = (0 != (mask & 0x02)) ? DA_YES : DA_NO;

	return true;
}

unsigned int
LogoProxyDeliverableSensorCommand::getValue(void)
{
	return _deliverable;
}

const char*
LogoProxyDeliverableSensorCommand::getValueString(void)
{
	switch (_deliverable)
	{
		case DA_NO:  return "no";
		case DA_YES: return "yes";
		default:     return "unknown";
	}
}
