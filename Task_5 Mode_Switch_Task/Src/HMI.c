
#include "Rte_HMI.h"
#define MULTI_STATE_BTN_INIT
#define MULTI_STATE_BTN_MINUS
#define MULTI_STATE_BTN_PLUS

static MultiStateBtnType HMI_updateBtnState(uint8 BtnData)
{
	MultiStateBtnType BtnState;
	if(BtnData==0)
	{
		BtnState = MULTI_STATE_BTN_INIT;
	}
	else if (BtnData==1)
	{
		BtnState = MULTI_STATE_BTN_MINUS;
	}
	else if(BtnData==2)
	{
		BtnState = MULTI_STATE_BTN_PLUS;
	}
	else
	{
		BtnState = MULTI_STATE_BTN_INIT;
	}

	return BtnState;
}

void HMI_MainFunction (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState;
	MultiStateBtnType InclineBtnState;
	MultiStateBtnType SlideBtnState;
	uint8 Height;
	uint8 Incline;
	uint8 Slide;
	boolean isUpdated;

	status = Rte_Read_rpSeatCtrlData_Height(&Height);
	isUpdated = Rte_isUpdated_rpSeatCtrlData_Height();
	if(status == RTE_E_OK && isUpdated == TRUE)
	{
		HeightBtnState = HMI_updateBtnState(Height);
		(void)Rte_Write_ppSeatCtrlBtns_HeightBtnState(HeightBtnState);
	}
	else
	{
		Height = 0;
		HeightBtnState = HMI_updateBtnState(Height);
		(void)Rte_Write_ppSeatCtrlBtns_HeightBtnState(HeightBtnState);
	}

	status = Rte_Read_rpSeatCtrlData_Slide(&Slide);
	isUpdated = Rte_isUpdated_rpSeatCtrlData_Slide();
	if(status == RTE_E_OK && isUpdated == TRUE)
	{
		SlideBtnState = HMI_updateBtnState(Slide);
		(void)Rte_Write_ppSeatCtrlBtns_SlideBtnState(SlideBtnState);
	}
	else
	{
		Slide = 0;
		SlideBtnState = HMI_updateBtnState(Slide);
		(void)Rte_Write_ppSeatCtrlBtns_SlideBtnState(SlideBtnState);
	}

	status = Rte_Read_rpSeatCtrlData_Incline(&Incline);
	isUpdated = Rte_isUpdated_rpSeatCtrlData_Incline();
	if(status == RTE_E_OK && isUpdated == TRUE)
	{
		InclinceBtnState = HMI_updateBtnState(Incline);
		(void)Rte_Write_ppSeatCtrlBtns_InclineBtnState(InclineBtnState);
	}
	else
	{
		Incline = 0;
		InclinceBtnState = HMI_updateBtnState(Incline);
		(void)Rte_Write_ppSeatCtrlBtns_InclineBtnState(InclineBtnState);
	}
}


void HMI_SeatModeChanged (void)
{
	Std_ReturnType status;
	SeatModeBtnType SeatModeBtn;
	uint8 SeatCtrlMode = RTE_MODE_SeatCtrlMode_INIT;

	(void)Rte_Read_rpSeatModeBtn_SeatModeBtn(&SeatModeBtn);


	if(SeatModeBtn == SEAT_MODE_BTN_MANUAL)
	{
		SeatCtrlMode = MANUAL;
	}
	else if(SeatModeBtn == SEAT_MODE_BTN_AUTO)
	{
		SeatCtrlMode = AUTO;
	}
	else
	{
	}
	(void)Rte_Switch_ppSeatCtrlMode_SeatCtrlMode(SeatCtrlMode);

}

