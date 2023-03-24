#ifndef FECNODES_H
#define FECNODES_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Node.h"

/******************************************************************************/
/***   Class definitions                                                    ***/
/******************************************************************************/
class FecNode: public Node
{
private:
	std::string _peerAddress;
	unsigned short int _peerPort;
	easycom::com::ComPtr _udpSocket;

protected:
	FecNode(const std::string name, const std::string peerAddress, unsigned short int peerPort);

public:
	static NodePtr create(const std::string name, const std::string peerAddress, unsigned short int peerPort);

	virtual ~FecNode(void);

	virtual const std::string getComInfo(void);

	virtual unsigned int waitForCondition(ConditionType_t type, size_t identifier, unsigned int mask, size_t delay);

	inline virtual
	easycom::com::ComPtr getComChannel(void)
	{
		return _udpSocket;
	}
};

#endif // #ifndef FECNODES_H
