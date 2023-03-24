#ifndef PROCESSINGCOMMANDS_H
#define PROCESSINGCOMMANDS_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Command.h"
#include "Node.hh"
#include "Types.h"

/******************************************************************************/
/***   Class definitions                                                    ***/
/******************************************************************************/
class ProcessingRotateCommand : public Command
{
protected:
	ProcessingRotateCommand(NodePtr parentNode, const std::string shortcut, const std::string name);

public:
	static CommandPtr create(const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

class ProcessingClampCommand : public Command
{
protected:
	bool _clamp;

	ProcessingClampCommand(NodePtr parentNode, const std::string shortcut, const std::string name, bool clamp);

public:
	static CommandPtr create(bool clamp, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

class ProcessingDrillCommand : public Command
{
protected:
	bool _on;

	ProcessingDrillCommand(NodePtr parentNode, const std::string shortcut, const std::string name, bool on);

public:
	static CommandPtr create(bool on, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

class ProcessingDrillMoveCommand : public Command
{
protected:
	bool _up;

	ProcessingDrillMoveCommand(NodePtr parentNode, const std::string shortcut, const std::string name, bool up);

public:
	static CommandPtr create(bool up, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

class ProcessingHeightProbeCommand : public Command
{
protected:
	bool _on;

	ProcessingHeightProbeCommand(NodePtr parentNode, const std::string shortcut, const std::string name, bool on);

public:
	static CommandPtr create(bool on, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

class ProcessingLeverCommand : public Command
{
protected:
	unsigned int _delay;

	ProcessingLeverCommand(NodePtr parentNode, const std::string shortcut, const std::string name, unsigned int delay);

public:
	static CommandPtr create(unsigned int delay, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

class ProcessingBusyCommand : public Command
{
protected:
	bool _busy;

	ProcessingBusyCommand(NodePtr parentNode, const std::string shortcut, const std::string name, bool busy);

public:
	static CommandPtr create(bool busy, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

/******************************************************************************/
/***   Class definitions                                                    ***/
/******************************************************************************/
typedef enum
{
	IS_OCCUPIED = 0,
	IS_FREE,
	IS_UNKNOWN = 0xFFFF
}
InputState_t;

class ProcessingInputSensorCommand : public SensorCommand
{
protected:
	InputState_t _inputState;

	ProcessingInputSensorCommand(NodePtr parentNode, const std::string shortcut, const std::string name);

public:
	static CommandPtr create(const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
	virtual unsigned int getValue(void);
	virtual const char* getValueString(void);
};

typedef enum
{
	WP_HEIGHT_LARGE = 0,
	WP_HEIGHT_SMALL,
	WP_HEIGHT_UNKNOWN = 0xFFFF
}
WorkPieceHeight_t;

class ProcessingHeightSensorCommand : public SensorCommand
{
protected:
	WorkPieceHeight_t _height;

	ProcessingHeightSensorCommand(NodePtr parentNode, const std::string shortcut, const std::string name);

public:
	static CommandPtr create(const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
	virtual unsigned int getValue(void);
	virtual const char* getValueString(void);
};

class ProcessingBusySensorCommand : public SensorCommand
{
protected:
	StationBusy_t _busy;

	ProcessingBusySensorCommand(NodePtr parentNode, const std::string shortcut, const std::string name);

public:
	static CommandPtr create(const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
	virtual unsigned int getValue(void);
	virtual const char* getValueString(void);
};

#endif // #ifndef PROCESSINGCOMMANDS_H
