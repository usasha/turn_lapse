/*******************************************************************************
**  DAVE App Name : NVIC002       App Version: 1.0.26               
**  This file is generated by DAVE, User modification to this file will be    **
**  overwritten at the next code generation.                                  **
*******************************************************************************/


/*CODE_BLOCK_BEGIN[NVIC002_Conf.c]*/
/*******************************************************************************
 Copyright (c) 2013, Infineon Technologies AG                                 **
 All rights reserved.                                                         **
                                                                              **
 Redistribution and use in source and binary forms, with or without           **
 modification,are permitted provided that the following conditions are met:   **
                                                                              **
 *Redistributions of source code must retain the above copyright notice,      **
 this list of conditions and the following disclaimer.                        **
 *Redistributions in binary form must reproduce the above copyright notice,   **
 this list of conditions and the following disclaimer in the documentation    **
 and/or other materials provided with the distribution.                       **
 *Neither the name of the copyright holders nor the names of its contributors **
 may be used to endorse or promote products derived from this software without** 
 specific prior written permission.                                           **
                                                                              **
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"  **
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE    **
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE   **
 ARE  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE   **
 LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR         **
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF         **
 SUBSTITUTE GOODS OR  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS    **
 INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN      **
 CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)       **
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE   **
 POSSIBILITY OF SUCH DAMAGE.                                                  **
                                                                              **
 To improve the quality of the software, users are encouraged to share        **
 modifications, enhancements or bug fixes with Infineon Technologies AG       **
 dave@infineon.com).                                                          **
                                                                              **
********************************************************************************
**                                                                            **
**                                                                            **
** PLATFORM : Infineon XMC4000/XMC1000 Series   		            	      **
**                                                                            **
** COMPILER : Compiler Independent                                            **
**                                                                            **
** AUTHOR   : App Developer                                                   **
**                                                                            **
** MAY BE CHANGED BY USER [yes/no]: Yes                                       **
**                                                                            **
** MODIFICATION DATE : October 18, 2013                                       **
*******************************************************************************/
/*******************************************************************************
**                       Author(s) Identity                                   **
********************************************************************************
**                                                                            **
** Initials     Name                                                          **
** ---------------------------------------------------------------------------**
** SNR          App Developer                                                 **
*******************************************************************************/
/**
 * @file   NVIC002_Conf.c
 *
 * @App    Version NVIC002 <1.0.26>
 * 
 * @brief  Configuration file generated based on UI settings 
 *         of NVIC002 App
 *
 */
/* Revision History	
 * 18 Feb 2013 	 v1.0.12   Conditional Codes are added to support both 
 * 	                       XMC4000/XMC1000 devices.
 * 18 Oct 2013   v1.0.20   Updated as per coding guidelines	                       
 */

/*******************************************************************************
 ** INCLUDE FILES                                                             **
 ******************************************************************************/
#include "../../inc/NVIC002/NVIC002.h"
/**
 * @ingroup NVIC002_publicparam
 * @{
 */

   
const NVIC002_HandleType NVIC002_Handle0 = {
   /* Mapped NVIC Node */
  .NodeID      = 6 , 
  /* Node Interrupt Priority */
  .Priority    = 3,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node6 */
  .InterruptEnable = 1
};
   
const NVIC002_HandleType NVIC002_Handle2 = {
   /* Mapped NVIC Node */
  .NodeID      = 5 , 
  /* Node Interrupt Priority */
  .Priority    = 3,  
  /* Node Interrupt SubPriority */
  .SubPriority = 0,
  /* Interrupt enable for Node5 */
  .InterruptEnable = 1
}; 
const NVIC002_HandleType * NVIC002_HandleArray[NVIC002_NUM_INSTANCES] =
{
   &NVIC002_Handle0, 
   &NVIC002_Handle2 

};
/**
 * @}
 */

/*CODE_BLOCK_END*/

