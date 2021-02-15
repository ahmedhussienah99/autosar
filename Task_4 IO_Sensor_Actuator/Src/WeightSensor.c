

#include "Rte_WeightSensor.h"




void WeightSensor_GetWeight (SensorWeightType* Weight)
{
	Std_ReturnType status;
	IoWeightSensorReadingType weight;

	(void)Rte_Call_rpIOGetWeight_IOGet(&weight);

	Weight = (SensorWeightType) (weight/1000);
}

