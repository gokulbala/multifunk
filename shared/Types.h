#ifndef _TYPES_H_
#define _TYPES_H_

// ----- Type Definitions ----

typedef enum {
	ptBool = 0,
	ptInt8,
	ptInt16,
	ptInt32,
	ptInt64,
	ptUInt8,
	ptUInt16,
	ptUInt32,
	ptUInt64,
	ptFloat,
	ptDouble,
	ptString
} type_t;

typedef struct {
	const char* name;
	type_t type;
	int		min_value;
	int		max_value;
} parameter_t;

typedef struct {
	const char* name;
	parameter_t* input;
	int			 input_size;
	parameter_t* output;
	int			 output_size;
} service_t;

#endif
