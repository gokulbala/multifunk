/******************************************************************************/
/***   Includes                                                             ***/
/******************************************************************************/
#include "Mapping.h"

#include "LogoCommands.h"
#include "ProcessingCommands.h"
#include "StorageCommands.h"

#include <assert.h>
#include <Windows.h>

/******************************************************************************/
/***   Static variables                                                     ***/
/******************************************************************************/
const char* POSITION_STRING[] =
{
	"NO_POSITION",
	"L1_a", "L1_b", "L1_c", "L1_d", "L1_e", "L1_f", // these must be defined in subsequent order
	"L2_a", "L2_b", "L2_c", "L2_d", "L2_e", "L2_f", // these must be defined in subsequent order
	"L3_a", "L3_b", "L3_c", "L3_d", "L3_e", "L3_f",
	"X", "Y",
	"P1", "P2", "P3", "P4", "P5",
	"R1", "R2", "R3", "R4", "R5", "R6",
};

const char* UNIT_STRING[] =
{
	"NO_UNIT",
	"Ball1",
};

const char* GRIPPER_STRING[] =
{
	"ALL_FALSE",
	"robot",
};

const char* OCCUPYTYPE_STRING[] =
{
	"ALL_FALSE",
	"no",
	"yes",
};

position_t in_robot;
gripper_t carry_Ball1;
bool P0tran;
#if (USE_SOLUTION == 2) || (USE_SOLUTION == 3)
bool color_sensor_on = false;
bool face_sensor_on = false;
#endif

std::map<unit_t, position_t> v_at;
gripper_t v_free_hand;
//std::map<unit_t, gripper_t> v_carry;
position_t v_occupied;
std::map<position_t, position_t> v_belt_connected;
std::map<position_t, position_t> v_rod_located;
std::map<plateposition_t, plateposition_t> v_next;
plateposition_t v_drillposition;
unit_t v_drilled;
unit_t v_faceup;
position_t v_have_face_sensor;
std::map<unit_t, facetype_t> v_face;
#if USE_SOLUTION == 1
position_t v_color_sensor_on;
#endif
std::map<unit_t, colortype_t> v_color;
#if USE_SOLUTION == 3
gripper_t v_occupy_sensor_on;
occupytype_t rack_occupied_L1_a;
occupytype_t rack_occupied_L1_b;
occupytype_t rack_occupied_L2_a;
occupytype_t rack_occupied_L2_b;
std::map<unit_t, gripper_t> v_carry;
std::map<rackposition_t, occupytype_t> v_rack_occupied;
#endif

/******************************************************************************/
/***   Implementation                                                       ***/
/******************************************************************************/

// Initialization

void init(void)
{
	in_robot = X;
//	StorageOpenGripperCommand::create()->execute();
//	StorageRetractMiniSlideCommand::create()->execute();
//	StorageLinearAxisCommand::create(ST_LA_LEVEL3_MOVE)->execute();
//	StorageRotaryAxisCommand::create(ST_RA_OUT)->execute();
//	StorageExtendMiniSlideCommand::create()->execute();
//	StorageLinearAxisCommand::create(ST_LA_LEVEL3_PUT)->execute();
	carry_Ball1 = ALL_FALSE;
	P0tran = true;

	v_at.clear();
	v_at[Ball1] = P1;
	v_free_hand = robot;
#if USE_SOLUTION == 3
v_carry.clear();
#endif
v_occupied = NO_POSITION; // v_occupied is empty
	v_rod_located.clear();
	v_rod_located[P5] = R1; v_rod_located[R4] = P4; v_rod_located[P3] = Y;
	v_belt_connected.clear();
	v_belt_connected[X] = P1; v_belt_connected[P1] = P5;
	v_belt_connected[P4] = P2; v_belt_connected[P2] = P3;
	v_next.clear();
	v_next[R1] = R2; v_next[R2] = R3; v_next[R3] = R4; v_next[R4] = R5; v_next[R5] = R6; v_next[R6] = R1;
	v_faceup = Ball1;
	v_have_face_sensor = R2;
	v_face.clear();
	v_drillposition = R3;
v_drilled = NO_UNIT;
#if USE_SOLUTION == 1
v_color_sensor_on = NO_POSITION;
#else
color_sensor_on = false;
face_sensor_on = false;
#endif
v_color.clear();

#if USE_SOLUTION == 3
rack_occupied_L1_a = NO_OCCUPYTYPE;
rack_occupied_L1_b = NO_OCCUPYTYPE;
rack_occupied_L2_a = NO_OCCUPYTYPE;
rack_occupied_L2_b = NO_OCCUPYTYPE;
v_occupy_sensor_on = ALL_FALSE;
v_carry.clear();
v_rack_occupied.clear();
#endif
}

