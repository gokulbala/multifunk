/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Node.h"

#include "easycom/com/Com.h"

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/
Node::Node(const std::string name)
: _available(false)
, _name(name)
{
}

Node::~Node(void)
{
	_commands.clear();
}

size_t
Node::comRead(void* buf, size_t count)
{
	easycom::com::ComPtr com = getComChannel();
	assert(com);

	easycom::com::Com* p = dynamic_cast<easycom::com::Com*>(com.get());
	assert(p);

#ifdef DEBUGMSG
	std::cout << "Read " << count << " byte(s): ";
#endif // #ifdef DEBUGMSG

	memset(buf, 0, count);

	size_t status = p->read(buf, count);

#ifdef DEBUGMSG
	std::cout << status;
	if (0 != status)
	{
		std::cout << " \"" << (const char*)buf << "\"";
	}
	std::cout << std::endl;
#endif // #ifdef DEBUGMSG

	return status;
}

size_t
Node::comWrite(const void* buf, size_t count)
{
	easycom::com::ComPtr com = getComChannel();
	assert(com);

	easycom::com::Com* p = dynamic_cast<easycom::com::Com*>(com.get());
	assert(p);

#ifdef DEBUGMSG
	std::cout << "Write " << count << " byte(s): \"" << (const char*)buf << "\" ... ";
#endif // #ifdef DEBUGMSG

	size_t status = p->write(buf, count);

#ifdef DEBUGMSG
	std::cout << status << std::endl;
#endif // #ifdef DEBUGMSG

	return status;
}

void
Node::chompReply(void)
{
	const size_t BUF_SIZE = 256;
	char buf[BUF_SIZE];

	try
	{
		comRead(&buf, BUF_SIZE);
	}
	catch (...)
	{
	}
}

bool
Node::sendRequestAndChompReply(const void* buf, size_t size, const char* errorMessage)
{
	if (size != comWrite(buf, size))
	{
		std::cout << errorMessage << std::endl;
		return false;
	}

	chompReply();

	return true;
}
