

/* Start of block 0: */
BLOCK_START(0);


IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	belt_move_b(Ball1, P1, P5);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
/* End of block 0: */
BLOCK_END(0);


/* Start of block 1: */
BLOCK_START(1);


IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	rod_push(Ball1, P5, R1);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	belt_move_b(Ball1, P1, P5);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
/* End of block 1: */
BLOCK_END(1);


/* Start of block 2: */
BLOCK_START(2);


IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	rod_push(Ball1, P5, R1);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R5, R6, R1, R2, R3, R4);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R6, R1, R2, R3, R4, R5);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R4, R5, R6, R1, R2, R3);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R2, R3, R4, R5, R6, R1);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R1, R2, R3, R4, R5, R6);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R3, R4, R5, R6, R1, R2);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
/* End of block 2: */
BLOCK_END(2);


/* Start of block 3: */
BLOCK_START(3);


IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R5, R6, R1, R2, R3, R4);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R6, R1, R2, R3, R4, R5);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R4, R5, R6, R1, R2, R3);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R2, R3, R4, R5, R6, R1);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R1, R2, R3, R4, R5, R6);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R3, R4, R5, R6, R1, R2);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	trigger_probe_sensor(Ball1, R2);

}
/* End of block 3: */
BLOCK_END(3);


/* Start of block 4: */
BLOCK_START(4);


IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R5, R6, R1, R2, R3, R4);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R6, R1, R2, R3, R4, R5);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R4, R5, R6, R1, R2, R3);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R2, R3, R4, R5, R6, R1);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R1, R2, R3, R4, R5, R6);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R3, R4, R5, R6, R1, R2);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	trigger_probe_sensor(Ball1, R2);

}
/* End of block 4: */
BLOCK_END(4);


/* Start of block 5: */
BLOCK_START(5);


IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R5, R6, R1, R2, R3, R4);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R6, R1, R2, R3, R4, R5);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R4, R5, R6, R1, R2, R3);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R2, R3, R4, R5, R6, R1);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R1, R2, R3, R4, R5, R6);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R3, R4, R5, R6, R1, R2);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	drill_in(Ball1, R3);

}
/* End of block 5: */
BLOCK_END(5);


/* Start of block 6: */
BLOCK_START(6);


IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	rod_push(Ball1, R4, P4);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R5, R6, R1, R2, R3, R4);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R6, R1, R2, R3, R4, R5);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R4, R5, R6, R1, R2, R3);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R2, R3, R4, R5, R6, R1);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R1, R2, R3, R4, R5, R6);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R3, R4, R5, R6, R1, R2);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	drill_in(Ball1, R3);

}
/* End of block 6: */
BLOCK_END(6);


/* Start of block 7: */
BLOCK_START(7);


IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	rod_push(Ball1, R4, P4);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	belt_move_b(Ball1, P4, P2);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R5, R6, R1, R2, R3, R4);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R6, R1, R2, R3, R4, R5);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R4, R5, R6, R1, R2, R3);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R2, R3, R4, R5, R6, R1);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R1, R2, R3, R4, R5, R6);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	plate_rotate(Ball1, Ball1, Ball1, Ball1, Ball1, Ball1, R3, R4, R5, R6, R1, R2);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
/* End of block 7: */
BLOCK_END(7);


/* Start of block 8: */
BLOCK_START(8);


IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	rod_push(Ball1, R4, P4);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	belt_move_b(Ball1, P2, P3);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	belt_move_b(Ball1, P4, P2);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
/* End of block 8: */
BLOCK_END(8);


/* Start of block 9: */
BLOCK_START(9);


IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	rod_push(Ball1, P3, Y);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	belt_move_b(Ball1, P2, P3);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	belt_move_b(Ball1, P4, P2);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
/* End of block 9: */
BLOCK_END(9);


/* Start of block 10: */
BLOCK_START(10);


IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	rod_push(Ball1, P3, Y);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	belt_move_b(Ball1, P2, P3);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
/* End of block 10: */
BLOCK_END(10);


/* Start of block 11: */
BLOCK_START(11);


IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	rod_push(Ball1, P3, Y);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_pick_ground(Ball1, Y, robot);

}
/* End of block 11: */
BLOCK_END(11);


