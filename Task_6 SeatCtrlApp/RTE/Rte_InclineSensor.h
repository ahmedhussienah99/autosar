
#ifndef RTE_INCLINESENSOR_H
#define RTE_INCLINESENSOR_H

#include "Rte_InclineSensor_Type.h"

Std_ReturnType Rte_Call_InclineSensor_rpIOGetIncline_IOGet(IoPositionSensorReadingType* position);

#define Rte_Call_rpIOGetIncline_IOGet 				Rte_Call_InclineSensor_rpIOGetIncline_IOGet

void InclineSensor_GetPosition(SensorPositionType* Position);

#endif
