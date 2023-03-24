/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "LogoNodes.h"

#include "easycom/com/Serial.h"

#include <sstream>

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
NodePtr
LogoProxyNode::create(const std::string name, const std::string fileName)
{
	return NodePtr(new LogoProxyNode(name, fileName));
}

LogoProxyNode::LogoProxyNode(const std::string name, const std::string fileName)
: Node(name)
, _fileName(fileName)
, _serialPort(easycom::com::Serial::create(_fileName.c_str(), BAUDRATE_9600BPS, DATABITS_8BITS, FLOWCONTROL_OFF, PARITY_NOPARITY, STOPBITS_1BIT, false))
{
	try
	{
		_serialPort->open();
		setNodeAvailable(_serialPort->isConnected());
	}
	catch (...)
	{
	}
}

LogoProxyNode::~LogoProxyNode(void)
{
	_serialPort->close();
}

const std::string
LogoProxyNode::getComInfo(void)
{
	return _fileName;
}

unsigned int
LogoProxyNode::waitForCondition(ConditionType_t type, size_t identifier, unsigned int mask, size_t delay)
{
	if (COND_INPUT != type)
	{
		std::cout << "Error: Waiting for condition not implemented for outputs on this node!" << std::endl;
		return 0;
	}

	std::stringstream s;
	s << "?STATE[" << identifier << "]\r";

	comWrite(s.str().c_str(), s.str().length());

	const size_t BUF_SIZE = 256;
	char buf[BUF_SIZE];
	
	try
	{
		comRead(&buf, BUF_SIZE);

		s.str("");
		s << "?STATE[" << identifier << "]";

		if (0 != strncmp((const char*)&buf, s.str().c_str(), s.str().length()))
		{
			std::cout << "Error: Unexpected reply from controller!" << std::endl;
			return 0;
		}

		std::string b = buf;
		std::string value = b.substr(s.str().length()+1);

		unsigned int val = atoi(value.c_str());

		if (0 == mask)
		{
			// Any value satisfies
			return val;
		}
		else
		{
			// Mask satisfies
			return (val & mask);
		}
	}
	catch (...)
	{
		std::cout << "Error: Exception while waiting for input!" << std::endl;
		return 0;
	}
}