/* Start of block 12: */
BLOCK_START(12);


IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	trigger_color_sensor(Ball1, Y);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, X);

}
/* End of block 12: */
BLOCK_END(12);


/* Start of block 13: */
BLOCK_START(13);


IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_drop_ground(Ball1, X, robot);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, L1_b);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, L2_a);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, L1_a);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, L2_b);

}
/* End of block 13: */
BLOCK_END(13);


/* Start of block 14: */
BLOCK_START(14);


IF_END();
if (
(EVAL(( in_robot == L1_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_check_shelf(L1_a, robot);

}
IF_END();
if (
(EVAL(( in_robot == L1_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_check_shelf(L1_b, robot);

}
IF_END();
if (
(EVAL(( in_robot == L2_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_check_shelf(L2_b, robot);

}
IF_END();
if (
(EVAL(( in_robot == L2_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_check_shelf(L2_a, robot);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, L1_b);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, L2_a);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, L1_a);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, L2_b);

}
/* End of block 14: */
BLOCK_END(14);


/* Start of block 15: */
BLOCK_START(15);


IF_END();
if (
(EVAL(( in_robot == L2_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(L2_a, L2_b);

}
IF_END();
if (
(EVAL(( in_robot == L1_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == no)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(L1_b, Y);

}
IF_END();
if (
(EVAL(( in_robot == L1_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(L1_b, L1_a);

}
IF_END();
if (
(EVAL(( in_robot == L1_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(L1_a, L1_b);

}
IF_END();
if (
(EVAL(( in_robot == L2_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(L2_b, L2_a);

}
IF_END();
if (
(EVAL(( in_robot == L2_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == no)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(L2_a, Y);

}
IF_END();
if (
(EVAL(( in_robot == L1_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == no)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(L1_a, Y);

}
IF_END();
if (
(EVAL(( in_robot == L2_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == no)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(L2_b, Y);

}
IF_END();
if (
(EVAL(( in_robot == L1_a) || ( in_robot == L1_b) || ( in_robot == L2_a) || ( in_robot == L2_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(!drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(face(Ball1,down)) && EVAL(!face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	belt_move_r(Ball1, X, P1);

}
/* End of block 15: */
BLOCK_END(15);


/* Start of block 16: */
BLOCK_START(16);


IF_END();
if (
(EVAL(( in_robot == L1_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_check_shelf(L1_a, robot);

}
IF_END();
if (
(EVAL(( in_robot == L1_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_check_shelf(L1_b, robot);

}
IF_END();
if (
(EVAL(( in_robot == L2_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_check_shelf(L2_b, robot);

}
IF_END();
if (
(EVAL(( in_robot == L2_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_check_shelf(L2_a, robot);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == no)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == no)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == no)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == no)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_pick_ground(Ball1, Y, robot);

}
/* End of block 16: */
BLOCK_END(16);


/* Start of block 17: */
BLOCK_START(17);


IF_END();
if (
(EVAL(( in_robot == L1_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(L1_b, Y);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == no)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, L1_b);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == no)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, L2_a);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == no)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, L1_a);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == no)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, L2_b);

}
IF_END();
if (
(EVAL(( in_robot == L2_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(L2_a, Y);

}
IF_END();
if (
(EVAL(( in_robot == L1_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(L1_a, Y);

}
IF_END();
if (
(EVAL(( in_robot == L2_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(L2_b, Y);

}
/* End of block 17: */
BLOCK_END(17);


/* Start of block 18: */
BLOCK_START(18);


IF_END();
if (
(EVAL(( in_robot == L1_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == no)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_drop_shelf(Ball1, L1_a, robot);

}
IF_END();
if (
(EVAL(( in_robot == L1_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == no)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_drop_shelf(Ball1, L1_b, robot);

}
IF_END();
if (
(EVAL(( in_robot == L2_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == no)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_drop_shelf(Ball1, L2_b, robot);

}
IF_END();
if (
(EVAL(( in_robot == L2_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == no)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_drop_shelf(Ball1, L2_a, robot);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == no)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == no)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_pick_ground(Ball1, Y, robot);

}
/* End of block 18: */
BLOCK_END(18);


/* Start of block 19: */
BLOCK_START(19);


IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, X);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L1_b == no)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, L1_b);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == no)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, L2_a);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == no)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, L1_a);

}
IF_END();
if (
(EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL((rack_occupied_L2_b == no)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(Y, L2_b);

}
/* End of block 19: */
BLOCK_END(19);


/* Start of block 20: */
BLOCK_START(20);


IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_drop_ground(Ball1, X, robot);

}
IF_END();
if (
(EVAL(( in_robot == L1_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == no)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_drop_shelf(Ball1, L1_a, robot);

}
IF_END();
if (
(EVAL(( in_robot == L1_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L1_b == no)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_drop_shelf(Ball1, L1_b, robot);

}
IF_END();
if (
(EVAL(( in_robot == L2_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL((rack_occupied_L2_b == no)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_drop_shelf(Ball1, L2_b, robot);

}
IF_END();
if (
(EVAL(( in_robot == L2_a)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(!at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(!free_hand(robot)) && EVAL((carry_Ball1 == robot)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == no)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_drop_shelf(Ball1, L2_a, robot);

}
/* End of block 20: */
BLOCK_END(20);


/* Start of block 21: */
BLOCK_START(21);


IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, L1_b);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, L2_a);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, Y);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, L1_a);

}
IF_END();
if (
(EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == X)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	robot_move(X, L2_b);

}
/* End of block 21: */
BLOCK_END(21);


/* Start of block 22: */
BLOCK_START(22);


IF_END();
if (
(EVAL(( in_robot == L1_a) || ( in_robot == L1_b) || ( in_robot == L2_a) || ( in_robot == L2_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == L1_a) || ( in_robot == L1_b) || ( in_robot == L2_a) || ( in_robot == L2_b)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(color(Ball1,red)) && EVAL(!color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == yes)) && EVAL((rack_occupied_L1_b == yes)) && EVAL((rack_occupied_L2_a == ALL_FALSE)) && EVAL((rack_occupied_L2_b == ALL_FALSE)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
 || (EVAL(( in_robot == Y)) && EVAL(!at(Ball1,L1_a)) && EVAL(!at(Ball1,L1_b)) && EVAL(!at(Ball1,L2_a)) && EVAL(!at(Ball1,L2_b)) && EVAL(!at(Ball1,P1)) && EVAL(!at(Ball1,P2)) && EVAL(!at(Ball1,P3)) && EVAL(!at(Ball1,P4)) && EVAL(!at(Ball1,P5)) && EVAL(!at(Ball1,R1)) && EVAL(!at(Ball1,R2)) && EVAL(!at(Ball1,R3)) && EVAL(!at(Ball1,R4)) && EVAL(!at(Ball1,R5)) && EVAL(!at(Ball1,R6)) && EVAL(at(Ball1,X)) && EVAL(!at(Ball1,Y)) && EVAL(free_hand(robot)) && EVAL((carry_Ball1 == ALL_FALSE)) && EVAL(!occupied(P1)) && EVAL(!occupied(P2)) && EVAL(!occupied(P3)) && EVAL(!occupied(P4)) && EVAL(!occupied(P5)) && EVAL(!occupied(R1)) && EVAL(!occupied(R2)) && EVAL(!occupied(R3)) && EVAL(!occupied(R4)) && EVAL(!occupied(R5)) && EVAL(!occupied(R6)) && EVAL(!occupied(X)) && EVAL(!occupied(Y)) && EVAL(drilled(Ball1)) && EVAL(!color_sensor_on) && EVAL(!color(Ball1,red)) && EVAL(color(Ball1,white)) && EVAL(!face_sensor_on) && EVAL(!face(Ball1,down)) && EVAL(face(Ball1,up)) && EVAL((rack_occupied_L1_a == ALL_FALSE)) && EVAL((rack_occupied_L1_b == ALL_FALSE)) && EVAL((rack_occupied_L2_a == yes)) && EVAL((rack_occupied_L2_b == yes)) && EVAL(!occupy_sensor_on(robot)) && EVAL(P0tran))
) {
	belt_move_r(Ball1, X, P1);

}
/* End of block 22: */
BLOCK_END(22);


/* Start of block 23: */
BLOCK_START(23);


/* End of block 23: */
BLOCK_END(23);