// Helper functions

bool eval(bool cond, const char* string)
{
	if (!cond)
	{
		std::cout << "Cond failed: " << string << std::endl;
	}

	return cond;
}

// Predicates

/*
bool in_robot(position_t pos)
{
	return (in_robot == pos);
}
*/

bool at(unit_t unit, position_t pos)
{
	std::map<unit_t, position_t>::const_iterator i = v_at.find(unit);
	if (v_at.end() == i) return false;
	return (i->second == pos);
}

bool free_hand(gripper_t gri)
{
	return (v_free_hand == gri);
}

/*
bool carry(unit_t unit, gripper_t gripper)
{
	std::map<unit_t, gripper_t>::const_iterator i = v_carry.find(unit);
	if (v_carry.end() == i) return false;
	return (i->second == gripper);
}
*/

bool occupied(position_t pos)
{
	return (v_occupied == pos);
}

bool belt_connected(position_t pos1, position_t pos2)
{
	std::map<position_t, position_t>::const_iterator i = v_belt_connected.find(pos1);
	if (v_belt_connected.end() == i) return false;
	return (i->second == pos2);
}

bool rod_located(position_t pos1, position_t pos2)
{
	std::map<position_t, position_t>::const_iterator i = v_rod_located.find(pos1);
	if (v_rod_located.end() == i) return false;
	return (i->second == pos2);
}

bool next(plateposition_t pos1, plateposition_t pos2)
{
	std::map<plateposition_t, plateposition_t>::const_iterator i = v_next.find(pos1);
	if (v_next.end() == i) return false;
	return (i->second == pos2);
}

bool drillposition(/*plate*/position_t pos)
{
	return (v_drillposition == pos);
}

bool drilled(unit_t obj)
{
	return (v_drilled == obj);
}

bool faceup(unit_t obj)
{
	return (v_faceup == obj);
}

bool have_face_sensor(position_t pos)
{
	return (v_have_face_sensor == pos);
}

bool face(unit_t obj, facetype_t facetype)
{
	std::map<unit_t, facetype_t>::const_iterator i = v_face.find(obj);
	if (v_face.end() == i) return false;
	return (i->second == facetype);
}

#if USE_SOLUTION == 1
bool color_sensor_on(position_t pos)
{
	return (v_color_sensor_on == pos);
}
#endif

bool color(unit_t obj, colortype_t col)
{
	std::map<unit_t, colortype_t>::const_iterator i = v_color.find(obj);
	if (v_color.end() == i) return false;
	return (i->second == col);
}

#if USE_SOLUTION == 3
bool occupy_sensor_on(gripper_t gripper)
{
	return (v_occupy_sensor_on == gripper);
}

bool carry(unit_t obj, gripper_t gri)
{
	std::map<unit_t, gripper_t>::const_iterator i = v_carry.find(obj);
	if (v_carry.end() == i) return false;
	return (i->second == gri);
}

bool rack_occupied(rackposition_t pos, occupytype_t occ)
{
	std::map<rackposition_t, occupytype_t>::const_iterator i = v_rack_occupied.find(pos);
	if (v_rack_occupied.end() == i) return false;
	return (i->second == occ);
}
#endif

// Actions

