#include "DriveTrain.h"
#include "../RobotMap.h"
#include "../Commands/JoystickDrive.h"


DriveTrain::DriveTrain() : frc::Subsystem("DriveTrain")
{

	FL = RobotMap::FLDrive;
	FR = RobotMap::FRDrive;
	BL = RobotMap::BLDrive;
	BR = RobotMap::BRDrive;
	tankDrive = new RobotDrive(FL, BL, FR, BR);

}

void DriveTrain::InitDefaultCommand()
{
	SetDefaultCommand(new drive());
}

void DriveTrain::resetEncoders()
{
	FL->GetSensorCollection().SetQuadraturePosition(0);
	//FR->GetSensorCollection().SetQuadraturePosition(0);
	//BL->GetSensorCollection().SetQuadraturePosition(0);
	BR->GetSensorCollection().SetQuadraturePosition(0);

}
void DriveTrain::Periodic()
{
	getEncoderValues();

}

void DriveTrain::tank()
{
	tankDrive->ArcadeDrive(Robot::oi->gamepad->GetRawAxis(1), Robot::oi->gamepad->GetRawAxis(4));
}

void DriveTrain::getEncoderValues(){
	SmartDashboard::PutString("DB/String 0", std::to_string(FL->GetSensorCollection().GetQuadraturePosition()));
	//SmartDashboard::PutString("DB/String 1", FR->GetSensorCollection().GetQuadraturePosition() +" ");
	//SmartDashboard::PutString("DB/String 2", BL->GetSensorCollection().GetQuadraturePosition() +" ");
	SmartDashboard::PutString("DB/String 3", std::to_string(BR->GetSensorCollection().GetQuadraturePosition()));
}




