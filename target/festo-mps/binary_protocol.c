//*****************************************************************************
//
// BINARY PROTOCOL
//
//*****************************************************************************

#include "uip.h"
#include "binary_protocol.h"
#include "utils/ustdlib.h"
#include "string.h"
#include "drivers/rit128x96x4.h"
#include "../../shared/Services.h"

struct fausto_state *fs;
int	initialized;


int GetInputLength(struct binary_message *msg)
{
	return availableServices[msg->Service]->input_size;
}

int GetOutputLength(struct binary_message *msg)
{
	return availableServices[msg->Service]->output_size;
}

unsigned char GetService(struct binary_message *msg)
{
	return (msg->Service);
}

void process_message(struct binary_message *msg) {
	fs->state = GetService(msg);
	switch(fs->state){
		case 1:
			break;
		default:
			break;
	}
	fs->msg.Service = 255;
	fs->count = 0;	
}

//*****************************************************************************
//
// Macro for easy access to buffer data
//
//*****************************************************************************
#define BUF_APPDATA ((u8_t *)uip_appdata)

//*****************************************************************************
//
// UDP Connection.
//
//*****************************************************************************
static struct uip_udp_conn *udp_conn = 0;

//*****************************************************************************
//
// FESTO PLC commands (Can be found in Festo Software's (FST) Help)
//
//*****************************************************************************

static const char command_reset[] = "ME1.3=1";
static const char command_start[] = "ME1.0=1";
static const char command_stop[] = "ME1.1=0";
static const char extend_minislide[] = "MA0.0=1";
static const char retract_minislide[] = "MA0.0=0";
static const char open_gripper[] = "MA0.1=0";
static const char close_gripper[] = "MA0.1=1";
static const char linear_motion_0[] = "MA0.5=0";
static const char linear_motion_1[] = "MA0.5=1";
static const char rotary_motion_0[] = "MA0.6=0";
static const char rotary_motion_1[] = "MA0.6=1";
static const char outputword_station[] = "DEW0";
static char set_motion_bit[] = "MA0.X=X";

unsigned char b[2];

//*****************************************************************************
//
// Display a uIP type IP Address.
//
//*****************************************************************************
void
show_ip(void *ipaddr, unsigned long ulCol, unsigned long ulRow)
{
    char pucBuf[16];
    unsigned char *pucTemp = (unsigned char *)ipaddr;

    usprintf(pucBuf, "%d.%d.%d.%d", pucTemp[0], pucTemp[1], pucTemp[2],
             pucTemp[3]);
    RIT128x96x4StringDraw(pucBuf, ulCol, ulRow, 15);
}


//*****************************************************************************
//
// Initialize the program.
//
// Starts to listen for incoming connection requests on TCP port 12345.
//
//*****************************************************************************
void
fausto_init(void)
{
	uip_ipaddr_t addr;
 
	if(udp_conn == 0) {

		RIT128x96x4StringDraw("Setting MPS IP...", 12, 32, 15);
		uip_ipaddr(&addr, 172, 26, 5, 1);

		udp_conn = uip_udp_new(&addr, HTONS(992));
		if(udp_conn != 0) {
			RIT128x96x4StringDraw("OK", 115, 32, 15);
			show_ip(addr, 18, 40);
			//uip_udp_bind(udp_conn, HTONS(2222));
			//uip_listen(HTONS(2222));
		} else {
			RIT128x96x4StringDraw("FAIL", 115, 32, 15);
		}
	}
    //
    // Listen to port 12345.
    //
	uip_listen(HTONS(12345));

	initialized = 0; // ironic, huh?
}

//*****************************************************************************
//
// FESTO COMMAND Application Callback Function
//
//*****************************************************************************

void serviceMPSReset()
{
	RIT128x96x4StringDraw("MPS being reset", 12, 48, 15);
	memcpy(uip_appdata, command_reset, sizeof(command_reset));
	uip_udp_send(sizeof(command_reset));
} 

