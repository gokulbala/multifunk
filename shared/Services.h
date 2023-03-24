#ifndef _SERVICES_H_
#define _SERVICES_H_

#include "types.h"

int dataTypeSize[] = {
	1,				// ptBool
	8, 16, 32, 64,  // ptInt
	8, 16, 32, 64,	// ptUInt
	32, 64,			// Float, Double
	0				// String
};

// ----- Festo MPS Reset Service -----

service_t festoMpsResetService = {
	"mps-reset",
	NULL, 0,
	NULL, 0
};

// ----- Festo MPS Start Service -----

service_t festoMpsStartService = {
	"mps-start",
	NULL, 0,
	NULL, 0
};

// ----- Festo MPS Stop Service -----

service_t festoMpsStopService = {
	"mps-stop",
	NULL, 0,
	NULL, 0
};

// ----- Festo MPS Extend Mini Slide Service -----

service_t festoMpsExtendService = {
	"mps-extend-mini-slide",
	NULL, 0,
	NULL, 0
};

// ----- Festo MPS Retract Mini Slide Service -----

service_t festoMpsRetractService = {
	"mps-retract-mini-slide",
	NULL, 0,
	NULL, 0
};

// ----- Festo MPS Open Gripper Service -----

service_t festoMpsOpenGripperService = {
	"mps-open-gripper",
	NULL, 0,
	NULL, 0
};

// ----- Festo MPS Close Gripper Service -----

service_t festoMpsCloseGripperService = {
	"mps-close-gripper",
	NULL, 0,
	NULL, 0
};

// ----- Festo MPS Set Position Service -----

parameter_t festoMpsSetPositionInputParam[] = {
	"height",
	ptUInt8,
	0, 7,
	"angle",
	ptUInt8,
	0, 7
};

service_t festoMpsSetPositionService = {
	"mps-set-position",
	&festoMpsSetPositionInputParam[0], 2,
	NULL, 0,
};

// ----- Festo MPS Get Status Service -----

parameter_t festoMpsGetStatusOutputParam[] = {
	"status-word",
	ptUInt8,
	0, 255
};

service_t festoMpsGetStatusService = {
	"mps-get-status",
	NULL, 0,
	&festoMpsGetStatusOutputParam[0], 1,
};

// ----- Festo MPS Output Word Service (EXAMPLE) -----

//parameter_t festoMpsOutputWordInputParam[] = {
//	"index",
//	ptUInt8,
//	0, 255,
//	"heigth",
//	ptUInt16,
//	0, 2000
//};
//
//parameter_t festoMpsOutputWordOutputParam[] = {
//	"value",
//	ptUInt8,
//	0, 255
//};
//
//service_t festoMpsOutputWord = {
//	"mps-outputword",
//	&festoMpsOutputWordInputParam[0], 2,
//	&festoMpsOutputWordOutputParam[0], 1,
//};

// ----- List of available services -----

service_t* availableServices[] = {
	&festoMpsResetService,
	&festoMpsStartService,
	&festoMpsStopService,
	&festoMpsExtendService,
	&festoMpsRetractService,
	&festoMpsOpenGripperService,
	&festoMpsCloseGripperService,
	&festoMpsSetPositionService,
	&festoMpsGetStatusService,
	NULL
};

// ****************************************************************************************************
//
// METHODOLOGY to implement Services
//
/*
We have a  constant number of parameters with well-known type as specified in the common services.h
header file. This means that we will only need to transmit the actual values.

Here's a more detailed explanation: The services defined in services.h
and their expected and returned data types are known by the host and
also by the microcontroller. We first assume that there is *no* service
that needs a variable number of elements. This means
that implementation of a service works as follows:

1. Define the service name and parameters and add it to services.h.

2. Implement the service routine (a C function) given the parameters and
return values specified in services.h as a C function.

3. Deploy this C function to the target (e.g., microcontroller).

Calling of a service works like this:

1. Host looks up the available services and chooses one to call.

2. Host gathers all required parameters as defined by the service
specification.

3. Host serializes the parameters using a marshaller implementation.
This is the point where the parameters are transformed to the binary
protocol. Since we know the types of the parameters, we can easily pack
them one after another using bit fields. For this to be efficient, we
should define minimum and maximum values for all integers in services.h.
For example, in your case 1 above, the two coordinates are for sure
limited to quite small numbers, so explicitly specifying the minimum and
maximum would be beneficial for the transfomamtion to the binary
protocol (e.g., for storing 5 different values, 3 bit would be enough).

4. Data transmission and reception.

5. Service broker (some piece of software on the microcontroller that
handles communication) checks whether the data is to be used by this
unit and if yes, checks whether the service exists. If yes, it
demarshals the data (retrieving the original parameter values) according
to the specification in services.h. These parameters are then passed to
the service routine. The result or just a success message, is marshaled
by the service broker.

5. Data transmission and reception.

6. Demarshalling, display of the data.

So we can really restrict ourselves to the most simple case, because
it's important for us to show the whole setup working and we will not
benefit that much from the fact that we can handle arbitrary number of
parameters etc. This will be needed later on of course, but currently
this does not have priority.

Example:

Host:
Choose which service to use:
 [1] mps-reset
 [2] mps-outputword

For example, if [2] is chosen:

Enter value for parameter "index":
 > ...0 or 1

Assume the index is 1:

Pack the values into a binary packet:

Service ID: 2
Parameter1: Type uint8, value "1"
--> [10] [00000001]

Microcontroller:
Read service ID --> 2
Looks up service properties, finds out that service #2 has 1 input parameter of type uint8 and 1 output parameter of type uint8
Packet is decompressed:
  Service ID: 2
  Parameter 1: Value "1"

Call service function: service2(1);
Receive result: For example 42

Pack the result: [10] [00101010]
Send result

Host:
Host knows that service #2 has 1 output parameter of type uint8
Decompress result: --> #2, value 42
--> Output: "Result #1 was 42."
*/

// ****************************************************************************************************

#endif // #ifndef _SERVICES_H_
