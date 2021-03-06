#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
const float PI = 3.14f;
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
//const int LEFTMOTOR = 1;
//const int RIGHTMOTOR = 2;

const int TALON_FRONTRIGHT = 0;
const int TALON_FRONTLEFT = 1;
const int TALON_BACKRIGHT = 2;
const int TALON_BACKLEFT = 3;

const float JOYSTICK_THRESHOLD = .20f;
const float TRIGGER_THRESHOLD = .001f;

const float DRIVE_POWER = .5f;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
//const int RANGE_FINDER_PORT = 1;
//const int RANGE_FINDER_MODULE = 1;

#endif
