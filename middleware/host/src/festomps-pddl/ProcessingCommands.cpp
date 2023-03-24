/*
Lagern:
ME0.0 Minislide eingefahren
ME0.1 Minislide ausgefahren
ME0.2 Farbsensor: metallisches Wersktück
ME0.3 Farbsensor: rotes Werkstück
ME0.4 Farbsensor: schwarzes Werkstück
ME0.5 Linearachse in Position
ME0.6 Drehachse in Position
ME0.7 Folgestation belegt
ME0.8 Start
ME0.9 Stop (Öffner!)
ME0.10 Auto/Manuell (ein bei Manuell)
ME0.11 Reset
ME0.12 I4
ME0.13 I5
ME0.14 I6
ME0.15 I7
MA0.0 Minislide ausfahren
MA0.1 Gripper schließen
MA0.2 Achsensteuerung Bit 1
MA0.3 Achsensteuerung Bit 2
MA0.4 Achsensteuerung Bit 3
MA0.5 Achsensteuerung Start Linearachse
MA0.6 Achsensteuerung Start Drehachse
MA0.7 Belegt-Signal
MA0.8 LED Start
MA0.9 LED Reset
MA0.10 Q1
MA0.11 Q2
MA0.12 Q4
MA0.13 Q5
MA0.14 Q6
MA0.15 Q7

Bearbeiten:
ME0.0 Induktiver Sensor Eingang
ME0.1 Induktiver Sensor Bohrer
ME0.2 Induktiver Sensor Höhenprüfung
ME0.3 Linearachse oben (falls MA0.3 aktiv)
ME0.4 Linearachse unten (falls MA0.2 aktiv)
ME0.5 Rotationstisch auf Position
ME0.6 Ergebnis Höhenprüfung (an falls Loch)
ME0.7 Folgestation belegt
ME0.8 Start
ME0.9 Stop (Öffner!)
ME0.10 Auto/Manuell (ein bei Manuell)
ME0.11 Reset
ME0.12 I4
ME0.13 I5
ME0.14 I6
ME0.15 I7
MA0.0 Bohrer an
MA0.1 Drehung los
MA0.2 Linearachse runter / unten halten
MA0.3 Linearachse hoch / oben halten
MA0.4 Fixierung an
MA0.5 Höhentest
MA0.6 Auswurf
MA0.7 Belegt-Signal
MA0.8 LED Start
MA0.9 LED Reset
MA0.10 Q1
MA0.11 Q2
MA0.12 Q4
MA0.13 Q5
MA0.14 Q6
MA0.15 Q7

Förderbänder:
I6, I7, I8 frei (I7, I8 auch analog 0..10V)
*/


/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "ProcessingCommands.h"

#include "Node.h"

#include <Windows.h>

#include <map>

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
ProcessingRotateCommand::ProcessingRotateCommand(NodePtr parentNode, const std::string shortcut, const std::string name)
: Command(parentNode, shortcut, name)
{
}

CommandPtr
ProcessingRotateCommand::create(const std::string shortcut, NodePtr parentNode)
{
	static CommandPtr p(new ProcessingRotateCommand(parentNode, shortcut, "Rotate table"));
	return p;
}

bool
ProcessingRotateCommand::execute(void)
{
	getParentNode()->sendRequestAndChompReply("MA0.1=1", 7, "Error sending command!");

	// Wait for motor to start turning
	Sleep(500);

	getParentNode()->sendRequestAndChompReply("MA0.1=0", 7, "Error sending command!");

	return (0 != getParentNode()->waitForCondition(COND_INPUT, 0, 0x20, 250));
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
ProcessingClampCommand::ProcessingClampCommand(NodePtr parentNode, const std::string shortcut, const std::string name, bool clamp)
: Command(parentNode, shortcut, name)
, _clamp(clamp)
{
}

CommandPtr
ProcessingClampCommand::create(bool clamp, const std::string shortcut, NodePtr parentNode)
{
	static std::map<bool, CommandPtr> p;
	
	std::map<bool, CommandPtr>::const_iterator i = p.find(clamp);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new ProcessingClampCommand(parentNode, shortcut, clamp ? "Clamp on" : "Clamp off", clamp));
		p[clamp] = c;
		return c;
	}
}

