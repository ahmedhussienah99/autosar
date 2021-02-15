
#ifndef RTE_WEIGHTSENSOR_H
#define RTE_WEIGHTSENSOR_H

#include "Rte_WeightSensor_Type.h"

Std_ReturnType Rte_Call_WeightSensor_rpIOGetWeight_IOGet(IoWeightSensorReadingType* weight);

#define Rte_Call_rpIOGetWeight_IOGet 				Rte_Call_WeightSensor_rpIOGetWeight_IOGet

void WeightSensor_GetWeight(SensorWeightType* Weight);

#endif
