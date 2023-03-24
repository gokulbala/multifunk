#define _CRT_SECURE_NO_WARNINGS

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "easycom/com/ComException.h"
#include "easycom/com/Serial.h"
#include "easycom/modbus/Modbus.h"

//#include "easyutil/Log.h"

//#include "rec/core/utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USE_MYSQL

#ifdef USE_MYSQL
#include <my_global.h>
#include <mysql.h>
#endif

#ifdef WIN32
#	include <windows.h>
	// _getch
#	include <conio.h>

#ifndef snprintf
#	define snprintf sprintf_s
#endif // #ifndef snprintf

#else /* #ifdef WIN32 */
	// getchar
#	include <stdio.h>
	// usleep
#	include <unistd.h>
#endif

/******************************************************************************/
/***   Defines                                                              ***/
/******************************************************************************/
#define LOOP 1
#define SLAVE 1
#define FIELDS 5

#define LOGDEBUG std::cout << "Debug: "
#define LOGNOTE std::cout << "Note: "
#define LOGERROR std::cout << "Error: "
#define LOGENDL std::endl

#define SLAVE_ID_INVALID 247 // highest valid Modbus address

#define TEMP 1
#define PRES 2

static unsigned char nextSlaveId = 0x01;

/******************************************************************************/
/***   Helper functions and methods                                         ***/
/******************************************************************************/
//void logHandler (easyutil::Log::LogMessageVerbosity verb, const std::string& msg, void* userData) {
//	std::cout << msg << std::endl;
//}

void waitForKey()
{
#ifdef WIN32
	_getch();
#else /* #ifdef WIN32 */
	::getchar();
#endif /* #ifdef WIN32 */
}

void msleep( unsigned int ms )
{
#ifdef WIN32
	SleepEx( ms, false );
#else
	::usleep( ms * 1000 );
#endif
}

#ifdef USE_MYSQL
static MYSQL *gDBConn = NULL;
#endif

void mysql_fini()
{
#ifdef USE_MYSQL
	mysql_close(gDBConn);
#endif
}

void mysql_init()
{
#ifdef USE_MYSQL
	gDBConn = mysql_init(NULL);

	if (NULL == gDBConn)
	{
		printf("Error %u: %s\n", mysql_errno(gDBConn), mysql_error(gDBConn));
		waitForKey();
		exit(1);
	}

	if (mysql_real_connect(gDBConn, "192.168.17.187", "multifunk", "mfcpslab", "multifunk", 0, NULL, 0) == NULL)
	{
		printf("Error %u: %s\n", mysql_errno(gDBConn), mysql_error(gDBConn));
		waitForKey();
		exit(1);
	}

	printf("Inventory:\n--------------------\n");

	mysql_query(gDBConn, "SELECT * FROM inventory");
	MYSQL_RES *result = mysql_store_result(gDBConn);

	int num_fields = mysql_num_fields(result);

	while (MYSQL_ROW row = mysql_fetch_row(result))
	{
		for(int i = 0; i < num_fields; i++)
		{
			printf("%s ", row[i] ? row[i] : "NULL");
		}
		printf("\n");
	}

	mysql_free_result(result);

	printf("--------------------\n");

	atexit(mysql_fini);
#endif
}

