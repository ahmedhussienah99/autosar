
#include "Rte_SlideMotor.h"

void SlideMotor_Move (StepMotorStepType Step)
{
	Std_ReturnType status;
	status = Rte_Call_rpIOSetSlide_IOSetForward();
	status = Rte_Call_rpIOSetSlide_IOSetReverse();

}

