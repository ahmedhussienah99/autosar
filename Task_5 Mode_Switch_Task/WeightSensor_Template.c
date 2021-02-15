
#include "Rte_WeightSensor.h"

void WeightSensor_GetWeight (SensorWeightType* Weight)
{
	Std_ReturnType status;
	IoWeightSensorReadingType weight;
	status = Rte_Call_rpIOGetWeight_IOGet(&weight);

}

