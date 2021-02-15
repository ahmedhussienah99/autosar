
#include "Rte_InclineMotor.h"

void InclineMotor_Move (StepMotorStepType Step)
{
	Std_ReturnType status;

	if(Step == MOTOR_STEP_PLUS)
	{
		(void)Rte_Call_rpIOSetIncline_IOSetForward();
	}
	else if(Step == MOTOR_STEP_MINUS)
	{
		(void)Rte_Call_rpIOSetIncline_IOSetReverse();
	}
	else
	{
		/* Do Nothing */
	}
}