void serviceMPSStart()
{
	RIT128x96x4StringDraw("Starting", 12, 48, 15);
	memcpy(uip_appdata, command_start, sizeof(command_start));
	uip_udp_send(sizeof(command_start));
}

void serviceMPSStop()
{
	RIT128x96x4StringDraw("Stopping", 12, 48, 15);
	memcpy(uip_appdata, command_stop, sizeof(command_stop));
	uip_udp_send(sizeof(command_stop));
} 

void serviceMPSExtendMiniSlide()
{
	RIT128x96x4StringDraw("Extend Mini Slide", 12, 48, 15);
	memcpy(uip_appdata, extend_minislide, sizeof(extend_minislide));
	uip_udp_send(sizeof(extend_minislide));
}  

void serviceMPSRetractMiniSlide()
{
	RIT128x96x4StringDraw("Retract Mini Slide", 12, 48, 15);
	memcpy(uip_appdata, retract_minislide, sizeof(retract_minislide));
	uip_udp_send(sizeof(retract_minislide));
}  

void serviceMPSOpenGripper()
{
	RIT128x96x4StringDraw("Open Gripper", 12, 48, 15);
	memcpy(uip_appdata, open_gripper, sizeof(open_gripper));
	uip_udp_send(sizeof(open_gripper));
}  

void serviceMPSCloseGripper()
{
	RIT128x96x4StringDraw("Close Gripper", 12, 48, 15);
	memcpy(uip_appdata, close_gripper, sizeof(close_gripper));
	uip_udp_send(sizeof(close_gripper));
}  

void serviceMPSStatusWord()
{
	RIT128x96x4StringDraw("Req MPS Data", 12, 56, 15);
	RIT128x96x4StringDraw("                   ", 80, 56, 15);
	memcpy(uip_appdata, outputword_station, sizeof(outputword_station));
	uip_udp_send(sizeof(outputword_station));
} 

//*****************************************************************************
//
// Here, Bits 2, 3 and 4 correspond to the I/O Configuration of the PLC.
// Open FST-->Online-->Online Display. Click on Output. Point the mouse to the Row OW0, Bit 2, 3, and 4.
// You will see that Bit 2, 3, and 4 corresponds to Bit 0, Bit 1 and Bit 2.
// That mapping is what has been done here exactly.
// The Bits can be set by sending a 1.
// So, here in the first 3 cases we force the value to 0/1 based on what number the user enters on the C++ appln output terminal.
// Incase, the User enters height 5 and angle 2, the bits are set accordingly.
// To the left of _BIT2 (in FST), you will find Start_LA and Start_RA
// Once the height and angle are entered, we set the Linear and Rotary positions by setting 0/1
//
//*****************************************************************************

void serviceMPSSetPositionLMB2()
{
	set_motion_bit[4] = '2';
	set_motion_bit[6] = (fs->msg.Data[0] & 0x01) ? '1' : '0';
	memcpy(uip_appdata, set_motion_bit, sizeof(set_motion_bit));
	uip_udp_send(sizeof(set_motion_bit));
} 

void serviceMPSSetPositionLMB3()
{
	set_motion_bit[4] = '3';
	set_motion_bit[6] = (fs->msg.Data[0] & 0x02) ? '1' : '0';
	memcpy(uip_appdata, set_motion_bit, sizeof(set_motion_bit));
	uip_udp_send(sizeof(set_motion_bit));
} 

void serviceMPSSetPositionLMB4()
{
	set_motion_bit[4] = '4';
	set_motion_bit[6] = (fs->msg.Data[0] & 0x04) ? '1' : '0';
	memcpy(uip_appdata, set_motion_bit, sizeof(set_motion_bit));
	uip_udp_send(sizeof(set_motion_bit));
} 

