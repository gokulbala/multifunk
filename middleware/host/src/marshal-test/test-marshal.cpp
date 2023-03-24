#define _CRT_SECURE_NO_WARNINGS

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "stdint.h"
#include "../../../shared/marshal.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "assert.h"

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
/***   Helper functions and methods                                         ***/
/******************************************************************************/
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

void marshal(bool flag, int16_t temp_int, int16_t temp_int2, float temp_dec, float temp_dec2, uint8_t* buf)
{
        // Boolean flag 'flag'
        assert(0 == (uint8_t)flag >> 1); // Make sure that all unused bits in 'flag' are actually zero
        buf[0] |= ((uint8_t)flag << 7); // Store boolean flag 'flag'

        // 16 bit integer value 'temp_int'
        temp_int += 500; // Value bias
        // Store 16 bit integer value 'temp_int'
        buf[0] |= ((temp_int) >> 9); // 7 bit(s)
        buf[1] |= ((temp_int) >> 1); // 8 bit(s)
        buf[2] |= ((temp_int) << 7); // Remaining 1 bit(s)

        // 16 bit integer value 'temp_int2'
        {
                uint16_t conv_temp_int2 = (int32_t)temp_int2 + 32768; // Value bias
                // Store 16 bit integer value 'conv_temp_int2'
                buf[2] |= ((conv_temp_int2) >> 9); // 7 bit(s)
                buf[3] |= ((conv_temp_int2) >> 1); // 8 bit(s)
                buf[4] |= ((conv_temp_int2) << 7); // Remaining 1 bit(s)
        }

        // 32 bit floating-point number 'temp_dec'
        temp_dec += 50.000000; // Value bias
        temp_dec *= 32; // Exponent bias
        // Store 32 bit floating-point number 'temp_dec'
        {
#if defined(_MSC_VER)
                uint32_t _bits = ((marsh_float*)&temp_dec)->u;
#else /* #if defined(_MSC_VER) */
                uint32_t _bits = ((marsh_float)temp_dec).u;
#endif /* #if defined(_MSC_VER) */
                uint8_t _exp = (0 == _bits) ? 0 : ((_bits >> 23) - 127) & 0x0000000F;
                buf[4] |= ((_exp) << 3); // Remaining 4 bit(s)
                buf[4] |= ((_bits & 0x7FFC00) >> 20); // 3 bit(s)
                buf[5] |= ((_bits) >> 12); // 8 bit(s)
                buf[6] |= ((_bits & 0xC00) >> 4); // Remaining 2 bit(s)
        }

        // 32 bit floating-point number 'temp_dec2'
        temp_dec2 += 50.000000; // Value bias
        temp_dec2 *= 16; // Exponent bias
        // Store 32 bit floating-point number 'temp_dec2'
        {
#if defined(_MSC_VER)
                uint32_t _bits = ((marsh_float*)&temp_dec2)->u;
#else /* #if defined(_MSC_VER) */
                uint32_t _bits = ((marsh_float)temp_dec2).u;
#endif /* #if defined(_MSC_VER) */
                uint8_t _exp = (0 == _bits) ? 0 : ((_bits >> 23) - 127) & 0x0000000F;
                buf[6] |= ((_exp) << 2); // Remaining 4 bit(s)
                buf[6] |= ((_bits & 0x7E0000) >> 21); // 2 bit(s)
                buf[7] |= ((_bits & 0x1E0000) >> 13); // Remaining 4 bit(s)
        }
}

