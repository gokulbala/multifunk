#ifndef LOGOCOMMANDS_H
#define LOGOCOMMANDS_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Command.h"
#include "Node.hh"

/******************************************************************************/
/***   Type definitions                                                     ***/
/******************************************************************************/
typedef enum
{
	LP_DOMAIN_PROCESSING = 0,
	LP_DOMAIN_STORAGE
}
LogoProxyDomain_t;

/******************************************************************************/
/***   Class definitions                                                    ***/
/******************************************************************************/
class LogoProxyCommand : public Command
{
private:
	LogoProxyDomain_t _domain;

protected:
	LogoProxyCommand(NodePtr parentNode, const std::string shortcut, LogoProxyDomain_t domain, const std::string name);

public:
	inline LogoProxyDomain_t
	getDomain(void)
	{
		return _domain;
	}
};

class LogoProxySupplyWorkpieceCommand : public LogoProxyCommand
{
protected:
	LogoProxySupplyWorkpieceCommand(NodePtr parentNode, const std::string shortcut, LogoProxyDomain_t domain, const std::string name);

public:
	static CommandPtr create(LogoProxyDomain_t domain, const std::string name, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

class LogoProxyDeliverWorkpieceCommand : public LogoProxyCommand
{
protected:
	LogoProxyDeliverWorkpieceCommand(NodePtr parentNode, const std::string shortcut, LogoProxyDomain_t domain, const std::string name);

public:
	static CommandPtr create(LogoProxyDomain_t domain, const std::string name, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

/******************************************************************************/
/***   Class definitions                                                    ***/
/******************************************************************************/
class LogoProxySensorCommand : public SensorCommand
{
private:
	LogoProxyDomain_t _domain;

protected:
	LogoProxySensorCommand(NodePtr parentNode, const std::string shortcut, LogoProxyDomain_t domain, const std::string name);

public:
	inline LogoProxyDomain_t
	getDomain(void)
	{
		return _domain;
	}
};

typedef enum
{
	SA_NO = 0,
	SA_YES,
	SA_UNKNOWN = 0xFFFF
}
Supplyable_t;

class LogoProxySupplyableSensorCommand : public LogoProxySensorCommand
{
private:
	Supplyable_t _supplyable;

protected:
	LogoProxySupplyableSensorCommand(NodePtr parentNode, const std::string shortcut, LogoProxyDomain_t domain, const std::string name);

public:
	static CommandPtr create(LogoProxyDomain_t domain, const std::string name, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
	virtual unsigned int getValue(void);
	virtual const char* getValueString(void);
};

typedef enum
{
	DA_NO = 0,
	DA_YES,
	DA_UNKNOWN = 0xFFFF
}
Deliverable_t;

class LogoProxyDeliverableSensorCommand : public LogoProxySensorCommand
{
private:
	Deliverable_t _deliverable;

protected:
	LogoProxyDeliverableSensorCommand(NodePtr parentNode, const std::string shortcut, LogoProxyDomain_t domain, const std::string name);

public:
	static CommandPtr create(LogoProxyDomain_t domain, const std::string name, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
	virtual unsigned int getValue(void);
	virtual const char* getValueString(void);
};

#endif // #ifndef LOGOCOMMANDS_H