void robot_move(robotposition_t from, robotposition_t to)
{
	std::cout << "robot_move(" << POSITION_STRING[from] << ", " << POSITION_STRING[to] << ")" << std::endl;

	// Preconditions
	assert(in_robot == from);

	// Actions
	{
		// First, lift the gripper above the current position
		if (in_robot >= L1_a && in_robot <= L1_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL1_MOVE)->execute();
		}
		else if (in_robot >= L2_a && in_robot <= L2_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL2_MOVE)->execute();
		}
		else if (in_robot >= L3_a && in_robot <= L3_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL3_MOVE)->execute();
		}
		else if (X == in_robot || Y == in_robot)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL3_MOVE)->execute();
		}
		else
		{
			assert(false);
		}

		// Then, retract the minislide
		StorageRetractMiniSlideCommand::create()->execute();

		// Move the gripper to the destination

		// - determine linear axis move target
		StorageLinearAxisPosition_t lp;
		StorageLinearAxisPosition_t lp_low;
		if (L1_a <= to && L1_f >= to)
		{
			lp = ST_LA_LEVEL1_MOVE;
			lp_low = ST_LA_LEVEL1_PUT;
		}
		else if (L2_a <= to && L2_f >= to)
		{
			lp = ST_LA_LEVEL2_MOVE;
			lp_low = ST_LA_LEVEL2_PUT;
		}
		else if (L3_a <= to && L3_f >= to)
		{
			lp = ST_LA_LEVEL3_MOVE;
			lp_low = ST_LA_LEVEL3_PUT;
		}
		else if (X == to)
		{
			lp = ST_LA_LEVEL3_MOVE;
			lp_low = ST_LA_LEVEL3_PUT;
		}
		else if (Y == to)
		{
			// Color sensor triggering position
			lp = ST_LA_LEVEL3_MOVE;
			lp_low = ST_LA_COLOR_DETECT;
		}
		else
		{
			assert(false);
		}

		// - determine rotary axis move target
		StorageRotaryAxisPosition_t rp;
		if (L1_a == to || L2_a == to || L3_a == to)
		{
			rp = ST_RA_POS1;
		}
		else if (L1_b == to || L2_b == to || L3_b == to)
		{
			rp = ST_RA_POS2;
		}
		else if (L1_c == to || L2_c == to || L3_c == to)
		{
			rp = ST_RA_POS3;
		}
		else if (L1_d == to || L2_d == to || L3_d == to)
		{
			rp = ST_RA_POS4;
		}
		else if (L1_e == to || L2_e == to || L3_e == to)
		{
			rp = ST_RA_POS5;
		}
		else if (L1_f == to || L2_f == to || L3_f == to)
		{
			rp = ST_RA_POS6;
		}
		else if (X == to)
		{
			rp = ST_RA_OUT;
		}
		else if (Y == to)
		{
			rp = ST_RA_IN;
		}
		else
		{
			assert(false);
		}

		// - move linear axis
		StorageLinearAxisCommand::create(lp)->execute();

		// - move rotary axis
		StorageRotaryAxisCommand::create(rp)->execute();

		// Extend the minislide
		StorageExtendMiniSlideCommand::create()->execute();

		// Finally, lower the gripper above the current position
		StorageLinearAxisCommand::create(lp_low)->execute();
	}

	// Variable updates
	in_robot = to;

	// Effects
	assert(in_robot == to && in_robot != from);
}

void robot_pick(unit_t obj, robotposition_t room, gripper_t gripper)
{
	std::cout << "robot_pick(" << UNIT_STRING[obj] << ", " << POSITION_STRING[room] << ", " << GRIPPER_STRING[gripper] << ")" << std::endl;

	// Preconditions
	assert(at(obj, room) && in_robot == room && free_hand(gripper));

	// Actions
	
	// - move to pickup position first
	StorageLinearAxisPosition_t lp;
	if (in_robot >= L1_a && in_robot <= L1_f)
	{
		lp = ST_LA_LEVEL1_PUT;
	}
	else if (in_robot >= L2_a && in_robot <= L2_f)
	{
		lp = ST_LA_LEVEL2_PUT;
	}
	else if (in_robot >= L3_a && in_robot <= L3_f)
	{
		lp = ST_LA_LEVEL3_PUT;
	}
	else if (X == in_robot || Y == in_robot)
	{
		lp = ST_LA_LEVEL3_PUT;
	}
	else
	{
		assert(false);
	}
	StorageLinearAxisCommand::create(lp)->execute();

	// - grab the workpiece
	StorageCloseGripperCommand::create()->execute();

	// Variable updates
	carry_Ball1 = gripper;
	v_at.erase(obj);
	v_free_hand = ALL_FALSE;
	v_occupied = NO_POSITION; //???

	// Effects
	assert(carry_Ball1 == gripper && !at(obj, room) && !free_hand(gripper) && !occupied(room));
}