void serviceMPSSetPositionLMB0()
{
	memcpy(uip_appdata, linear_motion_0, sizeof(linear_motion_0));
	uip_udp_send(sizeof(linear_motion_0));
} 

void serviceMPSSetPositionLMB1()
{
	memcpy(uip_appdata, linear_motion_1, sizeof(linear_motion_1));
	uip_udp_send(sizeof(linear_motion_1));
} 

void serviceMPSSetPositionRMB2()
{
	set_motion_bit[4] = '2';
	set_motion_bit[6] = (fs->msg.Data[1] & 0x01) ? '1' : '0';
	memcpy(uip_appdata, set_motion_bit, sizeof(set_motion_bit));
	uip_udp_send(sizeof(set_motion_bit));
} 

void serviceMPSSetPositionRMB3()
{
	set_motion_bit[4] = '3';
	set_motion_bit[6] = (fs->msg.Data[1] & 0x02) ? '1' : '0';
	memcpy(uip_appdata, set_motion_bit, sizeof(set_motion_bit));
	uip_udp_send(sizeof(set_motion_bit));
} 

void serviceMPSSetPositionRMB4()
{
	set_motion_bit[4] = '4';
	set_motion_bit[6] = (fs->msg.Data[1] & 0x04) ? '1' : '0';
	memcpy(uip_appdata, set_motion_bit, sizeof(set_motion_bit));
	uip_udp_send(sizeof(set_motion_bit));
} 

void serviceMPSSetPositionRMB0()
{
	memcpy(uip_appdata, rotary_motion_1, sizeof(rotary_motion_1));
	uip_udp_send(sizeof(rotary_motion_1));
} 

void serviceMPSSetPositionRMB1()
{
	memcpy(uip_appdata, rotary_motion_0, sizeof(rotary_motion_0));
	uip_udp_send(sizeof(rotary_motion_0));
	fs->state = 255;
	fs->packets_transmitted = 0;
} 

void
festo_appcall(void)
{
int i,j;
char *buffer;
char dest[64];

	if(!initialized) return;	

	if(uip_connected()) {
		RIT128x96x4StringDraw("Connect", 70, 48, 15);
        return;
	} else if(uip_poll()) {
		/*localService_t localService = localServices[fs->state];
		uint8_t serviceId = localService.serviceId;
		void* serviceFunction = localService.serviceFunction;

		uint8_t* params = 0;

		// Calculate the size in bits of all input and output parameters
		uint32_t sizeInput = ...;
		uint32_t sizeOutput = ...;
		params = (uint8_t*)malloc((sizeInput + sizeOutput) >> 3);

		// Copy parameters from message to params data structure
		memcpy(params, &msg.Data, sizeInput);

		serviceFunction(&msg.Data); */

		switch (fs->state) {
			case 0:
				serviceMPSReset();
				fs->state = 255;   // Fix fs->state to some constant value, so that the state is idle, so that it doesnt do anything.
				return;
			case 1:
				serviceMPSStart();
				fs->state = 255;
				return;
			case 2:
				serviceMPSStop();
				fs->state = 255;
				return;
			case 3:
				serviceMPSExtendMiniSlide();
				fs->state = 255;
				return;
			case 4:
				serviceMPSRetractMiniSlide();
				fs->state = 255;
				return;
			case 5:
				serviceMPSOpenGripper();
				fs->state = 255;
				return;
			case 6:
				serviceMPSCloseGripper();
				fs->state = 255;
				return;	
			case 7:
				/* DATA[0] = desired heigth	[0-7]
				 * DATA[1] = desired angle [0-7]
				 * motion byte n4 = position bit [2, 3, 4] == [0, 1, 2]
				 * motion byte n6 = bit value [0, 1]
				 */
				switch(fs->packets_transmitted++) {
					case 0:
						serviceMPSSetPositionLMB2();
						break;
					case 1:
						serviceMPSSetPositionLMB3();
						break;
					case 2:
						serviceMPSSetPositionLMB4();
						break;
					case 3:
						serviceMPSSetPositionLMB0();
						break;
					case 4:
						serviceMPSSetPositionLMB1();
						break;
					case 5:
						serviceMPSSetPositionRMB2();
						break;
					case 6:
						serviceMPSSetPositionRMB3();
						break;
					case 7:
						serviceMPSSetPositionRMB4();
						break;
					case 8:
						serviceMPSSetPositionRMB0();
						break;
					case 9:
						serviceMPSSetPositionRMB1();
						break;
					default:
						break;
				}
				return;
			case 8:
				serviceMPSStatusWord();
				return;	  
			default:
				return;
		}
	}   else if(uip_newdata()) {
		RIT128x96x4StringDraw("Got data", 12, 64, 15);
		if (uip_udp_conn->rport == HTONS(992)) {
			buffer = (char*)uip_appdata;
			for(i=0;i<256;i++){
				if(buffer[i] == '=') {
					i++;
					for(j=0; buffer[i] >= '0' && buffer[i] <= '9' && j<4; j++, i++){
						dest[j] = buffer[i];
						dest[j+1] = 0;
					}	   
					break; 		   
				}
			}		 	    
			RIT128x96x4StringDraw(dest, 70, 64, 15);
			switch (fs->state) {
				case 8:
					fs->msg.Data[0] = 0;
					for(i=0;dest[i]!=0 && i < 4;i++){
						fs->msg.Data[0] *= 10;
						fs->msg.Data[0] += dest[i] - '0';
					}
					fs->packets_transmitted = 1;
					break;
				default:
					break;			  
			}  	
		}	  
		return;	  
	} 	  
}		

