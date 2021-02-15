
#ifndef RTE_HEIGHTSENSOR_H
#define RTE_HEIGHTSENSOR_H

#include "Rte_HeightSensor_Type.h"

Std_ReturnType Rte_Call_HeightSensor_rpIOGetHeight_IOGet(IoPositionSensorReadingType* position);

#define Rte_Call_rpIOGetHeight_IOGet 				Rte_Call_HeightSensor_rpIOGetHeight_IOGet

void HeightSensor_GetPosition(SensorPositionType* Position);

#endif
