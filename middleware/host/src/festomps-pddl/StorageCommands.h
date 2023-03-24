#ifndef STORAGECOMMANDS_H
#define STORAGECOMMANDS_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Command.h"
#include "Node.hh"
#include "Types.h"

/******************************************************************************/
/***   Class definitions                                                    ***/
/******************************************************************************/
class StorageExtendMiniSlideCommand : public Command
{
protected:
	StorageExtendMiniSlideCommand(NodePtr parentNode, const std::string shortcut, const std::string name);

public:
	static CommandPtr create(const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

class StorageRetractMiniSlideCommand : public Command
{
protected:
	StorageRetractMiniSlideCommand(NodePtr parentNode, const std::string shortcut, const std::string name);

public:
	static CommandPtr create(const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

class StorageOpenGripperCommand : public Command
{
protected:
	StorageOpenGripperCommand(NodePtr parentNode, const std::string shortcut, const std::string name);

public:
	static CommandPtr create(const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

class StorageCloseGripperCommand : public Command
{
protected:
	StorageCloseGripperCommand(NodePtr parentNode, const std::string shortcut, const std::string name);

public:
	static CommandPtr create(const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

typedef enum
{
	ST_LA_REFERENCE = 0,
	ST_LA_LEVEL1_MOVE,
	ST_LA_LEVEL1_PUT,
	ST_LA_LEVEL2_MOVE,
	ST_LA_LEVEL2_PUT,
	ST_LA_COLOR_DETECT,
	ST_LA_LEVEL3_MOVE,
	ST_LA_LEVEL3_PUT
}
StorageLinearAxisPosition_t;

class StorageLinearAxisCommand : public Command
{
protected:
	StorageLinearAxisPosition_t _position;

	StorageLinearAxisCommand(NodePtr parentNode, const std::string shortcut, const std::string name, StorageLinearAxisPosition_t position);

public:
	static CommandPtr create(StorageLinearAxisPosition_t position, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

typedef enum
{
	ST_RA_POS1 = 0,
	ST_RA_POS2,
	ST_RA_POS3,
	ST_RA_POS4,
	ST_RA_POS5,
	ST_RA_POS6,
	ST_RA_IN,
	ST_RA_OUT
}
StorageRotaryAxisPosition_t;

class StorageRotaryAxisCommand : public Command
{
protected:
	StorageRotaryAxisPosition_t _position;

	StorageRotaryAxisCommand(NodePtr parentNode, const std::string shortcut, const std::string name, StorageRotaryAxisPosition_t position);

public:
	static CommandPtr create(StorageRotaryAxisPosition_t position, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

class StorageBusyCommand : public Command
{
protected:
	bool _busy;

	StorageBusyCommand(NodePtr parentNode, const std::string shortcut, const std::string name, bool busy);

public:
	static CommandPtr create(bool busy, const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
};

/******************************************************************************/
/***   Class definitions                                                    ***/
/******************************************************************************/
typedef enum
{
	WP_COLOR_SILVER = 0,
	WP_COLOR_RED,
	WP_COLOR_BLACK,
	WP_COLOR_NONE = 0xFFFE,
	WP_COLOR_UNKNOWN = 0xFFFF
}
WorkPieceColor_t;

class StorageColorSensorCommand : public SensorCommand
{
protected:
	WorkPieceColor_t _color;

	StorageColorSensorCommand(NodePtr parentNode, const std::string shortcut, const std::string name);

public:
	static CommandPtr create(const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
	virtual unsigned int getValue(void);
	virtual const char* getValueString(void);
};

class StorageBusySensorCommand : public SensorCommand
{
protected:
	StationBusy_t _busy;

	StorageBusySensorCommand(NodePtr parentNode, const std::string shortcut, const std::string name);

public:
	static CommandPtr create(const std::string shortcut=std::string(), NodePtr parentNode=NodePtr());
	virtual bool execute(void);
	virtual unsigned int getValue(void);
	virtual const char* getValueString(void);
};

#endif // #ifndef STORAGECOMMANDS_H
