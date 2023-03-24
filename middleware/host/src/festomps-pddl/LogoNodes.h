#ifndef LOGONODES_H
#define LOGONODES_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Node.h"

/******************************************************************************/
/***   Class definitions                                                    ***/
/******************************************************************************/
class LogoProxyNode: public Node
{
private:
	std::string _fileName;
	easycom::com::ComPtr _serialPort;

protected:
	LogoProxyNode(const std::string name, const std::string fileName);

public:
	static NodePtr create(const std::string name, const std::string fileName);

	virtual ~LogoProxyNode(void);

	virtual const std::string getComInfo(void);

	virtual unsigned int waitForCondition(ConditionType_t type, size_t identifier, unsigned int mask, size_t delay);

	inline virtual
	easycom::com::ComPtr getComChannel(void)
	{
		return _serialPort;
	}
};

#endif // #ifndef LOGONODES_H
