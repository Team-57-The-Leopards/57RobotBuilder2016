// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "IntakeArm.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

IntakeArm::IntakeArm() : Subsystem("IntakeArm") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    motor = RobotMap::intakeArmMotor;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    currentMode = CANSpeedController::ControlMode::kFollower;
    motor->SetSensorDirection(true);
    motor->SetEncPosition(0);
}

void IntakeArm::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void IntakeArm::Run(double speed)
{
	if (currentMode != CANSpeedController::ControlMode::kPercentVbus)
	{
		motor->SetControlMode(CANSpeedController::ControlMode::kPercentVbus);
		currentMode = CANSpeedController::ControlMode::kPercentVbus;
	}
	motor->Set(speed);
}

double IntakeArm::GetPos()
{
	return motor->GetPosition();
}

void IntakeArm::GotoPos(double pos)
{
	if (currentMode != CANSpeedController::ControlMode::kPosition)
	{
		motor->SetControlMode(CANSpeedController::ControlMode::kPosition);
		currentMode = CANSpeedController::ControlMode::kPosition;
	}
	motor->Set(pos);
}

void IntakeArm::HoldPos()
{
	GotoPos(motor->GetPosition());
}