void robot_drop(unit_t obj, robotposition_t room, gripper_t gripper)
{
	std::cout << "robot_drop(" << UNIT_STRING[obj] << ", " << POSITION_STRING[room] << ", " << GRIPPER_STRING[gripper] << ")" << std::endl;

	// Preconditions
	assert(carry_Ball1 == gripper && in_robot == room && !occupied(room));

	// Actions
	StorageOpenGripperCommand::create()->execute();

	// Variable updates
	v_at[obj] = room;
	v_free_hand = gripper;
#if USE_SOLUTION == 3
	v_carry.erase(obj);
#endif
	carry_Ball1 = ALL_FALSE;

	// Effects
	assert(at(obj, room) && free_hand(gripper) && carry_Ball1 != gripper);
}

void belt_move(unit_t obj, beltposition_t from, beltposition_t to)
{
	std::cout << "belt_move(" << UNIT_STRING[obj] << ", " << POSITION_STRING[from] << ", " << POSITION_STRING[to] << ")" << std::endl;

	// Preconditions
	assert(belt_connected(from, to) && at(obj, from) && !occupied(to));

	// Actions
	if (P1 == from && P5 == to)
	{
		LogoProxySupplyWorkpieceCommand::create(LP_DOMAIN_PROCESSING, "")->execute();
		DelayCommand::create(8000)->execute();
	}
	else if (P4 == from && P2 == to)
	{
		LogoProxyDeliverWorkpieceCommand::create(LP_DOMAIN_PROCESSING, "")->execute();
		DelayCommand::create(8000)->execute();
	}
	else if (P2 == from && P3 == to)
	{
		LogoProxySupplyWorkpieceCommand::create(LP_DOMAIN_STORAGE, "")->execute();
		DelayCommand::create(8000)->execute();
	}
	else if (X == from && P1 == to)
	{
		LogoProxyDeliverWorkpieceCommand::create(LP_DOMAIN_STORAGE, "")->execute();
		DelayCommand::create(8000)->execute();
	}
	else
	{
		assert(false);
	}

	// Variable updates
	v_occupied = to;
	v_at[obj] = to;

	// Effects
	assert(!occupied(from) && !at(obj, from) && at(obj, to) && occupied(to));
}

void belt_move_r(unit_t obj, beltposition_t from, beltposition_t to)
{
	std::cout << "belt_move_r(" << UNIT_STRING[obj] << ", " << POSITION_STRING[from] << ", " << POSITION_STRING[to] << ")" << std::endl;

	belt_move(obj, from, to);
}

void belt_move_b(unit_t obj, beltposition_t from, beltposition_t to)
{
	std::cout << "belt_move_b(" << UNIT_STRING[obj] << ", " << POSITION_STRING[from] << ", " << POSITION_STRING[to] << ")" << std::endl;

	belt_move(obj, from, to);
}

void drill_in(unit_t obj, plateposition_t pos)
{
	std::cout << "drill_in(" << UNIT_STRING[obj] << ", " << POSITION_STRING[pos] << ")" << std::endl;

	// Preconditions
	// Citation: "here the atomic action has been modified that it can be drilled under all condition"
	assert(/*faceup(obj) &&*/ at(obj, pos) && drillposition(pos));

	// Actions
	ProcessingDrillCommand::create(true)->execute();
	ProcessingDrillMoveCommand::create(false)->execute();
	DelayCommand::create(1000)->execute();
	ProcessingDrillMoveCommand::create(true)->execute();
	ProcessingDrillCommand::create(false)->execute();

	// Variable updates
	v_drilled = obj;

	// Effects
	assert(drilled(obj));
}

