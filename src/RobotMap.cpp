// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<CANTalon> RobotMap::chassisFrontLeft;
std::shared_ptr<CANTalon> RobotMap::chassisFrontRight;
std::shared_ptr<CANTalon> RobotMap::chassisRearLeft;
std::shared_ptr<CANTalon> RobotMap::chassisRearRight;
std::shared_ptr<RobotDrive> RobotMap::chassisRobotDrive41;
std::shared_ptr<AnalogInput> RobotMap::chassisRangeFront;
std::shared_ptr<AnalogInput> RobotMap::chassisRangeLeft;
std::shared_ptr<AnalogInput> RobotMap::chassisRangeRight;
std::shared_ptr<CANTalon> RobotMap::intakeArmMotor;
std::shared_ptr<CANTalon> RobotMap::rollersMotor;
std::shared_ptr<CANTalon> RobotMap::liftCIM1;
std::shared_ptr<CANTalon> RobotMap::liftCIM2;
std::shared_ptr<Servo> RobotMap::liftShifter;
std::shared_ptr<Servo> RobotMap::liftLock;
std::shared_ptr<CANTalon> RobotMap::liftPusher;
std::shared_ptr<Servo> RobotMap::liftAngleAngle;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    chassisFrontLeft.reset(new CANTalon(3));
    lw->AddActuator("Chassis", "FrontLeft", chassisFrontLeft);
    
    chassisFrontRight.reset(new CANTalon(2));
    lw->AddActuator("Chassis", "FrontRight", chassisFrontRight);
    
    chassisRearLeft.reset(new CANTalon(4));
    lw->AddActuator("Chassis", "RearLeft", chassisRearLeft);
    
    chassisRearRight.reset(new CANTalon(1));
    lw->AddActuator("Chassis", "RearRight", chassisRearRight);
    
    chassisRobotDrive41.reset(new RobotDrive(chassisFrontLeft, chassisRearLeft,
              chassisFrontRight, chassisRearRight));
    
    chassisRobotDrive41->SetSafetyEnabled(true);
        chassisRobotDrive41->SetExpiration(0.1);
        chassisRobotDrive41->SetSensitivity(0.5);
        chassisRobotDrive41->SetMaxOutput(1.0);
        chassisRobotDrive41->SetInvertedMotor(RobotDrive::kFrontLeftMotor, true);
        chassisRobotDrive41->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
        chassisRobotDrive41->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
        chassisRobotDrive41->SetInvertedMotor(RobotDrive::kRearRightMotor, true);
    chassisRangeFront.reset(new AnalogInput(0));
    lw->AddSensor("Chassis", "RangeFront", chassisRangeFront);
    
    chassisRangeLeft.reset(new AnalogInput(1));
    lw->AddSensor("Chassis", "RangeLeft", chassisRangeLeft);
    
    chassisRangeRight.reset(new AnalogInput(2));
    lw->AddSensor("Chassis", "RangeRight", chassisRangeRight);
    
    intakeArmMotor.reset(new CANTalon(6));
    lw->AddActuator("IntakeArm", "Motor", intakeArmMotor);
    
    rollersMotor.reset(new CANTalon(5));
    lw->AddActuator("Rollers", "Motor", rollersMotor);
    
    liftCIM1.reset(new CANTalon(7));
    lw->AddActuator("Lift", "CIM1", liftCIM1);
    
    liftCIM2.reset(new CANTalon(8));
    lw->AddActuator("Lift", "CIM2", liftCIM2);
    
    liftShifter.reset(new Servo(1));
    lw->AddActuator("Lift", "Shifter", liftShifter);
    
    liftLock.reset(new Servo(2));
    lw->AddActuator("Lift", "Lock", liftLock);
    
    liftPusher.reset(new CANTalon(9));
    lw->AddActuator("Lift", "Pusher", liftPusher);
    
    liftAngleAngle.reset(new Servo(0));

    lw->AddActuator("LiftAngle", "Angle", liftAngleAngle);
    


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
