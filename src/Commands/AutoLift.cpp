// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.



#include "AutoLift.h"
#include "ServoOff.h"
#include "LiftPos.h"
#include "LiftMan.h"
#include "LiftBrake.h"
#include "Intake_Pos.h"
#include "Roller_In.h"
#include "Roller_Stop.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

AutoLift::AutoLift() {
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
     // Add Commands here:
    // e.g. AddSequential(new Command1());
    //      AddSequential(new Command2());
    // these will run in order.

    // To run multiple commands at the same time,
    // use AddParallel()
    // e.g. AddParallel(new Command1());
    //      AddSequential(new Command2());
    // Command1 and Command2 will run in parallel.

    // A command group will require all of the subsystems that each member
    // would require.
    // e.g. if Command1 requires chassis, and Command2 requires arm,
    // a CommandGroup containing them would require both the chassis and the
    // arm.
              // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=COMMAND_DECLARATIONS
    AddParallel(new ServoOff());
    AddSequential(new WaitCommand(0.2));
	AddParallel(new Intake_Pos(0));
	AddParallel(new Roller_In(0.2));
	AddSequential(new LiftPos(-0.65, 12));
    AddSequential(new WaitCommand(0.2));
	AddSequential(new LiftBrake(0.5));
	AddSequential(new Roller_Stop());
    AddSequential(new WaitCommand(1.0));
	AddSequential(new LiftMan(0));
              // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=COMMAND_DECLARATIONS
 }
