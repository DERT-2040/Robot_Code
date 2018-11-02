// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef PNEUMATICS_H
#define PNEUMATICS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "ctre/Phoenix.h"
#include <AHRS.h>
#include "Solenoid.h"
/**
 *
 *
 * @author ExampleAuthor
 */

class Pneumatics: public frc::Subsystem {
private:

	std::shared_ptr<Compressor> Comp;
	std::shared_ptr<DoubleSolenoid> Solenoid;

public:
	Pneumatics();
	void InitDefaultCommand() override;
	void Periodic() override;
	void SetSolenoid(int power);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif