
#include "Rte_InclineMotor.h"

void InclineMotor_Move (StepMotorStepType Step)
{
	Std_ReturnType status;
	status = Rte_Call_rpIOSetIncline_IOSetForward();
	status = Rte_Call_rpIOSetIncline_IOSetReverse();

}

