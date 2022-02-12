#include "Rte_SeatManger.h"

void SeatManger_SetHeight (void)
{
	Std_ReturnType status;
	MultiStateBtnType DE_HeightBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtn_DE_HeightBtnState(&DE_HeightBtnState);
	
}
void SeatManger_SetIncline (void)
{
	Std_ReturnType status;
	MultiStateBtnType DE_InclinceBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtn_DE_InclinceBtnState(&DE_InclinceBtnState);
	
}
void SeatManger_SetSlide (void)
{
	Std_ReturnType status;
	MultiStateBtnType DE_SlideBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtn_DE_SlideBtnState(&DE_SlideBtnState);
	
}
