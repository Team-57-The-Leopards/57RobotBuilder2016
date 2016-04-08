// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "LiftAngle.h"
#include "../RobotMap.h"
#include "../Commands/BumpServo.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

LiftAngle::LiftAngle() : Subsystem("LiftAngle") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    angle = RobotMap::liftAngleAngle;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    curPos = 0.4;
	angle->Set(curPos);
}

void LiftAngle::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

//	SetDefaultCommand(new BumpServo(0));
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void LiftAngle::Angle(double pos)
{
	angle->Set(pos);
	curPos = pos;
	SmartDashboard::PutNumber("Servo Position", pos);
}
void LiftAngle::Bump(double amt)
{
	curPos += amt;
	angle->Set(curPos);
	SmartDashboard::PutNumber("Servo Position", curPos);
}
void LiftAngle::AngleOff()
{
	angle->SetOffline();
}