#ifndef TYPES_H
#define TYPES_H

/******************************************************************************/
/***   Type definitions                                                     ***/
/******************************************************************************/
typedef enum
{
	SB_READY = 0,
	SB_BUSY,
	SB_UNKNOWN = 0xFFFF
}
StationBusy_t;

#endif // #ifndef TYPES_H
