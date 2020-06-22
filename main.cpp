#include "Mapping.h"
#include "easycom/com/TcpSocket.h"
#include "BinaryMessage.h"
#include <iostream>
#include <sstream>
#include <winsock2.h>
#include <ws2tcpip.h>

#include "../../../shared/Services.h"


/******************************************************************************/
/***   Type definitions for integer types                                   ***/
/******************************************************************************/
/*
typedef int8_t mf_tInt8;
typedef int16_t mf_tInt16;
typedef int32_t mf_tInt32;
typedef int64_t mf_tInt64;
typedef uint8_t mf_tUint8;
typedef uint16_t mf_tUint16;
typedef uint32_t mf_tUint32;
typedef uint64_t mf_tUint64;
*/

typedef __int8 mf_tInt8;
typedef __int16 mf_tInt16;
typedef __int32 mf_tInt32;
typedef __int64 mf_tInt64;
typedef unsigned __int8 mf_tUint8;
typedef unsigned __int16 mf_tUint16;
typedef unsigned __int32 mf_tUint32;
typedef unsigned __int64 mf_tUint64;

#define MF_ROM_CONST(x) const x

//#include "mf/strtypes.h"

typedef MF_ROM_CONST(char)* mf_tRomString;

typedef enum
{
	ptFlag = 0,
	ptInt,
	ptDecimal
} mf_ePrimitiveDataTypes;

typedef struct
{
	mf_ePrimitiveDataTypes ePrimitiveDataType;
	mf_tInt32 iMinOrExponentBits;
	mf_tInt32 iMaxOrSignificandBits;
} mf_tPrimitiveDataType;

typedef struct
{
	mf_tRomString szName;
	void* pDataType;
	mf_tUint16 nElements;
} mf_tParameter;

typedef struct
{
	mf_tParameter* pParameters;
} mf_tStructuredDataType;

typedef struct
{
	mf_tRomString szName;
	mf_tParameter* parameters;
} mf_tPort;

typedef struct
{
	mf_tRomString szName;
	mf_tPort* pInputPorts;
	mf_tUint8 nInputPorts;
	mf_tPort* pOutputPorts;
	mf_tUint8 nOutputPorts;
} mf_tService;

//#define SERVICE_BEGIN(name) { \
//#define x y \
//}
//static MF_ROM_CONST(char)* g_serviceName = name;
/*
#define SERVICE_NAME ""
#define SERVICE_BEGIN()
#define SERVICE_END()

#define SERVICE_BEGIN_INPUT_PORT(portName) \
	mf_tParameter par ## SERVICE_NAME ## _input_ ## portName ## [] = \
	{

#define SERVICE_END_INPUT_PORT() \
	}

#define SERVICE_BEGIN_OUTPUT_PORT()
#define SERVICE_END_OUTPUT_PORT()

#define SERVICE_PARAMETER(paramName, dataType, elements) \
		{ \
			paramName, \
			&dataType, \
			elements \
		},
*/

mf_tPrimitiveDataType dtUint8 = { ptInt, 0, 255 }; // Example

//SERVICE_BEGIN(DriverAvrRawUsart)
//	SERVICE_BEGIN_INPUT_PORT("writeByte")
//		SERVICE_PARAMETER("byte", dtInt8, 1)
//		SERVICE_PARAMETER("bar", dtInt8, 2)
//	SERVICE_END_INPUT_PORT()
//SERVICE_END()

mf_tParameter parDriverAvrRawUsart_input_writeByte[] =
{
	{
		"byte",
		&dtUint8,
		1
	}
};

mf_tPort portsDriverAvrRawUsart[] =
{
	"writeByte",
	{
		&parDriverAvrRawUsart_input_writeByte[0]
	}
};

mf_tService svcDriverAvrRawUsart =
{
	"AVR Raw USART Driver",
	&portsDriverAvrRawUsart[0],
	5,
};

