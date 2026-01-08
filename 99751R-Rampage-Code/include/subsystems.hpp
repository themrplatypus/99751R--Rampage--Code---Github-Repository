#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"
#include "pros/motor_group.hpp"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');





// INTAKES OUTAKES AND SILLY SHIIIT
inline pros::MotorGroup intake({4, 6});
inline pros::Motor outtake(5);


// PNUEMATICS SETUP :3

inline ez::Piston matchloader('A');
inline ez::Piston descore('B');