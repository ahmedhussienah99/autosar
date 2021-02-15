
#include "Rte_SeatManager.h"

void SeatManager_AutoHeight (void)
{
	Std_ReturnType status;
	StepMotorStepType Step;
	SensorPositionType Position;
	SensorWeightType Weight;
	status = Rte_Call_rpHeightMotor_Move(Step);
	status = Rte_Call_rpHeightSensor_GetPosition(&Position);
	status = Rte_Call_rpWeightSensor_GetWeight(&Weight);

}

void SeatManager_AutoIncline (void)
{
	Std_ReturnType status;
	StepMotorStepType Step;
	SensorPositionType Position;
	SensorWeightType Weight;
	status = Rte_Call_rpInclineMotor_Move(Step);
	status = Rte_Call_rpInclineSensor_GetPosition(&Position);
	status = Rte_Call_rpWeightSensor_GetWeight(&Weight);

}

void SeatManager_AutoSlide (void)
{
	Std_ReturnType status;
	StepMotorStepType Step;
	SensorPositionType Position;
	SensorWeightType Weight;
	status = Rte_Call_rpSlideMotor_Move(Step);
	status = Rte_Call_rpSlideSensor_GetPosition(&Position);
	status = Rte_Call_rpWeightSensor_GetWeight(&Weight);

}

void SeatManager_SetHeight (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState;
	StepMotorStepType Step;
    status = Rte_Read_rpSeatCtrlBtns_HeightBtnState(&HeightBtnState);
    status = Rte_Call_rpHeightMotor_Move(Step);

}

void SeatManager_SetIncline (void)
{
	Std_ReturnType status;
	MultiStateBtnType InclineBtnState;
	StepMotorStepType Step;
	status = Rte_Read_rpSeatCtrlBtns_InclineBtnState(&InclineBtnState);
    status = Rte_Call_rpInclineMotor_Move(Step);

}

void SeatManager_SetSlide (void)
{
	Std_ReturnType status;
	MultiStateBtnType SlideBtnState;
	StepMotorStepType Step;
	status = Rte_Read_rpSeatCtrlBtns_SlideBtnState(&SlideBtnState);
    status = Rte_Call_rpSlideMotor_Move(Step);

}