// ****************************************************************************************************
//
// MULTIFUNK PROTOCOL EXPLANATION

	// Packet format:
	// - Sender address (4 bytes)
	// - Sender port (2 bytes)
	// ---------------------------------- IP & UDP HEADER INFO (NOT INCLUDED)
	// - Service to be called (string? --> 1-2 bytes length, characters, examples: "getValue", "setValue", "reset")
	// - Data length in bytes?
	// - Parameters (anything) (restricted to boolean, integers, floating-point, strings)
	//   2 Strategies:
	//     1. Safe approach: first send the type of value, then the attribute value
	//        Example: T1, V1, T2, V2, ... where T1 is the type of 1st attribute, V1 is the value of the 1st attribute, etc.
	//     2. Memory-saving approach: only send the attribute value <--- implement this first
	//        Example: V1, V2, ...

	// Reply format:
	// - Status code (1 byte, error flag is 0)
	// - Result:
	//   2 Strategies from above, first implement no. 2

	// Error handling:
	// - Status code (1 byte, error flag is 1)
	// - Error message:
	//   2 Strategies from above, first implement no. 2

	//      host         microcontroller          MPS
	//       |                  |                  |
	// send UDP query           |                  |
	//       |  ------*------>  |                  |
	//       |            read UDP query           |
	//       |        prepare MPS UDP query        |
	//       |         send MPS UDP query          |
	//       |                  |  ------------->  |
	//       |                  |       read and process UDP query
	//       |                  |            send UDP reply
	//       |                  |  <-------------  |
	//       |        read MPD UDP reply           |
	//       |         prepare UDP reply           |
	//       |           send UDP reply            |
	//       |  <-----*-------  |                  |
	// receive UDP reply        |                  |
	// display result           |                  |

//
// ****************************************************************************************************

void printServices(void) {
	int i;
	std::cout << "Available Services:" << std::endl;
	for (i =0; availableServices[i] != NULL; i++){
		std::cout << " " << i << ": " << availableServices[i]->name << std::endl;
	}
	std::cout << "Please input your selection:" << std::endl;
}