/******************************************************************************/
/***   Main program                                                         ***/
/******************************************************************************/
int main(int argc, char* argv[])
{
	int ok;
	int addr;
	int field_nb;
	int NumOfDev = 0;
	int FlagTemp = 0;
	int FlagPres = 0;
	int scanMode = 1;
	int polMode = 0;
	char str [80];

	easycom::modbus::Modbus::unit_t *tab_rq=0;
	easycom::modbus::Modbus::unit_t *tab_rq_bits=0;
	easycom::modbus::Modbus::unit_t *tab_rp=0;
	easycom::modbus::Modbus::unit_t reg[50];

#ifdef USE_MYSQL
	mysql_init();

	printf("MySQL client version: %s\n", mysql_get_client_info());
#endif

	// Log to stdout
//	LOG.registerReceiver(logHandler);

#ifdef WIN32
	std::string dev = "COM4";
#else
#ifdef __FreeBSD__
	// First USB-to-485 converter
	std::string dev = "/dev/cuaU0";
	
	// Real HW RS232-port
	//std::string dev = "/dev/cuad1";
#else
	// First USB-to-485 converter
	std::string dev = "/dev/ttyUSB0";
	
	// Real HW RS232-port
	//std::string dev = "/dev/ttyS0";
#endif // #ifdef __FreeBSD__
#endif // #ifdef WIN32

	// Create a communication channel
	easycom::com::ComPtr serial = easycom::com::Serial::create(
		dev.c_str(),
		BAUDRATE_38400BPS, //BAUDRATE_19200BPS,
		DATABITS_8BITS,
		FLOWCONTROL_OFF,
		PARITY_NOPARITY,
		STOPBITS_1BIT,
		true
	);

	// Create Modbus instance on the communication channel
	easycom::modbus::Modbus modbus(serial);

	try {
		modbus.open();
		LOGNOTE << "Successfully opened " << dev << LOGENDL;
	} catch (util::Exception& e) {
		LOGERROR << "Error opening " << dev << ": " << e.what() << "." << LOGENDL;

		waitForKey();
		return -1;
	}	

	try 
	{
		tab_rq = new easycom::modbus::Modbus::unit_t[FIELDS];
		tab_rq_bits = new easycom::modbus::Modbus::unit_t[FIELDS];
		tab_rp = new easycom::modbus::Modbus::unit_t[FIELDS];

		memset(tab_rq, 0, sizeof(easycom::modbus::Modbus::unit_t)*FIELDS);
		memset(tab_rq_bits, 0, sizeof(easycom::modbus::Modbus::unit_t)*FIELDS);
		memset(tab_rp, 0, sizeof(easycom::modbus::Modbus::unit_t)*FIELDS);

		addr = 0;
		//ok = modbus.read_coil_status(SLAVE, addr, 2, tab_rp);
		easycom::modbus::Modbus::unit_t cnt[3];
		cnt[0] = 1;
		cnt[1] = 1;
		cnt[2] = 1;
	} catch (util::Exception&){}


#if 0
		// Detect all available devices
		printf("Scanning for all devices ...\n");
		for (int slave=0; slave<20 /*SLAVE_ID_INVALID*/; slave++)
		{
			printf("Trying address %d ... ", slave);
			easycom::modbus::Modbus::unit_t reg[14];
			
			/// @brief Read the input registers in a slave and put the data into
			/// 	an array.
			/// @param slave Slave id where the input registers should be read.
			/// @param startAddr Start address of the first input register.
			/// @param count Number of registers that should be read.
			/// @param dest Pointer to the result array.
			/// @return Returns 0 on success or a negative value in case of an error.
			ok = modbus.readMultipleHoldingRegisters(slave, 220, 13, reg);
			if (ok != -12)
			{
				reg[13] = 0;
				printf("Found device \"%s\" at address %d!\n", (char*)&reg[0], slave);
			}
		}
#endif

	// MARCEL: Scan for connected Devices, if found set Address to 247
#if 0
	printf("\n\nScan for connected Devices...\n");
	printf("---------------------------------\n");
	// Scan for regular addresses
	for (int adress=1; adress<=5; adress++)
	{
		printf("Scan adress %d... ", adress);
		ok = modbus.readMultipleHoldingRegisters(adress, 200, 1,  &reg[0]);
		if(ok != -12) // A new Device is found
		{
			printf("Device is found\n", reg[0]);
			printf("-->Address will be changed to 247... ");
			ok = modbus.writeSingleHoldingRegister(adress, 200, 247);
			NumOfDev++;
		}
	}
	printf("--> %d Device(s) found\n\n",NumOfDev);
	printf("--> Please let just one device be connected and add other every 2s\n");

	char str [80];
	scanf ("%s",str);
	printf("%s",str); 

	NumOfDev = 0;
	waitForKey();

#endif

	// MARCEL: change adress of device 247 back
#if 0 
	printf("change adress of device 247 back...");
	modbus.writeSingleHoldingRegister(247, 200, 1);
#endif


	// MARCEL: Read and Write MODBUS node adress from/to Device ETA 3.01
#if 0	// --> MODBUS-ERROR -12....

		printf("\n\n***    READ/ WRITE MODBUS adress FROM/ TO ETA 3.01...    ***\n\n");
		
		reg[0]=0;
		printf("Read MODBUS adress from device...");
		ok = modbus.readMultipleHoldingRegisters(3, 200, 1,  &reg[0]);
		printf("Reply: %d\n",ok);
		if (ok != -12)
		{
					printf("MODBUS node address: %d \n", reg[0]);
		}
		printf("\n");

#if 0
		printf("Write MODBUS adress...");
		reg[0]=1;
		ok = modbus.writeSingleHoldingRegister(3, 200, reg[0]);
		printf("Reply: %d\n",ok);
		if (ok != -12)
		{
					reg[13] = 0;
					printf("Change MODBUS node address to : %d... \n", reg[0]);
		}
		printf("\n");
#endif

		printf("Read MODBUS adress from device...");
		ok = modbus.readMultipleHoldingRegisters(1, 200, 1,  &reg[0]);
		printf("Reply: %d\n",ok);
		if (ok != -12)
		{
					reg[13] = 0;
					printf("MODBUS node address has changed to: %d \n", reg[0]);
		}
		printf("\n");
		
		printf("Write MODBUS adress...");
		reg[0]=3;
		ok = modbus.writeSingleHoldingRegister(1, 200, reg[0]);
		printf("Reply: %d\n",ok);
		if (ok != -12)
		{
					printf("MODBUS node address has changed to: %d \n", reg[0]);
		}
		printf("\n");
#endif

	// MARCEL: Read all registers from ETA 3.01
#if 0		
		int slaveID = 1;
		printf("\n\n*** READ Sensor-Data from ETA 3.01...  ***\n\n");
		

		printf("READ actual value of channel 0..3 ...");
		ok = modbus.readMultipleInputRegisters(slaveID, 0, 4, &reg[0]);
		printf("Reply: %d\n",ok);
		printf("READ max & min values of channel 0..3 ...");
		ok = modbus.readMultipleHoldingRegisters(slaveID, 0, 8, &reg[4]);
		printf("Reply: %d\n",ok);
		printf("READ available temperature channels and channels to calibrate...");
		ok = modbus.readMultipleHoldingRegisters(slaveID, 100, 2, &reg[12]);
		printf("Reply: %d\n",ok);
		printf("READ calibration data...");
		ok = modbus.readMultipleHoldingRegisters(slaveID, 120, 7, &reg[14]);
		printf("Reply: %d\n",ok);
		printf("READ number of temperature readings for mean value...");
		ok = modbus.readMultipleHoldingRegisters(slaveID, 133, 1, &reg[21]);
		printf("Reply: %d\n",ok);
		printf("READ temperature threshold value for dig out...");
		ok = modbus.readMultipleHoldingRegisters(slaveID, 150, 1, &reg[22]);
		printf("Reply: %d\n",ok);
		printf("READ modbus node address...");
		ok = modbus.readMultipleHoldingRegisters(slaveID, 200, 1, &reg[23]);
		printf("Reply: %d\n",ok);
		printf("READ Product name...");
		ok = modbus.readMultipleHoldingRegisters(slaveID, 220, 3, &reg[24]);
		reg[27]=0;	// termination of string
		printf("Reply: %d\n",ok);
		printf("READ Serial number...");
		ok = modbus.readMultipleHoldingRegisters(slaveID, 223, 3, &reg[28]);
		reg[31]=0;	// termination of string
		printf("Reply: %d\n",ok);
		printf("READ software version...");
		ok = modbus.readMultipleHoldingRegisters(slaveID, 226, 5, &reg[32]);
		reg[37]=0;	// termination of string
		printf("Reply: %d\n",ok);
		printf("READ manufacturer code...");
		ok = modbus.readMultipleHoldingRegisters(slaveID, 231, 2, &reg[38]);
		reg[40]=0;	// termination of string
		printf("Reply: %d\n",ok);

		// Print...
		printf("\n\n");
		printf("TEMPERATURE:  min\tactual\tmax\n");
		printf("channel 0:    %0.1fC\t%0.1fC\t%0.1fC\n", (float)reg[4]/100, (float)reg[0]/100, (float)reg[5]/100);
		printf("channel 1:    %0.1fC\t%0.1fC\t%0.1fC\n", (float)reg[6]/100, (float)reg[1]/100, (float)reg[7]/100);
		printf("channel 2:    %0.1fC\t%0.1fC\t%0.1fC\n", (float)reg[8]/100, (float)reg[2]/100, (float)reg[9]/100);
		printf("channel 3:    %0.1fC\t%0.1fC\t%0.1fC\n", (float)reg[10]/100, (float)reg[3]/100, (float)reg[11]/100);
		printf("\n");
		printf("Number of available temperature channels: %d\n", reg[12]);
		printf("Channel no. to calibrate: %d\n", reg[13]);
		printf("\n");
		printf("number of available cal. points: %d\n", reg[14]);
		printf("calibration point no., to which the cal refers: %d\n",reg[15]);
		printf("calibration value, upper bit: %d\n", reg[16]);
		printf("calibration value, lower bit: %d\n", reg[17]);
		printf("Date of Calibration: %d.%d.%d\n", reg[20], reg[19], reg[18]);
		printf("\n");
		printf("temperature readings for mean value: %d\n", reg[21]);
		printf("temperature threshold value: %d\n", reg[22]/100);
		printf("modbus address: %d\n", reg[23]);
		printf("\n");
		printf("product name: %s \n", &reg[24]);
		printf("serial number: %s \n", &reg[28]);
		printf("software version: %s \n", &reg[32]);
		printf("manufacturer code: %s \n", &reg[38]);
#endif

#if 0
		// MARCEL: Choose Scan- or Polling-Mode
		printf("\n\ns:\tScan for available Devices and set them to 247\np:\tPolling Mode\n");
		scanf ("%s",str);
		if (0 == strncmp((const char*)&str, "s", 6))
		{
			scanMode=1;
		}
		if (0 == strncmp((const char*)&str, "p", 6))
		{
			polMode=1;
		}
#endif


		while (1) 
		{
			// MARCEL:	polMode:	* Scan for a new Device at 247 and at them if any,
			//			scanMode:	* Read available Sensor Data

			// Scan for available devices and set their address to 247
			if (scanMode)
			{
				printf("\n\nScan for connected Devices...\n");
				printf("---------------------------------\n");
				// Scan for regular addresses
				for (int adress=1; adress<=5; adress++)
				{
					printf("Scan adress %d... ", adress);
					ok = modbus.readMultipleHoldingRegisters(adress, 200, 1,  &reg[0]);
					if(ok != -12) // A new Device is found
					{
						printf("Device is found\n", reg[0]);
						printf("-->Address will be changed to 247... ");
						ok = modbus.writeSingleHoldingRegister(adress, 200, 247);
						NumOfDev++;
					}
				}
				printf("--> %d Device(s) found\n\n",NumOfDev);
				printf("--> Please let just one device be connected and add other every 2s\n");
				NumOfDev = 0;
				scanMode=0;
				polMode=1;
				waitForKey();
			}
			if (polMode)
			{
				//printf("\n\nStart polling-mode...\n");
				//printf("-----------------------\n");
				// Test if a Device has address 247
				printf("\nScan for a new Device... ");
				ok = modbus.readMultipleHoldingRegisters(247, 200, 1,  &reg[0]);
				printf("\n");
				if(ok != -12) // A new Device is found
				{
					printf("A new Device is found\n");
					// Get Type of Sensor
					printf("READ Serial Number...");
					ok = modbus.readMultipleHoldingRegisters(247, 223, 3, &reg[0]);
					reg[3]=0;	// termination of string
					printf("Reply: %d\n",ok);
					printf("Serial Number: %s ", &reg[0]);
					// Classify Sensor
					if (0 == strncmp((const char*)&reg[0], "000507", 6))
					{
						printf(" -> Pressure Sensor\n");
						// Give a new adress
						printf("The new Adress is: %d...  ", PRES);
						ok = modbus.writeSingleHoldingRegister(247, 200, PRES);
						for (int i=0; i<=3; i++) { reg[i]=0; }
						// Set FlagPres
						FlagPres = 1;
					}
					if (0 == strncmp((const char*)&reg[0], "000516", 6))
					{
						printf(" -> Temperature Sensor\n");
						// Give a new adress
						printf("The new Adress is: %d...  ", TEMP);
						ok = modbus.writeSingleHoldingRegister(247, 200, TEMP);
						for (int i=0; i<=3; i++) { reg[i]=0; }
						// Set FlagTemp
						FlagTemp = 1;
					}
				}
				// MARCEL: Read Temperatures
				if (FlagTemp == 1)
				{
					printf("\nREAD Temperature...");
					ok = modbus.readMultipleInputRegisters(TEMP, 0, 4, &reg[0]);
					if (ok == -12)	// Sensor ist weg
					{
						printf("Tempsensor removed\n");
						FlagTemp = 0;
					}
					else
					{
						printf("\nTemp: %0.1fC\t %0.1fC\t %0.1fC\t %0.1fC\n",(float)reg[0]/100, (float)reg[1]/100, (float)reg[2]/100, (float)reg[3]/100);
					}
				}
				// MARCEL: Read Pressure
				if (FlagPres == 1)
				{
					printf("\nREAD Pressure\n");
					ok = modbus.readMultipleInputRegisters(PRES, 0, 4, &reg[0]);
					if (ok == -12)	// Sensor ist weg
					{
						printf("Pressure Sensor removed\n");
						FlagPres = 0;
					}
					else
					{
						printf("Pres: %0.1fP\t %0.1fP\t %0.1fP\t %0.1fP\n",(float)reg[0]/100, (float)reg[1]/100, (float)reg[2]/100, (float)reg[3]/100);
					}
				}
			}


			//gets (str);

#if 0			// Detect device with invalid address
			{
				printf("Scanning for new devices ... ");

				easycom::modbus::Modbus::unit_t reg[13];
				ok = modbus.readMultipleHoldingRegisters(SLAVE_ID_INVALID, 220, 13, reg);
				if (ok != -12)
				{
					printf("detected unregistered device!\n");

					#define STRING_SIZE 50
					char serial[STRING_SIZE];
					snprintf(serial, 29, "%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
						reg[0] >> 8, reg[0] & 0xFF,
						reg[1] >> 8, reg[1] & 0xFF,
						reg[2] >> 8, reg[2] & 0xFF,
						reg[3] >> 8, reg[3] & 0xFF,
						reg[4] >> 8, reg[4] & 0xFF,
						reg[5] >> 8, reg[5] & 0xFF,
						reg[6] >> 8, reg[6] & 0xFF,
						reg[7] >> 8, reg[7] & 0xFF,
						reg[8] >> 8, reg[8] & 0xFF,
						reg[9] >> 8, reg[9] & 0xFF,
						reg[10] >> 8, reg[10] & 0xFF,
						reg[11] >> 8, reg[11] & 0xFF,
						reg[12] >> 8, reg[12] & 0xFF
					);
					//snprintf(&buf[0], 100, "Data: %s", serial);
					//LOGNOTE << buf << LOGENDL;

					// TODO: Look up device in database
					LOGNOTE << "Looking up serial number '" << serial << "' in inventory..." << LOGENDL;
#endif

#if 0
#ifdef USE_MYSQL
					MYSQL_STMT *stmt = stmt = mysql_stmt_init(gDBConn);
					if (!stmt)
					{
						LOGERROR << "Unable to initialize statement: " << mysql_error(gDBConn) << LOGENDL;
						continue;
					}
					const char* query = "SELECT i.device_type FROM inventory i WHERE i.serial_no = ?";
					unsigned long length = 26;
					if (mysql_stmt_prepare(stmt, query, strlen(query)))
					{
						LOGERROR << "Unable to prepare statement: " << mysql_error(gDBConn) << LOGENDL;
						continue;
					}

//					unsigned long param_count = mysql_stmt_param_count(stmt);
//					fprintf(stdout, "Total parameters: %d\n", param_count);
//					if (param_count != 1)
//					{
//						fprintf(stderr, "Invalid parameter count returned by MySQL\n");
//						continue;
//					}

					/* Bind the data for the parameters */
					MYSQL_BIND pBind[1];
					memset(pBind, 0, sizeof(pBind));
					pBind[0].buffer_type = MYSQL_TYPE_STRING;
					pBind[0].buffer = (char*)serial;
					pBind[0].buffer_length = STRING_SIZE;
					length = strlen(serial);
					pBind[0].length = &length;
					pBind[0].is_null = 0;
					if (mysql_stmt_bind_param(stmt, pBind))
					{
						LOGERROR << "Unable to bind parameters to statement: " << mysql_error(gDBConn) << LOGENDL;
						continue;
					}

					/* Bind the buffers for the output */
					MYSQL_BIND rBind[1];
					int dataType = 0;
					memset(rBind, 0, sizeof(rBind));
					rBind[0].buffer_type = MYSQL_TYPE_LONG;
					rBind[0].buffer = &dataType;
					rBind[0].length = 0;
					rBind[0].is_null = 0;
					if (mysql_stmt_bind_result(stmt, rBind))
					{
						LOGERROR << "Error binding result: " << mysql_error(gDBConn) << LOGENDL;
						continue;
					}

//					unsigned long cursor = CURSOR_TYPE_READ_ONLY;
//					if (mysql_stmt_attr_set(stmt, STMT_ATTR_CURSOR_TYPE, &cursor))
//					{
//						LOGERROR << "Error setting cursor attribute: " << mysql_error(gDBConn) << LOGENDL;
//						continue;
//					}
					if (mysql_stmt_execute(stmt))
					{
						LOGERROR << "Database query failed: " << mysql_error(gDBConn) << LOGENDL;
						continue;
					}

//					MYSQL_RES* res = mysql_store_result(gDBConn);
//					MYSQL_ROW row;
//					while ((row = mysql_fetch_row(res)))
					bool fetched = 0;
					while (!mysql_stmt_fetch(stmt))
					{
//						for (unsigned int i=0; i < mysql_num_fields(res); i++)
//							printf("%s\n", row[i]);
						printf("Result: Device type %d (MST Temperature Sensor)\n", dataType);
						fetched = 1;
					}
					if (!fetched)
					{
						printf("No such device in inventory!\n");
					}

//					mysql_free_result(res);

					if (mysql_stmt_close(stmt))
					{
						fprintf(stderr, "Error closing statement: %s!\n", mysql_error(gDBConn));
						continue;
					}
#endif

					printf("Assigning next free slave ID: %d\n", nextSlaveId);

					ok = modbus.writeSingleHoldingRegister(SLAVE_ID_INVALID, 200, nextSlaveId);
					if (1 == ok)
					{
						printf("Assigned new slave ID!\n", nextSlaveId);
						nextSlaveId++;

						// Wait for new address to be applied
						Sleep(1000);
					}
					else
					{
						printf("Error assigning new slave ID!\n", nextSlaveId);
					}

					//waitForKey();

#if 0
/* Get the total number of affected rows */
affected_rows= mysql_stmt_affected_rows(stmt);
fprintf(stdout, " total affected rows(insert 1): %lu\n",
                (unsigned long) affected_rows);

if (affected_rows != 1) /* validate affected rows */
{
  fprintf(stderr, " invalid affected rows by MySQL\n");
  exit(0);
}

/* Specify data values for second row, then re-execute the statement */
int_data= 1000;
strncpy(str_data, "The most popular Open Source database", STRING_SIZE);
str_length= strlen(str_data);
small_data= 1000;         /* smallint */
is_null= 0;               /* reset */

/* Execute the INSERT statement - 2*/
if (mysql_stmt_execute(stmt))
{
  fprintf(stderr, " mysql_stmt_execute, 2 failed\n");
  fprintf(stderr, " %s\n", mysql_stmt_error(stmt));
  exit(0);
}

/* Get the total rows affected */
affected_rows= mysql_stmt_affected_rows(stmt);
fprintf(stdout, " total affected rows(insert 2): %lu\n",
                (unsigned long) affected_rows);

if (affected_rows != 1) /* validate affected rows */
{
  fprintf(stderr, " invalid affected rows by MySQL\n");
  exit(0);
}

/* Close the statement */
if (mysql_stmt_close(stmt))
{
  fprintf(stderr, " failed while closing the statement\n");
  fprintf(stderr, " %s\n", mysql_stmt_error(stmt));
  exit(0);
}
#endif

#if 0

					// TODO: Assign new slave address
				}
				else
				{
					printf("no device found\n");
				}
			}

			////for (addr = 0; addr <= 5; addr++) {
			//for (addr = 1; addr <= 1; addr++) {
			//	tab_rp[0] = 0;
			//	ok = modbus.readMultipleHoldingRegisters(SLAVE, addr, 1, tab_rp);
			//	LOGNOTE << "ah #" << addr << ": read " << tab_rp[0] << " (OK=" << ok << ")" << LOGENDL;
			//}
			//for (addr = 0; addr <= 5; addr++) {
			//	tab_rp[0] = 0;
			//	ok = modbus.readMultipleInputRegisters(SLAVE, addr, 1, tab_rp);
			//	LOGNOTE << "ai #" << addr << ": read " << tab_rp[0] << " (OK=" << ok << ")" << LOGENDL;
			//}
			//msleep(500);

			//ok = modbus.writeSingleHoldingRegister(SLAVE, 0, cnt[0]);
			//LOGNOTE << "----------" << LOGENDL;
			//LOGNOTE << "ah #0: write " << cnt[0] << " (OK=" << ok << ")" << LOGENDL;
			//cnt[0]++;
			//cnt[1]++;
			//cnt[2]++;
			//msleep(500);
		}

		field_nb = 2;
		tab_rq[0] = 15;
		tab_rq[1] = 17;
		
		//ok = modbus.writeMultipleCoils(SLAVE, addr, field_nb, tab_rq_bits);
		//ok = modbus.writeSignleCoil(SLAVE, addr, tab_rq_bits[0]);
		//ok = modbus.writeMultipleHoldingRegisters(SLAVE, addr, field_nb, tab_rq);
	} catch (util::Exception& e) {
		LOGERROR << "Modbus communication failed: " << e.what() << LOGENDL;
	}

	delete[] tab_rq;
	delete[] tab_rq_bits;
	delete[] tab_rp;

	try {
		modbus.close();
	} catch (util::Exception& e) {
		LOGERROR << "Shutting down Modbus failed: " << e.what() << LOGENDL;
	}
	
	LOGDEBUG << "Press any key to continue." << LOGENDL;
#endif
#endif
	
		Sleep(2000);
		
		}
	waitForKey();
	return 0;
	}