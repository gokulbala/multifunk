/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "StorageCommands.h"

#include "Node.h"

#include <Windows.h>

#include <map>
#include <sstream>

/******************************************************************************/
/***   Static variables                                                     ***/
/******************************************************************************/
static const char* storageLinearAxisPositionNames[] =
{
	"reference position",
	"level 1 (above ground)",
	"level 1 (at ground)",
	"level 2 (above ground)",
	"level 2 (at ground)",
	"color detection position",
	"level 3 (above ground)",
	"level 3 (at ground)"
};

static const char* storageRotaryAxisPositionNames[] =
{
	"position 1",
	"position 2",
	"position 3",
	"position 4",
	"position 5",
	"position 6",
	"input position",
	"output position"
};

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
StorageExtendMiniSlideCommand::StorageExtendMiniSlideCommand(NodePtr parentNode, const std::string shortcut, const std::string name)
: Command(parentNode, shortcut, name)
{
}

CommandPtr
StorageExtendMiniSlideCommand::create(const std::string shortcut, NodePtr parentNode)
{
	static CommandPtr p(new StorageExtendMiniSlideCommand(parentNode, shortcut, "Extend mini slide"));
	return p;
}

bool
StorageExtendMiniSlideCommand::execute(void)
{
	getParentNode()->sendRequestAndChompReply("MA0.0=1", 7, "Error sending command!");
	getParentNode()->waitForCondition(COND_INPUT, 0, 0x02, 250);
	return true;
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
StorageRetractMiniSlideCommand::StorageRetractMiniSlideCommand(NodePtr parentNode, const std::string shortcut, const std::string name)
: Command(parentNode, shortcut, name)
{
}

CommandPtr
StorageRetractMiniSlideCommand::create(const std::string shortcut, NodePtr parentNode)
{
	static CommandPtr p(new StorageRetractMiniSlideCommand(parentNode, shortcut, "Retract mini slide"));
	return p;
}

bool
StorageRetractMiniSlideCommand::execute(void)
{
	getParentNode()->sendRequestAndChompReply("MA0.0=0", 7, "Error sending command!");
	getParentNode()->waitForCondition(COND_INPUT, 0, 0x01, 250);
	return true;
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
StorageOpenGripperCommand::StorageOpenGripperCommand(NodePtr parentNode, const std::string shortcut, const std::string name)
: Command(parentNode, shortcut, name)
{
}

CommandPtr
StorageOpenGripperCommand::create(const std::string shortcut, NodePtr parentNode)
{
	static CommandPtr p(new StorageOpenGripperCommand(parentNode, shortcut, "Open gripper"));
	return p;
}

bool
StorageOpenGripperCommand::execute(void)
{
	return getParentNode()->sendRequestAndChompReply("MA0.1=0", 7, "Error sending command!");
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
StorageCloseGripperCommand::StorageCloseGripperCommand(NodePtr parentNode, const std::string shortcut, const std::string name)
: Command(parentNode, shortcut, name)
{
}

CommandPtr
StorageCloseGripperCommand::create(const std::string shortcut, NodePtr parentNode)
{
	static CommandPtr p(new StorageCloseGripperCommand(parentNode, shortcut, "Close gripper"));
	return p;
}

bool
StorageCloseGripperCommand::execute(void)
{
	return getParentNode()->sendRequestAndChompReply("MA0.1=1", 7, "Error sending command!");
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
StorageLinearAxisCommand::StorageLinearAxisCommand(NodePtr parentNode, const std::string shortcut, const std::string name, StorageLinearAxisPosition_t position)
: Command(parentNode, shortcut, name)
, _position(position)
{
}

CommandPtr
StorageLinearAxisCommand::create(StorageLinearAxisPosition_t position, const std::string shortcut, NodePtr parentNode)
{
	std::stringstream s;
	s << "Move linear axis to " << storageLinearAxisPositionNames[position];

	static std::map<StorageLinearAxisPosition_t, CommandPtr> p;
	
	std::map<StorageLinearAxisPosition_t, CommandPtr>::const_iterator i = p.find(position);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new StorageLinearAxisCommand(parentNode, shortcut, s.str(), position));
		p[position] = c;
		return c;
	}
}

bool
StorageLinearAxisCommand::execute(void)
{
	// Set bits
	getParentNode()->sendRequestAndChompReply((_position & 0x01) ? "MA0.2=1" : "MA0.2=0", 7, "Error writing bit 1/3!");
	getParentNode()->sendRequestAndChompReply((_position & 0x02) ? "MA0.3=1" : "MA0.3=0", 7, "Error writing bit 2/3!");
	getParentNode()->sendRequestAndChompReply((_position & 0x04) ? "MA0.4=1" : "MA0.4=0", 7, "Error writing bit 3/3!");

	// Start movement
	getParentNode()->sendRequestAndChompReply("MA0.5=1", 7, "Error enabling linear axis start!");
	getParentNode()->sendRequestAndChompReply("MA0.5=0", 7, "Error disabling linear axis start!");

	// Wait for the motor to start moving
	Sleep(500);

	// Wait for linear axis to reach destination
	// 0x20 is the "linear axis in position" input
	return (0 != getParentNode()->waitForCondition(COND_INPUT, 0, 0x20, 250));
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
StorageRotaryAxisCommand::StorageRotaryAxisCommand(NodePtr parentNode, const std::string shortcut, const std::string name, StorageRotaryAxisPosition_t position)
: Command(parentNode, shortcut, name)
, _position(position)
{
}

CommandPtr
StorageRotaryAxisCommand::create(StorageRotaryAxisPosition_t position, const std::string shortcut, NodePtr parentNode)
{
	std::stringstream s;
	s << "Move rotary axis to " << storageRotaryAxisPositionNames[position];

	static std::map<StorageRotaryAxisPosition_t, CommandPtr> p;
	
	std::map<StorageRotaryAxisPosition_t, CommandPtr>::const_iterator i = p.find(position);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new StorageRotaryAxisCommand(parentNode, shortcut, s.str(), position));
		p[position] = c;
		return c;
	}
}

bool
StorageRotaryAxisCommand::execute(void)
{
	// Set bits
	getParentNode()->sendRequestAndChompReply((_position & 0x01) ? "MA0.2=1" : "MA0.2=0", 7, "Error writing bit 1/3!");
	getParentNode()->sendRequestAndChompReply((_position & 0x02) ? "MA0.3=1" : "MA0.3=0", 7, "Error writing bit 2/3!");
	getParentNode()->sendRequestAndChompReply((_position & 0x04) ? "MA0.4=1" : "MA0.4=0", 7, "Error writing bit 3/3!");

	// Start movement
	getParentNode()->sendRequestAndChompReply("MA0.6=1", 7, "Error enabling rotary axis start!");
	getParentNode()->sendRequestAndChompReply("MA0.6=0", 7, "Error disabling rotary axis start!");

	// Wait for the motor to start moving
	Sleep(500);

	// Wait for linear axis to reach destination
	// 0x40 is the "rotary axis in position" input
	return (0 != getParentNode()->waitForCondition(COND_INPUT, 0, 0x40, 250));
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
StorageBusyCommand::StorageBusyCommand(NodePtr parentNode, const std::string shortcut, const std::string name, bool busy)
: Command(parentNode, shortcut, name)
, _busy(busy)
{
}

CommandPtr
StorageBusyCommand::create(bool busy, const std::string shortcut, NodePtr parentNode)
{
	static CommandPtr p(new StorageBusyCommand(parentNode, shortcut, busy ? "Set busy flag" : "Clear busy flag", busy));
	return p;
}

bool
StorageBusyCommand::execute(void)
{
	return getParentNode()->sendRequestAndChompReply(_busy ? "MA0.7=1" : "MA0.7=0", 7, "Error sending command!");
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
StorageColorSensorCommand::StorageColorSensorCommand(NodePtr parentNode, const std::string shortcut, const std::string name)
: SensorCommand(parentNode, shortcut, name)
, _color(WP_COLOR_UNKNOWN)
{
}

CommandPtr
StorageColorSensorCommand::create(const std::string shortcut, NodePtr parentNode)
{
	static CommandPtr p(new StorageColorSensorCommand(parentNode, shortcut, "Query color sensor"));
	return p;
}

bool
StorageColorSensorCommand::execute(void)
{
	unsigned int mask = getParentNode()->waitForCondition(COND_INPUT, 0, 0x00 /*0x04 | 0x08 | 0x10*/, 1000);

	mask &= 0x04 | 0x08 | 0x10;

	switch (mask)
	{
		case 0x04: _color = WP_COLOR_SILVER; std::cout << "Found silver workpiece." << std::endl; break;
		case 0x08: _color = WP_COLOR_RED;    std::cout << "Found red workpiece." << std::endl; break;
		case 0x10: _color = WP_COLOR_BLACK;  std::cout << "Found black workpiece." << std::endl; break;
		default:   _color = WP_COLOR_NONE;   std::cout << "Found no workpiece." << std::endl; 
	}

	return true;
}

unsigned int
StorageColorSensorCommand::getValue(void)
{
	return _color;
}

const char*
StorageColorSensorCommand::getValueString(void)
{
	switch (_color)
	{
		case WP_COLOR_SILVER: return "silver workpiece";
		case WP_COLOR_RED:    return "red workpiece";
		case WP_COLOR_BLACK:  return "black workpiece";
		case WP_COLOR_NONE:   return "no workpiece";
		default:              return "unknown";
	}
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
StorageBusySensorCommand::StorageBusySensorCommand(NodePtr parentNode, const std::string shortcut, const std::string name)
: SensorCommand(parentNode, shortcut, name)
, _busy(SB_UNKNOWN)
{
}

CommandPtr
StorageBusySensorCommand::create(const std::string shortcut, NodePtr parentNode)
{
	static CommandPtr p(new StorageBusySensorCommand(parentNode, shortcut, "Query next station busy"));
	return p;
}

bool
StorageBusySensorCommand::execute(void)
{
	unsigned int mask = getParentNode()->waitForCondition(COND_INPUT, 0, 0x00, 1000);

	_busy = (0 != (mask & 0x80)) ? SB_BUSY : SB_READY;

	return true;
}

unsigned int
StorageBusySensorCommand::getValue(void)
{
	return _busy;
}

const char*
StorageBusySensorCommand::getValueString(void)
{
	switch (_busy)
	{
		case SB_READY: return "ready";
		case SB_BUSY:  return "busy";
		default:       return "unknown";
	}
}
