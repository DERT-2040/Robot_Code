// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Drive_with_joysticks.h"



// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

Drive_with_joysticks::Drive_with_joysticks(): frc::Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::driveTrain.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES


}// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR


// Called just before this Command runs the first time
void Drive_with_joysticks::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Drive_with_joysticks::Execute() {

	Robot::driveTrain->Teleop(Robot::oi->getJoystick1() -> GetX(),Robot::oi->getJoystick1() -> GetY(),Robot::oi->getJoystick2() -> GetX(),0.9);
	SmartDashboard::PutString("DB/String 0", std::to_string(Robot::oi->getJoystick1() -> GetX()));
}

// Make this return true when this Command no longer needs to run execute()
bool Drive_with_joysticks::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void Drive_with_joysticks::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Drive_with_joysticks::Interrupted() {

}
;
