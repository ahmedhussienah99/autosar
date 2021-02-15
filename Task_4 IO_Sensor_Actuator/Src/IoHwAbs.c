#include "Rte_IoHwAbs.h"
#include "Adc.h"
#include "Spi.h"
#include "Dio.h"

static Adc_ValueGroupType IoHwAbs_PositionSensorsReadings[ADC_GR0_NUM_CHANNELS] =
{	0,	0, 0
}

void IoHwAbs_ECUGet_Height (IoPositionSensorReadingType* position)
{
	Std_ReturnType status;

	status = Adc_ReadGroup(AdcConf_AdcGroup_PositionSensorsGrp, IoHwAbs_PositionSensorsReadings);

	if(status == E_OK)
	{
		position = (IoPositionSensorReadingType) IoHwAbs_PositionSensorsReadings[0];
	}
	else
	{
		/* should be updated to return failure Error */
	}
}

void IoHwAbs_ECUGet_Incline (IoPositionSensorReadingType* position)
{
	Std_ReturnType status;

	status = Adc_ReadGroup(AdcConf_AdcGroup_PositionSensorsGrp, IoHwAbs_PositionSensorsReadings);

	if(status == E_OK)
	{
		position = (IoPositionSensorReadingType) IoHwAbs_PositionSensorsReadings[2];
	}
	else
	{
		/* should be updated to return failure Error */
	}
}


void IoHwAbs_ECUGet_Slide (IoPositionSensorReadingType* position)
{
	Std_ReturnType status;

	status = Adc_ReadGroup(AdcConf_AdcGroup_PositionSensorsGrp, IoHwAbs_PositionSensorsReadings);

	if(status == E_OK)
	{
		position = (IoPositionSensorReadingType) IoHwAbs_PositionSensorsReadings[1];
	}
	else
	{
		/* should be updated to return failure Error */
	}
}

void IoHwAbs_ECUGet_Weight (IoWeightSensorReadingType* weight)
{
	Std_ReturnType status;
	Spi_DataType SpiData ;

	status = Spi_ReadIB(SpiConf_SpiChannel_WeightSensor, &SpiData);

	if(status == E_OK)
	{
		weight =  (IoWeightSensorReadingType) SpiData;
	}
	else
	{
		/* should be updated to return failure Error */
	}
}


void IoHwAbs_ECUSetForward_Height (void)
{
	Std_ReturnType status;
	Dio_WriteChannel(DioConfg_DioChannel_HeightMotorCh, STD_HIGH)
}


void IoHwAbs_ECUSetForward_Incline (void)
{
	Std_ReturnType status;
	Dio_WriteChannel(DioConfg_DioChannel_InclineMotorCh, STD_HIGH)
}

void IoHwAbs_ECUSetForward_Slide (void)
{
	Std_ReturnType status;
	Dio_WriteChannel(DioConfg_DioChannel_SlideMotorCh, STD_HIGH)
}

void IoHwAbs_ECUSetReverse_Height (void)
{
	Std_ReturnType status;
	Dio_WriteChannel(DioConfg_DioChannel_HeightMotorCh, STD_LOW)
}


void IoHwAbs_ECUSetReverse_Incline (void)
{
	Std_ReturnType status;
	Dio_WriteChannel(DioConfg_DioChannel_InclineMotorCh, STD_LOW)
}

void IoHwAbs_ECUSetReverse_Slide (void)
{
	Std_ReturnType status;
	Dio_WriteChannel(DioConfg_DioChannel_SlideMotorCh, STD_LOW)
}

