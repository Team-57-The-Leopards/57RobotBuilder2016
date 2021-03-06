// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef LIFT_H
#define LIFT_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Lift: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<CANTalon> cIM1;
	std::shared_ptr<CANTalon> cIM2;
	std::shared_ptr<Servo> shifter;
	std::shared_ptr<Servo> lock;
	std::shared_ptr<CANTalon> pusher;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	CANSpeedController::ControlMode currentMode;
public:
	Lift();
	void InitDefaultCommand();
	void Run(double speed);
	void GotoPos(double speed);
	void SetSlope(double slope);
	void SetBrake(double pos);
	bool GetInPosition();
	double GetVel();
	double GetPosError();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif
