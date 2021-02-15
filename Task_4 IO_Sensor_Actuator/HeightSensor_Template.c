
#include "Rte_HeightSensor.h"

void HeightSensor_GetPosition (SensorPositionType* Position)
{
	Std_ReturnType status;
	IoPositionSensorReadingType position;
	status = Rte_Call_rpIOGetHeight_IOGet(&position);

}

