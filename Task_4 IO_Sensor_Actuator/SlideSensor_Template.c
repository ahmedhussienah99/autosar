

#include "Rte_SlideSensor.h"


void SlideSensor_GetPosition (SensorPositionType* Position)
{
	Std_ReturnType status;
	IoPositionSensorReadingType position;

	status = Rte_Call_rpIOGetSlide_IOGet(&position);

}

