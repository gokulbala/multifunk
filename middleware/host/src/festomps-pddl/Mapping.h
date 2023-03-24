#ifndef MAPPING_H
#define MAPPING_H

/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Solution.h"

#include <iostream>
#include <map>

/******************************************************************************/
/***   Defines                                                              ***/
/******************************************************************************/
#define EVAL(c) ((c) || eval(c, #c))
#define BLOCK_START(b) std::cout << "----- START BLOCK " << b << std::endl;
#define BLOCK_END(b) std::cout << "----- END BLOCK " << b << std::endl;
#define IF_END() std::cout << "---" << std::endl;

/******************************************************************************/
/***   Type definitions                                                     ***/
/******************************************************************************/
typedef enum
{
	NO_POSITION,

	L1_a, L1_b, L1_c, L1_d, L1_e, L1_f, // these must be defined in subsequent order
	L2_a, L2_b, L2_c, L2_d, L2_e, L2_f, // these must be defined in subsequent order
	L3_a, L3_b, L3_c, L3_d, L3_e, L3_f, // these must be defined in subsequent order
	X, Y,
//}
//robotposition_t;
//
//typedef enum
//{
	P1, P2, P3, P4, P5,
//}
//beltposition_t;
//
//typedef enum
//{
	R1, R2, R3, R4, R5, R6,
//}
//plateposition_t;

}
position_t;

typedef position_t robotposition_t;
typedef position_t beltposition_t;
typedef position_t plateposition_t;
typedef position_t rackposition_t;

extern const char* POSITION_STRING[];

typedef enum
{
	NO_UNIT,
	Ball1
}
unit_t;

extern const char* UNIT_STRING[];

typedef enum
{
	ALL_FALSE,
	robot
}
gripper_t;

extern const char* GRIPPER_STRING[];

typedef enum
{
	NO_COLORTYPE,
	red, black, white
}
colortype_t;

extern const char* OCCUPYTYPE_STRING[];

typedef enum
{
	NO_OCCUPYTYPE,
	no,
	yes
}
occupytype_t;

typedef enum
{
	NO_FACETYPE,
	up,
	down
}
facetype_t;

/******************************************************************************/
/***   Static variables                                                     ***/
/******************************************************************************/
extern position_t in_robot;
extern gripper_t carry_Ball1;
extern bool P0tran;
#if (USE_SOLUTION == 2) || (USE_SOLUTION == 3)
extern bool color_sensor_on;
extern bool face_sensor_on;
#endif

extern std::map<unit_t, position_t> v_at;
extern gripper_t v_free_hand;
//extern std::map<unit_t, gripper_t> v_carry;
extern position_t v_occupied;
extern std::map<position_t, position_t> v_belt_connected;
extern std::map<position_t, position_t> v_rod_located;
extern std::map<plateposition_t, plateposition_t> v_next;
extern plateposition_t v_drillposition;
extern unit_t v_drilled;
extern unit_t v_faceup;
extern position_t v_have_face_sensor;
extern std::map<unit_t, facetype_t> v_face;
#if USE_SOLUTION == 1
extern position_t v_color_sensor_on;
#endif
extern std::map<unit_t, colortype_t> v_color;
#if USE_SOLUTION == 3
extern gripper_t v_occupy_sensor_on;
extern occupytype_t rack_occupied_L1_a;
extern occupytype_t rack_occupied_L1_b;
extern occupytype_t rack_occupied_L2_a;
extern occupytype_t rack_occupied_L2_b;
extern std::map<unit_t, gripper_t> v_carry;
#endif

/******************************************************************************/
/***   Prototypes                                                           ***/
/******************************************************************************/
// Initialization
void init(void);

// Helper functions
bool eval(bool cond, const char* string);

// Predicates
//bool in_robot(position_t pos);
bool at(unit_t unit, position_t pos);
bool free_hand(gripper_t gri);
//bool carry(unit_t unit, gripper_t gripper);
bool occupied(position_t pos);
bool belt_connected(position_t pos1, position_t pos2);
bool rod_located(position_t pos1, position_t pos2);
bool next(plateposition_t pos1, plateposition_t pos2);
bool drillposition(plateposition_t pos);
bool drilled(unit_t obj);
bool faceup(unit_t obj);
bool have_face_sensor(position_t pos);
bool face(unit_t obj, facetype_t facetype);
#if USE_SOLUTION == 1
bool color_sensor_on(position_t pos);
#endif
bool color(unit_t obj, colortype_t col);
#if USE_SOLUTION == 3
bool occupy_sensor_on(gripper_t gripper);
bool carry(unit_t obj, gripper_t gri);
bool rack_occupied(rackposition_t pos, occupytype_t occ);
#endif

// Actions
void robot_move(robotposition_t from, robotposition_t to);
void robot_pick(unit_t obj, robotposition_t room, gripper_t gripper);
void robot_drop(unit_t obj, robotposition_t room, gripper_t gripper);
void belt_move(unit_t obj, beltposition_t from, beltposition_t to);
void belt_move_r(unit_t obj, beltposition_t from, beltposition_t to);
void belt_move_b(unit_t obj, beltposition_t from, beltposition_t to);
void drill_in(unit_t obj, plateposition_t pos);
void plate_rotate(unit_t obj1, unit_t obj2, unit_t obj3, unit_t obj4, unit_t obj5, unit_t obj6, plateposition_t pos1, plateposition_t pos2, plateposition_t pos3, plateposition_t pos4, plateposition_t pos5, plateposition_t pos6);
void rod_push(unit_t obj, position_t from, position_t to);
void trigger_color_sensor(unit_t obj, position_t pos);
void trigger_probe_sensor(unit_t obj, position_t pos);

#if USE_SOLUTION == 3
void robot_pick_ground(unit_t obj, robotposition_t room, gripper_t gripper);
void robot_drop_ground(unit_t obj, robotposition_t room, gripper_t gripper);
void robot_check_shelf(rackposition_t room, gripper_t gri);
void robot_pick_shelf(unit_t obj, rackposition_t room, gripper_t gripper);
void robot_drop_shelf(unit_t obj, rackposition_t room, gripper_t gripper);
#endif

#endif // #ifndef MAPPING_H