void plate_rotate(unit_t obj1, unit_t obj2, unit_t obj3, unit_t obj4, unit_t obj5, unit_t obj6, plateposition_t pos1, plateposition_t pos2, plateposition_t pos3, plateposition_t pos4, plateposition_t pos5, plateposition_t pos6)
{
	std::cout << "plate_rotate(" << UNIT_STRING[obj1] << "*, " << POSITION_STRING[pos1] << "*)" << std::endl;

	// Preconditions
	assert(next(pos1, pos2) && next(pos2, pos3) && next(pos3, pos4) && next(pos4, pos5) && next(pos5, pos6) && next(pos6, pos1));

	// Actions
	ProcessingRotateCommand::create()->execute();

	// Variable updates
	if (v_at[obj1] == pos1) v_at[obj1] = pos2;
	else if (v_at[obj1] == pos2) v_at[obj1] = pos3;
	else if (v_at[obj1] == pos3) v_at[obj1] = pos4;
	else if (v_at[obj1] == pos4) v_at[obj1] = pos5;
	else if (v_at[obj1] == pos5) v_at[obj1] = pos6;
	else if (v_at[obj1] == pos6) v_at[obj1] = pos1;

// TODO: Modeling error?
	/*if (v_at[obj2] == pos1) v_at[obj2] = pos2;
	else if (v_at[obj2] == pos2) v_at[obj2] = pos3;
	else if (v_at[obj2] == pos3) v_at[obj2] = pos4;
	else if (v_at[obj2] == pos4) v_at[obj2] = pos5;
	else if (v_at[obj2] == pos5) v_at[obj2] = pos6;
	else if (v_at[obj2] == pos6) v_at[obj2] = pos1;

	if (v_at[obj3] == pos1) v_at[obj3] = pos2;
	else if (v_at[obj3] == pos2) v_at[obj3] = pos3;
	else if (v_at[obj3] == pos3) v_at[obj3] = pos4;
	else if (v_at[obj3] == pos4) v_at[obj3] = pos5;
	else if (v_at[obj3] == pos5) v_at[obj3] = pos6;
	else if (v_at[obj3] == pos6) v_at[obj3] = pos1;

	if (v_at[obj4] == pos1) v_at[obj4] = pos2;
	else if (v_at[obj4] == pos2) v_at[obj4] = pos3;
	else if (v_at[obj4] == pos3) v_at[obj4] = pos4;
	else if (v_at[obj4] == pos4) v_at[obj4] = pos5;
	else if (v_at[obj4] == pos5) v_at[obj4] = pos6;
	else if (v_at[obj4] == pos6) v_at[obj4] = pos1;

	if (v_at[obj5] == pos1) v_at[obj5] = pos2;
	else if (v_at[obj5] == pos2) v_at[obj5] = pos3;
	else if (v_at[obj5] == pos3) v_at[obj5] = pos4;
	else if (v_at[obj5] == pos4) v_at[obj5] = pos5;
	else if (v_at[obj5] == pos5) v_at[obj5] = pos6;
	else if (v_at[obj5] == pos6) v_at[obj5] = pos1;

	if (v_at[obj6] == pos1) v_at[obj6] = pos2;
	else if (v_at[obj6] == pos2) v_at[obj6] = pos3;
	else if (v_at[obj6] == pos3) v_at[obj6] = pos4;
	else if (v_at[obj6] == pos4) v_at[obj6] = pos5;
	else if (v_at[obj6] == pos5) v_at[obj6] = pos6;
	else if (v_at[obj6] == pos6) v_at[obj6] = pos1;*/

	if (v_occupied == pos1) v_occupied = pos2;
	else if (v_occupied == pos2) v_occupied = pos3;
	else if (v_occupied == pos3) v_occupied = pos4;
	else if (v_occupied == pos4) v_occupied = pos5;
	else if (v_occupied == pos5) v_occupied = pos6;
	else if (v_occupied == pos6) v_occupied = pos1;

	// Effects
	// TODO
}

