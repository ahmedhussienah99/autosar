
#ifndef RTE_SLIDEMOTOR_H
#define RTE_SLIDEMOTOR_H

#include "Rte_SlideMotor_Type.h"

Std_ReturnType Rte_Call_SlideMotor_rpIOSetSlide_IOSetForward();
Std_ReturnType Rte_Call_SlideMotor_rpIOSetSlide_IOSetReverse();

#define Rte_Call_rpIOSetSlide_IOSetForward 			Rte_Call_SlideMotor_rpIOSetSlide_IOSetForward
#define Rte_Call_rpIOSetSlide_IOSetReverse 			Rte_Call_SlideMotor_rpIOSetSlide_IOSetReverse

void SlideMotor_Move(StepMotorStepType Step);

#endif
