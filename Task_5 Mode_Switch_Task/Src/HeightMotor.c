
#include "Rte_HeightMotor.h"

void HeightMotor_Move (StepMotorStepType Step)
{
	Std_ReturnType status;

	if(Step == MOTOR_STEP_PLUS)
	{
		(void)Rte_Call_rpIOSetHeight_IOSetForward();
	}
	else if(Step == MOTOR_STEP_MINUS)
	{
		(void)Rte_Call_rpIOSetHeight_IOSetReverse();
	}
	else
	{
		/* Do Nothing */
	}

}