int main (void) {
	std::cout << "Welcome to Multifunk!" << std::endl;

	BinaryMessage msg = BinaryMessage();
	msg.ConnectTo("172.26.5.3", 12345); // IP of the ARM Microcontroller

	int command, int_tmp, i;
	unsigned int uint_tmp;
	float float_tmp;
	double double_tmp;
	bool bool_tmp;
	char string_tmp[1024];
	//unsigned char *returned_value;
	service_t *service;
	
	for(printServices(), std::cin >> command; command != 99; printServices(), std::cin >> command){
		msg.SetService(command);

		service = availableServices[command]; // check range!!
		for(i = 0; i < service->input_size; i++){
			std::cout << " Please input value for parameter: " << service->input[i].name << std::endl;
			switch(service->input[i].type) {
				case ptBool:
					std::cin >> bool_tmp;
					msg.SetData(i, &bool_tmp);
					break;
				case ptInt8:
				case ptInt16:
				case ptInt32:
				case ptInt64:
					std::cin >> int_tmp;
					msg.SetData(i, &int_tmp);
					break;
				case ptUInt8:
				case ptUInt16:
				case ptUInt32:
				case ptUInt64:
					std::cin >> uint_tmp;
					msg.SetData(i, &uint_tmp);
					break;
					break;
				case ptFloat:
					std::cin >> float_tmp;
					msg.SetData(i, &float_tmp);
					break;
				case ptDouble:
					std::cin >> double_tmp;
					msg.SetData(i, &double_tmp);
					break;
				case ptString:
					std::cin >> string_tmp;
					msg.SetData(i, string_tmp);
					break;
				default:
					break;
			}
		}

		msg.Send();

		if(service->output_size > 0) {
			msg.Receive();
			for(i = 0; i < service->output_size; i++){
				switch(service->output[i].type) {
					case ptBool:
						break;
					case ptInt8:
					case ptInt16:
					case ptInt32:
					case ptInt64:
						break;
					case ptUInt8:
					case ptUInt16:
					case ptUInt32:
					case ptUInt64:
						uint_tmp = 0;
						memcpy(&uint_tmp, msg.GetData(i), 1);
						std::cout << " The output value of " << service->output[i].name << " is " << uint_tmp << std::endl;
						break;
					case ptFloat:
						break;
					case ptDouble:
						break;
					case ptString:
						break;
					default:
						break;
				}
			}
		}

// ****************************************************************************************************

// THIS WAS THE OLD WORKING CODE. 
//
// Initially, we had not defined the services in a separate shared header file, it was defined in the manner below, which worked

		//switch(command) {
		//	case 1:
		//		std::cout << "Resetting" << std::endl;
		//		msg.Send();
		//		break;
		//	case 2:
		//		std::cout << "Starting" << std::endl;
		//		msg.Send();
		//		break;
		//	case 3:
		//		std::cout << "Stopping" << std::endl;
		//		msg.Send();
		//		break;
		//	case 4:
		//		std::cout << "Extend Mini Slide" << std::endl;
		//		msg.Send();
		//		break;
		//	case 5:
		//		std::cout << "Retract Mini Slide" << std::endl;
		//		msg.Send();
		//		break;
		//	case 6:
		//		std::cout << "Open Gripper" << std::endl;
		//		msg.Send();
		//		break;
		//	case 7:
		//		std::cout << "Close Gripper" << std::endl;
		//		msg.Send();
		//		break;
		//	/* OLD CODE	
		//		std::cout << "Gripper" << std::endl;
		//		std::cout << "Please input Open or Close" << std::endl;
		//		std::cin >> h;
		//		msg.SetDataType(BinaryMessage::DataInteger);
		//		if (msg.SetLength(1) < 0) {
		//			std::cout << "There has been an error, sorry" << std::endl;
		//			continue; 
		//		}
		//		if (msg.SetData(0, &h) < 0) {
		//			std::cout << "There has been an error, sorry" << std::endl;
		//			continue;
		//		}
		//		msg.Send();
		//		break;
		//		*/
		//	case 8:
		//		std::cout << "Position" << std::endl;
		//		std::cout << "Please input the desired heigth (0-7)" << std::endl;
		//		std::cin >> h;
		//		std::cout << "Please input the desired angle (0-7)" << std::endl;
		//		std::cin >> a;
		//		if (msg.SetData(0, &h) < 0) {
		//			std::cout << "There has been an error, sorry" << std::endl;
		//			continue;
		//		}
		//		if (msg.SetData(1, &a) < 0) {
		//			std::cout << "There has been an error, sorry" << std::endl;
		//			continue;
		//		}
		//		msg.Send();
		//		break;
		//	case 9:
		//		std::cout << "DEW0" << std::endl;
		//		if (msg.Send() < 0) {
		//			std::cout << "There has been an error sending data, sorry" << std::endl;
		//			continue;
		//		}
		//		if (msg.Receive() < 0) {
		//			std::cout << "There has been an error receiving data, sorry" << std::endl;
		//			continue;
		//		}
		//		if (msg.GetService() != 9 || msg.GetLength() != 1) {
		//			std::cout << "There has been an error with the recieved data, sorry" << std::endl;
		//			continue;
		//		}
		//		returned_value = (unsigned char *)msg.GetData(0);
		//		std::cout << "The value is " << (int)*returned_value << ", thanks" << std::endl;
		//		break;
		//	default:
		//		std::cout << "That command does not exist" << std::endl;
		//		break;
		//}
	}

	//std::cout << "Current value of \"" << mapping.name(reg).c_str() << "\" is " << value << std::endl;

	/*****************
	BinaryMessage msg = BinaryMessage();
	msg.ConnectTo("google.com", 12345);
	msg.SetService(22);
	msg.SetDataType(BinaryMessage::DataBoolean);
	msg.SetLength(6);
	int _true = 1;
	int _false = 0;
	msg.SetData(0, (void *)&_true); 
	msg.SetData(1, (void *)&_false); 
	msg.SetData(2, (void *)&_true);
	msg.SetData(3, (void *)&_false);
	msg.SetData(4, (void *)&_true); 
	msg.SetData(5, (void *)&_false);
	if(msg.Send() == -1)
		std::cout << "Oh, no!!! Something failed!!!" << std::endl;
	*****************/
// END OF OLD CODE

// ****************************************************************************************************
	return 0;
}
