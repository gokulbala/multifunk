#ifndef FECCOMMANDS_H
#define FECCOMMANDS_H

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
	PLC_DOMAIN_PROCESSING = 0,
	PLC_DOMAIN_STORAGE
}
PlcDomain_t;

/******************************************************************************/
/***   Class definitions                                                    ***/
/******************************************************************************/
class FecStartCommand : public Command
{
private:
	PlcDomain_t _domain;

protected:
	FecStartCommand(NodePtr parentNode, const std::string shortcut, PlcDomain_t domain, const std::string name);

public:
	static CommandPtr create(PlcDomain_t domain, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

class FecStopCommand : public Command
{
private:
	PlcDomain_t _domain;

protected:
	FecStopCommand(NodePtr parentNode, const std::string shortcut, PlcDomain_t domain, const std::string name);

public:
	static CommandPtr create(PlcDomain_t domain, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

class FecResetCommand : public Command
{
private:
	PlcDomain_t _domain;

protected:
	FecResetCommand(NodePtr parentNode, const std::string shortcut, PlcDomain_t domain, const std::string name);

public:
	static CommandPtr create(PlcDomain_t domain, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

#endif // #ifndef FECCOMMANDS_H
