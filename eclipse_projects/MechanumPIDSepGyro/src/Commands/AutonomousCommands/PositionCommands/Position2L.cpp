// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "Position2L.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

Position2L::Position2L() {
	AddSequential(new MoveMeters(1.5));
	AddSequential(new TurnDegrees(-90));
	AddSequential(new MoveMeters(2));
	AddSequential(new TurnDegrees(90));
	AddSequential(new StopFromAccel());
	AddSequential(new StopFromAccel());
	//Deploy Box
 }
