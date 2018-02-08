// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "GyroSubsystem.h"

#include "ctre/Phoenix.h"

#include "../Robot.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

GyroSubsystem::GyroSubsystem() : frc::PIDSubsystem("test",0.015,0,0.0175)  {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	SetAbsoluteTolerance(0.01);
	GetPIDController()->SetContinuous(false);
	SetOutputRange(-0.4,0.4);
	RobotMap::sensorsAnalogGyro1->Reset();
}

void GyroSubsystem::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void GyroSubsystem::Periodic() {
    // Put code here to be run every loop

}
double GyroSubsystem::gAngle(){

	double angle = RobotMap::sensorsAnalogGyro1->GetAngle();
	return angle;
}
double GyroSubsystem::getGyroRate(){
	double rate = RobotMap::sensorsAnalogGyro1->GetRate();
	return rate;
}

double GyroSubsystem::ReturnPIDInput(){
	return gAngle();
}
void GyroSubsystem::UsePIDOutput(double output){
		modifier = output;
		SmartDashboard::PutString("DB/String 2",std::to_string(modifier));
		SmartDashboard::PutString("DB/String 0",std::to_string((GetPosition())));
		SmartDashboard::PutString("DB/String 1",std::to_string((GetSetpoint())));
}
bool GyroSubsystem::AtSetpoint(){
	return (GetPosition()-GetSetpoint() < 2 &&GetPosition()-GetSetpoint() > -2)&&(RobotMap::drivetrainLB->GetSensorCollection().GetQuadratureVelocity()<2&&RobotMap::drivetrainLB->GetSensorCollection().GetQuadratureVelocity()>-2);
}
double GyroSubsystem::GetModifier(){
	Enable();
	GetPIDController()->SetEnabled(true);
	return modifier;
}
void GyroSubsystem::setDegrees(double degrees){
	turningOnly = true;
	SetSetpoint(degrees);
}
void GyroSubsystem::setZero(){
	turningOnly = false;
	SetSetpoint(0);
}
void GyroSubsystem::ResetGyro(){
	RobotMap::sensorsAnalogGyro1->Reset();
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