void rod_push(unit_t obj, position_t from, position_t to)
{
	std::cout << "rod_push(" << UNIT_STRING[obj] << ", " << POSITION_STRING[from] << ", " << POSITION_STRING[to] << ")" << std::endl;

	// Preconditions
	assert(rod_located(from, to) && at(obj, from) && !at(obj, to) && !occupied(to));

	// Actions
	if (P5 == from && R1 == to)
	{
		// TODO - currently automatically triggered
		//LogoProxyPushRodCommand("", LP_DOMAIN_PROCESSING)->execute();
	}
	else if (P3 == from && Y == to)
	{
		// TODO - currently automatically triggered
		//LogoProxyPushRodCommand("", LP_DOMAIN_STORAGE)->execute();
	}
	else if (R4 == from && P4 == to)
	{
		ProcessingLeverCommand::create(2000)->execute();
	}
	else
	{
		assert(false);
	}

	// Variable updates
	v_at[obj] = to;
	v_occupied = to;

	// Effects
	assert(at(obj, to) && !at(obj, from) && occupied(to));
}

void trigger_color_sensor(unit_t obj, position_t pos)
{
	std::cout << "trigger_color_sensor(" << UNIT_STRING[obj] << ", " << POSITION_STRING[pos] << ")" << std::endl;

	// Preconditions
	assert(at(obj, pos) && in_robot == pos);

	// Actions
	CommandPtr csc = StorageColorSensorCommand::create();
	csc->execute();
	switch (dynamic_cast<SensorCommand*>(csc.get())->getValue())
	{
		case WP_COLOR_SILVER: v_color[obj] = white; break;
		case WP_COLOR_RED:    v_color[obj] = red;   break;
		case WP_COLOR_BLACK:  v_color[obj] = black; break;
		case WP_COLOR_NONE:   v_color[obj] = NO_COLORTYPE; break;
		default: assert(false);
	}

	// Variable updates
#if USE_SOLUTION == 1
	v_color_sensor_on = pos;
#else
	color_sensor_on = true;
#endif

	// Effects
#if USE_SOLUTION == 1
	assert(color_sensor_on(pos));
#else
	assert(color_sensor_on);
#endif

// TODO: Since return-color-value is never triggered, we have to reset color-sensor-on here
#if USE_SOLUTION == 1
v_color_sensor_on = NO_POSITION;
#else
color_sensor_on = false;
#endif
}

void trigger_probe_sensor(unit_t obj, position_t pos)
{
	std::cout << "trigger_probe_sensor(" << UNIT_STRING[obj] << ", " << POSITION_STRING[pos] << ")" << std::endl;

	// Preconditions
	assert(at(obj, pos) && have_face_sensor(pos));

	// Actions
	ProcessingHeightProbeCommand::create(true)->execute();
	Sleep(500);
	CommandPtr phsc = ProcessingHeightSensorCommand::create();
	phsc->execute();
	v_face[obj] = ((SensorCommand*)phsc.get()) ->getValue() ? up : down; // Workpiece facing up/down, not probe is up/down!
	ProcessingHeightProbeCommand::create(false)->execute();
	Sleep(500);

	// Variable updates
	face_sensor_on = true;

	// Effects
	assert(face_sensor_on);

// TODO: Since return-probe-value is never triggered, we have to reset probe-sensor-on here
face_sensor_on = false;
}



