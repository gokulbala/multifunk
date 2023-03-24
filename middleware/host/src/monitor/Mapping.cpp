#include "Mapping.h"
#include <iostream>

// Mapping the Services to numbers, which are entered on the Output of this application

Mapping::Mapping (void) {
	_map[0] = "Exit";
	_map[1] = "Reset";
	_map[2] = "Start";
	_map[3] = "Stop";
	_map[4] = "Extend Mini Slide";
	_map[5] = "Retract Mini Slide";
	_map[6] = "Open Gripper";
	_map[7] = "Close Gripper";
	_map[8] = "Set Robot Arm Position";
	_map[9] = "Status Word 0";
	_map[10] = "Status Word 1";
	_map[11] = "Reset Indicator Light ON";
	_map[12] = "Start Indicator Light ON";

}

Mapping::~Mapping (void) {
}

void Mapping::printList (void) {
	for (std::map<int, std::string>::const_iterator iter = _map.begin(); iter != _map.end(); iter++) {
		int key = (*iter).first;
		const std::string description = (*iter).second;
		std::cout << "   [" << key << "] " << description.c_str() << std::endl;
	}
}

const std::string Mapping::name (int number) {
	return _map[number];
}
