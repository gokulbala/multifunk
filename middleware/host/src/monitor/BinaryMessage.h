#pragma once

#include "easycom/com/TcpSocket.h"
#include "../../../shared/Types.h"

class BinaryMessage
{
private:
	struct _Message {
		unsigned char Service;
		unsigned char *Data;
	};

	struct	_Message Message;
	easycom::com::ComPtr tcpConnection;
	int GetInputByteLength(void);
	int GetOutputByteLength(void);

public:
	typedef enum DataType { DataBoolean, DataInteger, DataFloat, DataString };
	
	BinaryMessage(void);
	~BinaryMessage(void);

	int ConnectTo(const char *host, const unsigned short port);

	type_t GetInputDataType(int pos);
	type_t GetOutputDataType(int pos);
	int GetInputLength(void);
	int GetOutputLength(void);

	void SetService(unsigned char service);
	/*void SetDataType(DataType datatype); // Used earlier, then eliminated, reason as in BinaryMessage.cpp
	int SetLength(int length);*/
	int SetData(int pos, void *data);
	int Send(void);

	int Receive(void);
	unsigned char GetService(void);
	void *GetData(int pos);
};