#if USE_SOLUTION == 3
void robot_pick_ground(unit_t obj, robotposition_t room, gripper_t gripper)
{
	std::cout << "robot_pick_ground(" << UNIT_STRING[obj] << ", " << POSITION_STRING[room] << ", " << GRIPPER_STRING[gripper] << ")" << std::endl;

	// Preconditions
	assert(at(obj, room) && in_robot == room && free_hand(gripper));

	// Actions
	{
		// Extend the minislide
		StorageExtendMiniSlideCommand::create()->execute();

		// Lower the gripper above the current position
		StorageLinearAxisCommand::create(ST_LA_LEVEL3_PUT)->execute();

		// Close the gripper
		StorageCloseGripperCommand::create()->execute();

		// Lift the object
		StorageLinearAxisCommand::create(ST_LA_COLOR_DETECT)->execute();

		// Retract the minislide
		StorageRetractMiniSlideCommand::create()->execute();
	}

	// Variable updates
carry_Ball1 = gripper; // TODO: Duplicate predicate!
	v_carry[obj] = gripper;
	v_at[obj] = NO_POSITION;
	v_free_hand = ALL_FALSE;
	v_occupied = NO_POSITION;

	// Effects
	assert(/*carry(obj, gripper)*/ carry_Ball1 == gripper && !at(obj, room) && !free_hand(gripper) && !occupied(room));
}

void robot_drop_ground(unit_t obj, robotposition_t room, gripper_t gripper)
{
	std::cout << "robot_drop_ground(" << UNIT_STRING[obj] << ", " << POSITION_STRING[room] << ", " << GRIPPER_STRING[gripper] << ")" << std::endl;

	// Preconditions
	assert(/*carry(obj, gripper)*/ carry_Ball1 == gripper && in_robot == room && !occupied(room));

	// Actions
	{
		// Extend the minislide
		StorageExtendMiniSlideCommand::create()->execute();

		// Lower the gripper above the current position
		StorageLinearAxisCommand::create(ST_LA_LEVEL3_PUT)->execute();

		// Open the gripper
		StorageOpenGripperCommand::create()->execute();

		// Lift the robot arm
		StorageLinearAxisCommand::create(ST_LA_COLOR_DETECT)->execute();

		// Retract the minislide
		StorageRetractMiniSlideCommand::create()->execute();
	}

	// Variable updates
carry_Ball1 = ALL_FALSE; // TODO: Duplicate predicate!
	v_at[obj] = room;
	v_free_hand = gripper;
	v_carry[obj] = ALL_FALSE;

	// Effects
	assert(at(obj, room) && free_hand(gripper) && /*!carry(obj, gripper)*/ carry_Ball1 != gripper);
}

void robot_check_shelf(rackposition_t room, gripper_t gri)
{
	std::cout << "robot_check_shelf(" << POSITION_STRING[room] << ", " << GRIPPER_STRING[gri] << ")" << std::endl;

	// Preconditions
	assert(in_robot == room && free_hand(gri));

	// Actions
	{
		// Lift the robot arm
		if (room >= L1_a && in_robot <= L1_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL1_MOVE)->execute();
		}
		else if (room >= L2_a && in_robot <= L2_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL2_MOVE)->execute();
		}
		else if (room >= L3_a && in_robot <= L3_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL3_MOVE)->execute();
		}
		else
		{
			assert(false);
		}

		// Extend the minislide
		StorageExtendMiniSlideCommand::create()->execute();

		// Trigger color sensor
		CommandPtr csc = StorageColorSensorCommand::create();
		csc->execute();
		switch (dynamic_cast<SensorCommand*>(csc.get())->getValue())
		{
			case WP_COLOR_SILVER:
			case WP_COLOR_RED:
			case WP_COLOR_BLACK:
				v_rack_occupied[room] = yes;
				break;
			case WP_COLOR_NONE:
				v_rack_occupied[room] = no;
				break;
			default: assert(false);
		}

		// Retract the minislide
		StorageRetractMiniSlideCommand::create()->execute();
	}

	// Variable updates
	v_occupy_sensor_on = gri;

	// TODO: Why are there those extra predicates???
	switch (room)
	{
		case L1_a: rack_occupied_L1_a = v_rack_occupied[room]; break;
		case L1_b: rack_occupied_L1_b = v_rack_occupied[room]; break;
		case L2_a: rack_occupied_L2_a = v_rack_occupied[room]; break;
		case L2_b: rack_occupied_L2_b = v_rack_occupied[room]; break;
		default: assert(false);
	}

	// Effects
	assert(occupy_sensor_on(gri));