bool
ProcessingClampCommand::execute(void)
{
	return getParentNode()->sendRequestAndChompReply(_clamp ? "MA0.4=1" : "MA0.4=0", 7, "Error sending command!");
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
ProcessingDrillCommand::ProcessingDrillCommand(NodePtr parentNode, const std::string shortcut, const std::string name, bool on)
: Command(parentNode, shortcut, name)
, _on(on)
{
}

CommandPtr
ProcessingDrillCommand::create(bool on, const std::string shortcut, NodePtr parentNode)
{
	static std::map<bool, CommandPtr> p;
	
	std::map<bool, CommandPtr>::const_iterator i = p.find(on);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new ProcessingDrillCommand(parentNode, shortcut, on ? "Drill on" : "Drill off", on));
		p[on] = c;
		return c;
	}
}

bool
ProcessingDrillCommand::execute(void)
{
	return getParentNode()->sendRequestAndChompReply(_on ? "MA0.0=1" : "MA0.0=0", 7, "Error sending command!");
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
ProcessingDrillMoveCommand::ProcessingDrillMoveCommand(NodePtr parentNode, const std::string shortcut, const std::string name, bool up)
: Command(parentNode, shortcut, name)
, _up(up)
{
}

CommandPtr
ProcessingDrillMoveCommand::create(bool up, const std::string shortcut, NodePtr parentNode)
{
	static std::map<bool, CommandPtr> p;
	
	std::map<bool, CommandPtr>::const_iterator i = p.find(up);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new ProcessingDrillMoveCommand(parentNode, shortcut, up ? "Drill up" : "Drill down", up));
		p[up] = c;
		return c;
	}
}

bool
ProcessingDrillMoveCommand::execute(void)
{
	if (_up)
	{
		getParentNode()->sendRequestAndChompReply("MA0.2=0", 7, "Error sending command!");
		getParentNode()->sendRequestAndChompReply("MA0.3=1", 7, "Error sending command!");

		// Wait for the drill to be in the up position
		return (0 != getParentNode()->waitForCondition(COND_INPUT, 0, 0x08, 250));
	}
	else
	{
		getParentNode()->sendRequestAndChompReply("MA0.3=0", 7, "Error sending command!");
		getParentNode()->sendRequestAndChompReply("MA0.2=1", 7, "Error sending command!");

		// Wait for the drill to be in the up position
		return (0 != getParentNode()->waitForCondition(COND_INPUT, 0, 0x10, 250));
	}
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
ProcessingHeightProbeCommand::ProcessingHeightProbeCommand(NodePtr parentNode, const std::string shortcut, const std::string name, bool on)
: Command(parentNode, shortcut, name)
, _on(on)
{
}

CommandPtr
ProcessingHeightProbeCommand::create(bool on, const std::string shortcut, NodePtr parentNode)
{
	static std::map<bool, CommandPtr> p;
	
	std::map<bool, CommandPtr>::const_iterator i = p.find(on);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new ProcessingHeightProbeCommand(parentNode, shortcut, on ? "Height probe on" : "Height probe off", on));
		p[on] = c;
		return c;
	}
}

bool
ProcessingHeightProbeCommand::execute(void)
{
	return getParentNode()->sendRequestAndChompReply(_on ? "MA0.5=1" : "MA0.5=0", 7, "Error sending command!");
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
ProcessingLeverCommand::ProcessingLeverCommand(NodePtr parentNode, const std::string shortcut, const std::string name, unsigned int delay)
: Command(parentNode, shortcut, name)
, _delay(delay)
{
}

CommandPtr
ProcessingLeverCommand::create(unsigned int delay, const std::string shortcut, NodePtr parentNode)
{
	static std::map<unsigned int, CommandPtr> p;
	
	std::map<unsigned int, CommandPtr>::const_iterator i = p.find(delay);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new ProcessingLeverCommand(parentNode, shortcut, "Activate lever", delay));
		p[delay] = c;
		return c;
	}
}

