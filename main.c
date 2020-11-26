/*
 * main.c
 *
 *  Created on: Dec 25, 2019
 *  Author: Ahemd_Elbadwi
 *  Project : Control 4WD Car to avoid obstacles by controlling DC Motors and Ultrasonic module
 *  with applying Static Design Techniques.
 */

/************************************************************************/
/*					       	INCLUDES                                    */
/************************************************************************/
#include "Car_Sm.h"

/***********************************************************************/
/*                        Main Application                             */
/***********************************************************************/

int main(void)
{
	/*******Initialize State machines******/
	Car_SM_Init();

	/***********************************************************************/
	/*                        Super Loop                                   */
	/***********************************************************************/
	while(1)
	{
		Car_SM_Update();
	}
	return 0;
}