// TODO: Since robot-return-occupy is never triggered, we have to reset occupy-sensor-on here
v_occupy_sensor_on = ALL_FALSE;
}

void robot_pick_shelf(unit_t obj, rackposition_t room, gripper_t gripper)
{
	std::cout << "robot_pick_shelf(" << UNIT_STRING[obj] << ", " << POSITION_STRING[room] << ", " << GRIPPER_STRING[gripper] << ")" << std::endl;

	// Preconditions
	assert(at(obj, room) && in_robot == room && free_hand(gripper) && rack_occupied(room, yes));

	// Actions
	{
		// Extend the minislide
		StorageExtendMiniSlideCommand::create()->execute();

		// Lower the gripper at the current position
		if (room >= L1_a && in_robot <= L1_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL1_PUT)->execute();
		}
		else if (room >= L2_a && in_robot <= L2_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL2_PUT)->execute();
		}
		else if (room >= L3_a && in_robot <= L3_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL3_PUT)->execute();
		}
		else
		{
			assert(false);
		}

		// Close the gripper
		StorageCloseGripperCommand::create()->execute();

		// Lift the object
		if (room >= L1_a && in_robot <= L1_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL1_MOVE)->execute();
		}
		else if (room >= L2_a && in_robot <= L2_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL2_MOVE)->execute();
		}
		else if (room >= L3_a && in_robot <= L3_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL3_MOVE)->execute();
		}
		else
		{
			assert(false);
		}

		// Retract the minislide
		StorageRetractMiniSlideCommand::create()->execute();
	}

	// Variable updates
carry_Ball1 = gripper; // TODO: Duplicate predicate!
	v_carry[obj] = gripper;
	v_at[obj] = NO_POSITION;
	v_free_hand = ALL_FALSE;
	v_rack_occupied[room] = no;

	// Effects
	assert(carry(obj, gripper) && !at(obj, room) && !free_hand(gripper) && rack_occupied(room, no) && !rack_occupied(room, yes));
}

void robot_drop_shelf(unit_t obj, rackposition_t room, gripper_t gripper)
{
	std::cout << "robot_drop_shelf(" << UNIT_STRING[obj] << ", " << POSITION_STRING[room] << ", " << GRIPPER_STRING[gripper] << ")" << std::endl;

	// Preconditions
	assert(carry(obj, gripper) && in_robot == room && rack_occupied(room, no));

	// Actions
	{
		// Extend the minislide
		StorageExtendMiniSlideCommand::create()->execute();

		// Lower the gripper at the current position
		if (room >= L1_a && in_robot <= L1_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL1_PUT)->execute();
		}
		else if (room >= L2_a && in_robot <= L2_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL2_PUT)->execute();
		}
		else if (room >= L3_a && in_robot <= L3_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL3_PUT)->execute();
		}
		else
		{
			assert(false);
		}

		// Open the gripper
		StorageOpenGripperCommand::create()->execute();

		// Lift the robot arm
		if (room >= L1_a && in_robot <= L1_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL1_MOVE)->execute();
		}
		else if (room >= L2_a && in_robot <= L2_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL2_MOVE)->execute();
		}
		else if (room >= L3_a && in_robot <= L3_f)
		{
			StorageLinearAxisCommand::create(ST_LA_LEVEL3_MOVE)->execute();
		}
		else
		{
			assert(false);
		}

		// Retract the minislide
		StorageRetractMiniSlideCommand::create()->execute();
	}

	// Variable updates
carry_Ball1 = ALL_FALSE; // TODO: Duplicate predicate!
	v_at[obj] = room;
	v_free_hand = gripper;
	v_carry[obj] = ALL_FALSE;
	v_rack_occupied[room] = yes;

	// Effects
	assert(at(obj, room) && free_hand(gripper) && !carry(obj, gripper) && !rack_occupied(room, no) && rack_occupied(room, yes));
}
#endif
