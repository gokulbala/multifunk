(define (problem pb1)
	(:domain FESTO_domain )
	(:requirements :strips :typing :negative-preconditions :disjunctive-preconditions)
	(:objects L1_a L1_b L1_c L1_d L1_e L1_f - robotposition
		  L2_a L2_b L2_c L2_d L2_e L2_f - robotposition
		  L3_a L3_b L3_c L3_d L3_e L3_f - robotposition
		  X Y - robotposition
		  P1 P2 P3 P4 P5  - beltposition
		  R1 R2 R3 R4 R5 R6 - plateposition
		  Ball1 - unit
		  robot - gripper
		  red black white - colortype)
		  		 		  

	(:init 
		(P0TRAN)
		(in-robot X)
		(at Ball1 Y)
		(free-hand robot)
		(rod-located P5 R1) (rod-located R4 P4) (rod-located P3 Y)
		(belt-connected X P1) (belt-connected P1 P5)
		(belt-connected P4 P2) (belt-connected P2 P3)
		(next R1 R2) (next R2 R3) (next R3 R4) (next R4 R5) (next R5 R6) (next R6 R1)
		(faceup Ball1)
		(drillposition R3)
	)
	;; Under the simple setting, the goal is to place the processed unit (it must be drilled) to the rack based on its color.
	;; (Red -> L1) (Black -> L2) (White -> L3)
	;; (:goal (and (carry Ball1 robot) (in-robot X)))
	(:goal (and (carry ?obj Ball1 robot) (in-robot X) (not (occupied L1_a)))) 
	;; (:goal (and (at Ball1 X) (in-robot X)))  // The robot is unable to drop the object to X
)