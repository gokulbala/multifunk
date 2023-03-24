
/***   Includes                                                             ***/
/******************************************************************************/
#include "FecNodes.h"

#include "easycom/com/UdpSocket.h"

#include <Windows.h>

#include <sstream>

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
NodePtr
FecNode::create(const std::string name, const std::string peerAddress, unsigned short int peerPort)
{
	return NodePtr(new FecNode(name, peerAddress, peerPort));
}

FecNode::FecNode(const std::string name, const std::string peerAddress, unsigned short int peerPort)
: Node(name)
, _peerAddress(peerAddress)
, _peerPort(peerPort)
, _udpSocket(easycom::com::UdpSocket::create(peerAddress.c_str(), peerPort))
{	
	try
	{
		_udpSocket->open();
		setNodeAvailable(_udpSocket->isConnected());
	}
	catch (...)
	{
	}
}

FecNode::~FecNode(void)
{
	_udpSocket->close();
}

const std::string
FecNode::getComInfo(void)
{
	std::stringstream s;
	s << _peerAddress << ":" << _peerPort;
	return s.str();
}

unsigned int
FecNode::waitForCondition(ConditionType_t type, size_t identifier, unsigned int mask, size_t delay)
{
	const unsigned int BUF_SIZE = 256;
	char buf[BUF_SIZE];

	if (COND_INPUT != type && COND_OUTPUT != type)
	{
		return false;
	}

	std::stringstream readCommand;

	if (COND_INPUT == type)
	{
		readCommand << "DEW";
	}
	else
	{
		readCommand << "DAW";
	}

	readCommand << identifier;

	do
	{
		size_t size = readCommand.str().length();
		if (size != comWrite(readCommand.str().c_str(), size))
		{
			std::cout << "Error waiting for operation to complete!" << std::endl;
			return false;
		}

		try
		{
			memset(&buf, 0, BUF_SIZE);
			comRead(&buf, BUF_SIZE);
		}
		catch (...)
		{
			std::cout << "Error reading controller state!" << std::endl;
			return false;
		}

		if (0 != strncmp(buf, readCommand.str().c_str(), size))
		{
			std::cout << "Unexpected reply from controller!" << std::endl;
			return false;
		}

		unsigned int value = atoi(&buf[size+2]);

#ifdef DEBUGMSG
		std::cout << "Mask is 0x" << std::ios::hex << mask << ", value is " << value << std::endl;
#endif // #ifdef DEBUGMSG

		if (0 == mask)
		{
			// Any value satisfies
			return value;
		}
		else if (value & mask)
		{
			// Mask satisfies
			return (value & mask);
		}

		Sleep(delay);
	}
	while (1);
}