bool
ProcessingLeverCommand::execute(void)
{
	if (!getParentNode()->sendRequestAndChompReply("MA0.6=1", 7, "Error sending command!")) return false;

	Sleep(_delay);

	return getParentNode()->sendRequestAndChompReply("MA0.6=0", 7, "Error sending command!");
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
ProcessingBusyCommand::ProcessingBusyCommand(NodePtr parentNode, const std::string shortcut, const std::string name, bool busy)
: Command(parentNode, shortcut, name)
, _busy(busy)
{
}

CommandPtr
ProcessingBusyCommand::create(bool busy, const std::string shortcut, NodePtr parentNode)
{
	static std::map<bool, CommandPtr> p;
	
	std::map<bool, CommandPtr>::const_iterator i = p.find(busy);
	if (p.end() != i)
	{
		return i->second;
	}
	else
	{
		CommandPtr c(new ProcessingBusyCommand(parentNode, shortcut, busy ? "Set busy flag" : "Clear busy flag", busy));
		p[busy] = c;
		return c;
	}
}

bool
ProcessingBusyCommand::execute(void)
{
	return getParentNode()->sendRequestAndChompReply(_busy ? "MA0.7=1" : "MA0.7=0", 7, "Error sending command!");
}

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
ProcessingInputSensorCommand::ProcessingInputSensorCommand(NodePtr parentNode, const std::string shortcut, const std::string name)
: SensorCommand(parentNode, shortcut, name)
, _inputState(IS_UNKNOWN)
{
}

CommandPtr
ProcessingInputSensorCommand::create(const std::string shortcut, NodePtr parentNode)
{
	static CommandPtr p(new ProcessingInputSensorCommand(parentNode, shortcut, "Query input sensor"));
	return p;
}

bool
ProcessingInputSensorCommand::execute(void)
{
	unsigned int mask = getParentNode()->waitForCondition(COND_INPUT, 0, 0x00, 1000);

	_inputState = (0 != (mask & 0x01)) ? IS_OCCUPIED : IS_FREE;

	return true;
}

unsigned int
ProcessingInputSensorCommand::getValue(void)
{
	return _inputState;
}

const char*
ProcessingInputSensorCommand::getValueString(void)
{
	switch (_inputState)
	{
		case IS_FREE:     return "free";
		case IS_OCCUPIED: return "occupied";
		default:          return "unknown";
	}
}


/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
ProcessingHeightSensorCommand::ProcessingHeightSensorCommand(NodePtr parentNode, const std::string shortcut, const std::string name)
: SensorCommand(parentNode, shortcut, name)
, _height(WP_HEIGHT_UNKNOWN)
{
}

CommandPtr
ProcessingHeightSensorCommand::create(const std::string shortcut, NodePtr parentNode)
{
	static CommandPtr p(new ProcessingHeightSensorCommand(parentNode, shortcut, "Query height sensor"));
	return p;
}

bool
ProcessingHeightSensorCommand::execute(void)
{
	unsigned int mask = getParentNode()->waitForCondition(COND_INPUT, 0, 0x00, 1000);

	_height = (0 != (mask & 0x40)) ? WP_HEIGHT_SMALL : WP_HEIGHT_LARGE;

	return true;
}

unsigned int
ProcessingHeightSensorCommand::getValue(void)
{
	return _height;
}

const char*
ProcessingHeightSensorCommand::getValueString(void)
{
	switch (_height)
	{
		case WP_HEIGHT_SMALL: return "small";
		case WP_HEIGHT_LARGE: return "large";
		default:              return "unknown";
	}
}


/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
ProcessingBusySensorCommand::ProcessingBusySensorCommand(NodePtr parentNode, const std::string shortcut, const std::string name)
: SensorCommand(parentNode, shortcut, name)
, _busy(SB_UNKNOWN)
{
}

CommandPtr
ProcessingBusySensorCommand::create(const std::string shortcut, NodePtr parentNode)
{
	static CommandPtr p(new ProcessingBusySensorCommand(parentNode, shortcut, "Query next station busy"));
	return p;
}

bool
ProcessingBusySensorCommand::execute(void)
{
	unsigned int mask = getParentNode()->waitForCondition(COND_INPUT, 0, 0x00, 1000);

	_busy = (0 != (mask & 0x80)) ? SB_BUSY : SB_READY;

	return true;
}

unsigned int
ProcessingBusySensorCommand::getValue(void)
{
	return _busy;
}

const char*
ProcessingBusySensorCommand::getValueString(void)
{
	switch (_busy)
	{
		case SB_READY: return "ready";
		case SB_BUSY:  return "busy";
		default:       return "unknown";
	}
}
