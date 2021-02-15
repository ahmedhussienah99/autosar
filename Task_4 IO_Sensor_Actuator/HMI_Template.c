
#include "Rte_HMI.h"

void HMI_MainFunction (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState;
	MultiStateBtnType InclineBtnState;
	MultiStateBtnType SlideBtnState;
	uint8 Height;
	uint8 Incline;
	uint8 Slide;
    status = Rte_Write_ppSeatCtrlBtns_HeightBtnState(HeightBtnState);
	status = Rte_Write_ppSeatCtrlBtns_InclineBtnState(InclineBtnState);
	status = Rte_Write_ppSeatCtrlBtns_SlideBtnState(SlideBtnState);
    status = Rte_Read_rpSeatCtrlData_Height(&Height);
	status = Rte_Read_rpSeatCtrlData_Incline(&Incline);
	status = Rte_Read_rpSeatCtrlData_Slide(&Slide);

}