//*****************************************************************************
//
// HTTP Application Callback Function
// Tried out may steps, just for printf debugging. The LCD screen on the ARM is an advantage, you can see which step you go wrong.
//
//*****************************************************************************
void
binary_protocol_appcall(void)
 {	
 	unsigned char *buffer;
	int i;
	fs = (struct fausto_state *)&(uip_conn->appstate);

	buffer = (unsigned char *)&fs->msg;

    switch(uip_conn->lport)
    {
		case HTONS(12345):
			if(uip_connected()){
				initialized = 1;
				RIT128x96x4StringDraw("Connected ", 12, 72, 15);
				fs->count = 0;
				fs->state = 255;
			}  else if(uip_poll()) {
				RIT128x96x4StringDraw("Polled ", 80, 72, 15);
				switch (fs->state) {
					case 8:
						if(fs->packets_transmitted == 1) {
							fs->msg.Service = 8;
							uip_send(buffer, 2);
							fs->state = 255;
							fs->packets_transmitted = 0;
						}
						break;
					default:
						// Ok, whatever... 
						return;
				}  
			}  else if(uip_newdata()) {
				RIT128x96x4StringDraw("Got_data!    ", 12, 96, 15);
				b[0] = 0x30 + uip_len;
				RIT128x96x4StringDraw((const char *)b, 70, 96, 15);
				for(i=0; i < uip_len; i++) buffer[fs->count + i] = BUF_APPDATA[i];
				fs->count += uip_len;
				if(fs->count >= 1) {
					if(GetInputLength(&fs->msg) <= (fs->count - 1)) {
						process_message(&fs->msg);
					} else {
						RIT128x96x4StringDraw("Not enough data", 12, 56, 15);
						b[0] = 0x30 + (2-fs->count);
						RIT128x96x4StringDraw((const char *)b, 110, 56, 15);
						b[0] = GetInputLength(&fs->msg);
						RIT128x96x4StringDraw((const char *)b, 110, 64, 15);
					}
				}	  
			}   else if(uip_acked()) {
				RIT128x96x4StringDraw("ACKED ", 12, 80, 15);
			}
			break;
        default:
        {
            //
            // Should never happen.
            //
            uip_abort();
            break;
        }
    } 
}		  		   
