
#include "Rte_InclineSensor.h"

void InclineSensor_GetPosition (SensorPositionType* Position)
{
	Std_ReturnType status;
	IoPositionSensorReadingType position;
	status = Rte_Call_rpIOGetIncline_IOGet(&position);

}

