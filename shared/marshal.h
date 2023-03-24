#ifndef _MARSHAL_H_
#define _MARSHAL_H_

typedef union
{
	float v;
	uint32_t u;
} marsh_float;

typedef union
{
	double v;
	uint64_t u;
} marsh_double;

#if !defined(_MSC_VER)
#	define bool BOOL
#endif /* #if defined(_MSC_VER) */

#endif // #ifndef _MARSHAL_H_
