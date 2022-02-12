#include "Rte_HMI.h"
void HMI_MainFunction (void)
{
	Std_ReturnType status;
	MultiStateBtnType DE_HeightBtnState;
	MultiStateBtnType DE_InclinceBtnState;
	MultiStateBtnType DE_SlideBtnState;
	uint8 DE_Height;
	uint8 DE_Incline;
	uint8 DE_Slide;

	/* Data Send Points */
	status = Rte_Write_ppSeatCtrlBtn_DE_HeightBtnState(DE_HeightBtnState);
	status = Rte_Write_ppSeatCtrlBtn_DE_InclinceBtnState(DE_InclinceBtnState);
	status = Rte_Write_ppSeatCtrlBtn_DE_SlideBtnState(DE_SlideBtnState);
	
	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlData_DE_Height(&DE_Height);
	status = Rte_Read_rpSeatCtrlData_DE_Incline(&DE_Incline);
	status = Rte_Read_rpSeatCtrlData_DE_Slide(&DE_Slide);
	
}
