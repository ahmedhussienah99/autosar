
#include "Rte_HeightMotor.h"

void HeightMotor_Move (StepMotorStepType Step)
{
	Std_ReturnType status;
	status = Rte_Call_rpIOSetHeight_IOSetForward();
	status = Rte_Call_rpIOSetHeight_IOSetReverse();

}

