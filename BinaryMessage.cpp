#include "BinaryMessage.h"
#include <iostream>

extern service_t* availableServices[];

BinaryMessage::BinaryMessage(void)
{
	this->Message.Data = NULL;
}

BinaryMessage::~BinaryMessage(void)
{
	if(this->Message.Data != NULL)
		free(this->Message.Data);
}

int BinaryMessage::ConnectTo(const char *host, const unsigned short port)
{
	this->tcpConnection = easycom::com::TcpSocket::create(host, port);
	try {
		tcpConnection->open();
	} catch (...) {
		return -1;
	}
	return 0;
}
void BinaryMessage::SetService(unsigned char service)
{
	this->Message.Service = service;
	this->Message.Data = (unsigned char *)malloc(this->GetInputByteLength());
}

// ***************************************************************************
//
// OLD CODE
//
// THIS WAS NOT REQUIRED AFTER WE CONSIDERED that there is no service which 
// requires a variable number of elements. (Data Type is fixed, hence Data 
// descriptor is eliminated, so that it become just length) The services 
// defined in services.h and their expected and returned data types are known 
// by the host and also by the microcontroller.
//
//void BinaryMessage::SetDataType(DataType datatype)
//{
//	this->Message.DataDescriptor &= 0x3F;		// Clear bits 8..7
//	this->Message.DataDescriptor |= datatype<<6;// Set bits 8..7
//}
//
//int BinaryMessage::SetLength(int length)
//{
//	if(length > 63) return -1;
//
//	if(this->Message.Data != NULL) {
//		free(this->Message.Data);
//		this->Message.Data = NULL;
//	}
//	this->Message.DataDescriptor &= 0xC0;		// Clear bits 6..1
//	this->Message.DataDescriptor |= length;		// Set bits 6..1
//
//	if(length == 0) return 0;
//
//	switch(this->GetDataType()) {
//		case DataBoolean:
//			length = ((length/8) + ((length%8) ? 1 : 0));
//			this->Message.Data = (unsigned char *)malloc(length);
//			break;
//		default:
//			this->Message.Data = (unsigned char *)malloc(length);
//			break;
//	}
//	if(this->Message.Data == NULL) {
//		return -1;
//	}
//
//	return 0;
//}
//
// ***************************************************************************

unsigned char BinaryMessage::GetService(void)
{
	return this->Message.Service;
}

type_t BinaryMessage::GetInputDataType(int pos)
{
	return availableServices[this->GetService()]->input[pos].type;
}

type_t BinaryMessage::GetOutputDataType(int pos)
{
	return availableServices[this->GetService()]->output[pos].type;
}

int BinaryMessage::GetInputLength(void)
{
	return availableServices[this->GetService()]->input_size;
}

int BinaryMessage::GetOutputLength(void)
{
	return availableServices[this->GetService()]->output_size;
}

int BinaryMessage::GetInputByteLength(void)
{
	return this->GetInputLength();
}

int BinaryMessage::GetOutputByteLength(void)
{
	//if(this->GetDataType() != DataBoolean) {
	//	return (this->Message.DataDescriptor & ~0xC0);
	//} else {
	//	int length = this->GetLength();
	//	length = ((length/8) + ((length%8) ? 1 : 0));
	//	return length;
	//}
	return this->GetOutputLength();
}

void *BinaryMessage::GetData(int pos)
{
	int byte_number = pos/8;
	int bit_number = pos%8;
	static	unsigned char	tmp;

	if(this->GetOutputLength() <= pos) {
		std::cout << "L: " << this->GetOutputLength() << ", P: " << pos << std::endl;
		return NULL;
	}

	switch(this->GetOutputDataType(pos)) {
		/*case DataBoolean:
			tmp = this->Message.Data[byte_number] & 1<<bit_number;
			return (void *)&tmp;*/
		default:
			return (void*)&this->Message.Data[pos];
	}
}

int BinaryMessage::SetData(int pos, void *data)
{
	int byte_number = pos/8;
	int bit_number = pos%8;

	if(pos >= this->GetInputLength()) return -1;

	switch(this->GetInputDataType(pos)) {
		//case DataBoolean:
		//	this->Message.Data[byte_number] = (*((int*)data) == 0) ? // Are we supposed to set to zero??
		//		this->Message.Data[byte_number] & ~(1<<bit_number) : // Yes, Clear Bit
		//		this->Message.Data[byte_number] | (1<<bit_number); // No, Set Bit
		//	break;
		default:
			this->Message.Data[pos] = *(unsigned char*)data;
			break;
	}

	return 0;
}

int BinaryMessage::Send(void)
{
	unsigned char *buffer;
	int length = sizeof(char) + this->GetInputByteLength();
	buffer = (unsigned char *)malloc(length);
	buffer[0] = this->Message.Service;
	memcpy(buffer+1, this->Message.Data, this->GetInputByteLength());
	try {
		this->tcpConnection->write((void *)buffer, length);
	} catch (...) {
		return -1;
	}
	return 0;
}


int BinaryMessage::Receive(void)
{
	if(this->Message.Data != NULL)
		free(this->Message.Data);

	try {
		this->tcpConnection->read(&this->Message.Service, sizeof(unsigned char));
		this->Message.Data = (unsigned char *) malloc(this->GetOutputLength());
		this->tcpConnection->read(this->Message.Data, this->GetOutputLength());
	} catch (...) {
		return -1;
	}
	return 0;
}
