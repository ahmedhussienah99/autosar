

#include "Rte_HeightSensor.h"

void HeightSensor_GetPosition (SensorPositionType* Position)
{
	Std_ReturnType status;
	IoPositionSensorReadingType position;

	(void)Rte_Call_rpIOGetHeight_IOGet(&position);

	if(position == 0)
	{
		Position = SENSOR_POSITION_STEP_0;
	}
	else if (position > 0 && position <= 64)
	{
		Position = SENSOR_POSITION_STEP_1;
	}
	else if (position > 64 && position <= 192)
	{
		Position = SENSOR_POSITION_STEP_2;
	}
	else if (position > 192 && position <= 255)
	{
		Position = SENSOR_POSITION_STEP_3;
	}
	else
	{
		/* Do No thing */
	}
}