void demarshal(bool* flag, int16_t* temp_int, int16_t* temp_int2, float* temp_dec, float* temp_dec2, uint8_t* buf)
{
        // Boolean flag 'flag'
        *flag = (buf[0] >> 7) & 0x01; // Load boolean flag into '*flag'

        // 16 bit integer value 'temp_int'
        // Load 16 bit integer value into '*temp_int'
        assert(0 == *temp_int); // Make sure that '*temp_int' is initially zero
        *temp_int |= (((int16_t)buf[0] & 0x007F) << 9); // 7 bit(s)
        *temp_int |= (((int16_t)buf[1]) << 1); // 8 bit(s)
        *temp_int |= (((int16_t)buf[2] & 0x0080) >> 7); // Remaining 1 bit(s)
        *temp_int -= 500; // Value bias

        // 16 bit integer value 'temp_int2'
        {
                uint16_t conv_temp_int2 = 0;
                // Load 16 bit integer value into 'conv_temp_int2'
                assert(0 == conv_temp_int2); // Make sure that 'conv_temp_int2' is initially zero
                conv_temp_int2 |= (((uint16_t)buf[2] & 0x007F) << 9); // 7 bit(s)
                conv_temp_int2 |= (((uint16_t)buf[3]) << 1); // 8 bit(s)
                conv_temp_int2 |= (((uint16_t)buf[4] & 0x0080) >> 7); // Remaining 1 bit(s)
                *temp_int2 = (int32_t)conv_temp_int2 - 32768; // Value bias
        }

        // 32 bit floating-point number 'temp_dec'
        // Load 32 bit floating-point number into '*temp_dec'
        assert(0 == *(uint32_t*)(&*temp_dec)); // Make sure that '*temp_dec' is initially zero
        {
                uint32_t _bits = 0;
                uint8_t _exp = 0;
                _exp |= (((uint32_t)buf[4] & 0x78) >> 3); // Remaining 4 bit(s)
                _bits |= (((uint32_t)buf[4] & 0x007) << 20); // 3 bit(s)
                _bits |= (((uint32_t)buf[5]) << 12); // 8 bit(s)
                _bits |= (((uint32_t)buf[6] & 0x0C0) << 4); // Remaining 2 bit(s)
                *(uint32_t*)(&*temp_dec) = (0 == _bits) ? 0 : _bits | (((int32_t)_exp + 127) << 23);
        }
        *temp_dec /= 32; // Exponent bias
        *temp_dec -= 50; // Value bias

        // 32 bit floating-point number 'temp_dec2'
        // Load 32 bit floating-point number into '*temp_dec2'
        assert(0 == *(uint32_t*)(&*temp_dec2)); // Make sure that '*temp_dec2' is initially zero
        {
                uint32_t _bits = 0;
                uint8_t _exp = 0;
                _exp |= (((uint32_t)buf[6] & 0x3C) >> 2); // Remaining 4 bit(s)
                _bits |= (((uint32_t)buf[6] & 0x3) << 21); // 2 bit(s)
                _bits |= (((uint32_t)buf[7] & 0xF0) << 13); // Remaining 4 bit(s)
                *(uint32_t*)(&*temp_dec2) = (0 == _bits) ? 0 : _bits | (((int32_t)_exp + 127) << 23);
        }
        *temp_dec2 /= 16; // Exponent bias
        *temp_dec2 -= 50; // Value bias
}

/******************************************************************************/
/***   Main program                                                         ***/
/******************************************************************************/
int main(int argc, char* argv[])
{
	uint8_t buf[8];

	for (float temp = -50.0f; temp <= 150.0f; temp += 0.05)
	{
		memset(&buf[0], 0, sizeof(buf));
		//marshal_(false, -500, 32767, 12.3f, -47.13f, &buf[0]);
		marshal(false, -500, 32767, temp, 150.0f, &buf[0]);

		bool flag = false;
		int16_t temp_int = 0;
		int16_t temp_int2 = 0;
		float temp_dec = 0.0f;
		float temp_dec2 = 0.0f;
		demarshal(&flag, &temp_int, &temp_int2, &temp_dec, &temp_dec2, &buf[0]);

		//printf("flag: %i, temp_int: %i, temp_int2: %i, temp_dec: %.1f, temp_dec2: %.1f\n",
		//	flag, temp_int, temp_int2, temp_dec, temp_dec2);

		float f1 = temp_dec * (1.0/0.05);
		float f2 = temp * (1.0/0.05);

		char s1[100], s2[100];
		sprintf_s(s1, 100, "%.2f", temp_dec);
		sprintf_s(s2, 100, "%.2f", temp);

		//char s1[100], s2[100];
		//sprintf_s(s1, 100, "%.0f", f1);
		//sprintf_s(s2, 100, "%.0f", f2);

		if (strcmp(s1, s2))
		{
			printf("Warning: %f != %f (string %s != %s) !\n", temp_dec, temp, s1, s2);
		}
	}

	printf("Finished testing.\n");

	waitForKey();
	return 0;
}
