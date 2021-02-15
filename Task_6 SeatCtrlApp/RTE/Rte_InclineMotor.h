
#ifndef RTE_INCLINEMOTOR_H
#define RTE_INCLINEMOTOR_H

#include "Rte_InclineMotor_Type.h"

Std_ReturnType Rte_Call_InclineMotor_rpIOSetIncline_IOSetForward();
Std_ReturnType Rte_Call_InclineMotor_rpIOSetIncline_IOSetReverse();

#define Rte_Call_rpIOSetIncline_IOSetForward 		Rte_Call_InclineMotor_rpIOSetIncline_IOSetForward
#define Rte_Call_rpIOSetIncline_IOSetReverse 		Rte_Call_InclineMotor_rpIOSetIncline_IOSetReverse

void InclineMotor_Move(StepMotorStepType Step);

#endif
