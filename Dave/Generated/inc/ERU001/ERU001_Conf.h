/*******************************************************************************
**  DAVE App Name : ERU001       App Version: 1.0.14               
**  This file is generated by DAVE, User modification to this file will be    **
**  overwritten at the next code generation.                                  **
*******************************************************************************/


/*CODE_BLOCK_BEGIN[ERU001_Confh.h]*/

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
** PLATFORM : Infineon XMC4000/XMC1000 Series                                 **
**                                                                            **
** COMPILER : Compiler Independent                                            **
**                                                                            **
** AUTHOR   : App Developer                                                   **
**                                                                            **
** NOTE     : Any Changes made to this file will be overwritten during Code   **
**            Generation                                                      **
**                                                                            **
********************************************************************************
** VERSION HISTORY:
********************************************************************************
** v1.0.4,  25 Jan 2013,  BRG: Initial version.
** v1.0.10, 30 Sep 2013,  BRG: Code has been updated in complaint to coding. 
**                             guidelines.
*******************************************************************************/

/**
 * @file   ERU001_Conf.h
 *
 * @brief  This file contains global macro definitions and extern declarations
 *  of ERU001.
 */
#ifndef _CONF_ERU001_H_
#define _CONF_ERU001_H_

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
** INCLUDE FILES:
*******************************************************************************/

/*******************************************************************************
** PRIVATE MACRO DEFINITIONS:
*******************************************************************************/  
/*****************************************************************************
			DUMMY DEFINTIONS OF DEBUG LOG MACROS
*****************************************************************************/
/*These definitions are included here to avoid compilation errors,
since the DBG002 app is not part of the project. All the macros are defined
as empty*/ 
#ifndef _DBG002_H_

#define DBG002_RegisterCallBack(A,B,C)
#define DBG002_I(e) 
#define DBG002_IG(e,g) 
#define DBG002_IH(e,h) 
#define DBG002_IP(e,p) 
#define DBG002_IGH(e,g,h) 
#define DBG002_IGP(e,g,p) 
#define DBG002_IHP(e,h,p) 
#define DBG002_IGHP(e,g,h,p) 
#define DBG002_N(e) 
#define DBG002_NG(e,g) 
#define DBG002_NH(e,h) 
#define DBG002_NP(e,p) 
#define DBG002_NGH(e,g,h) 
#define DBG002_NGP(e,g,p) 
#define DBG002_NHP(e,h,p) 
#define DBG002_NGHP(e,g,h,p) 
#define DBG002_ID(e) 
#define DBG002_IS(e) 
#define DBG002_ISG(e,g) 
#define DBG002_SAFETY_CRITICAL(groupid,messageid,length,value)
#define DBG002_CRITICAL(groupid,messageid,length,value)
#define DBG002_ERROR(groupid,messageid,length,value)
#define DBG002_WARNING(groupid,messageid,length,value)
#define DBG002_INFO(groupid,messageid,length,value)
#define DBG002_TRACE(groupid,messageid,length,value)
#define DBG002_FUNCTION_ENTRY(GID, Status) 
#define DBG002_FUNCTION_EXIT(GID, Status) 

#endif/* End of definitions of dummy Debug Log macros*/                  	
  
/*******************************************************************************
** PRIVATE TYPE DEFINITIONS:
*******************************************************************************/

/*******************************************************************************
** PRIVATE FUNCTION DECLARATIONS:
*******************************************************************************/

/*******************************************************************************
** PRIVATE CONSTANT DEFINITIONS:
*******************************************************************************/

/*******************************************************************************
** GLOBAL MACRO DEFINITIONS: 										
*******************************************************************************/
/**
 * @ingroup ERU001_constants
 * @{
 */

/**
 * Base Address of mapped ERU Module for App Instance 0
 */
#define ERU001_0_ERU	  ERU0
/**
 *  Mapped ERS + ETL instance  for App Instance 0
 */
#define ERU001_0_ERS_ETL_X   (2U)

/**
 * Base Address of mapped ERU Module for App Instance 0
 */
#define ERU001_2_ERU	  ERU0
/**
 *  Mapped ERS + ETL instance  for App Instance 0
 */
#define ERU001_2_ERS_ETL_X   (3U)

/**
 *  ERU001 number of channel (App) Instances
 */
#define ERU001_NUM_INSTANCES (2U)

/**
 * @}
 */
	
	
/*******************************************************************************
** ENUMERATIONS:
*******************************************************************************/	
	
	
/*******************************************************************************
** GLOBAL TYPE DEFINITIONS:                     
*******************************************************************************/

/*******************************************************************************
**  External Variables    
*******************************************************************************/


#ifdef __cplusplus
}
#endif

#endif  /* _CONF_ERU001_H_ */
/*CODE_BLOCK_END*/
