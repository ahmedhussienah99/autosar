#include "Rte_SlideMotor.h"

void SlideMotor_Move (StepMotorStepType Step)
{
	Std_ReturnType status;

	if(Step == MOTOR_STEP_PLUS)
	{
		(void)Rte_Call_rpIOSetSlide_IOSetForward();
	}
	else if(Step == MOTOR_STEP_MINUS)
	{
		(void)Rte_Call_rpIOSetSlide_IOSetReverse();
	}
	else
	{
		/* Do Nothing */
	}
}

