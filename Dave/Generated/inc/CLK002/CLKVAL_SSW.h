/*******************************************************************************
**  DAVE App Name : CLK002       App Version: 1.0.8               
**  This file is generated by DAVE, User modification to this file will be    **
**  overwritten at the next code generation.                                  **
*******************************************************************************/





/******************************************************************************
 *
 * Copyright (C) 2013 Infineon Technologies AG. All rights reserved.
 *
 * Infineon Technologies AG (Infineon) is supplying this software for use with
 * Infineon's microcontrollers.
 * This file can be freely distributed within development tools that are
 * supporting such microcontrollers.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
********************************************************************************
**                                                                            **
**                                                                            **
** PLATFORM : Infineon XMC1xxx Series                                         **
**                                                                            **
** COMPILER : Compiler Independent                                            **
**                                                                            **
** AUTHOR   : App Developer                                                   **
**                                                                            **
** MAY BE CHANGED BY USER [Yes/No]: Yes                                       **
**                                                                            **
** MODIFICATION DATE : Oct 30, 2013                                           **
**                                                                            **
*******************************************************************************/

/*******************************************************************************
**                       Author(s) Identity                                   **
********************************************************************************
**                                                                            **
** Initials     Name                                                          **
** ---------------------------------------------------------------------------**
** Yogesh       App Developer                                                 **
*******************************************************************************/
/* Revision History
 *****************************************************************************
 *Date           Version   Remarks
 * 18 Jan 2013   v1.0.0    Initial Version
 * 04 Sep 2013   v1.0.4    Added support for XMC1201, XMC1202, XMC1301 devices
 *
 *
*/
/**
 * @file CLKVAL_SSW.h
 *
 * @brief  Header file for Clock App
 *
 */

#ifndef CLKVAL_SSW_H_
#define CLKVAL_SSW_H_

/* Support for C++ codebase */
#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
**                           Include Files                                    **
*******************************************************************************/

/*******************************************************************************
**                      Global Macro Definitions                              **
*******************************************************************************/

/**
 * @ingroup CLK002_publicparam
 * @{
 */


/**
 * @}
 */

/*******************************************************************************
**                      Global Macro Definitions                              **
*******************************************************************************/
/*System Software Data, used during Startup*/

#define   CLK002_SSW_PCLKSEL            (0)
#define   CLK002_SSW_IDIV               (4)      
#define   CLK002_SSW_FDIV               (0)    
#define   CLK002_SSW_RTCCLKSEL          (0)

#define   CLKVAL1_SSW        ((CLK002_SSW_PCLKSEL<<SCU_CLK_CLKCR_PCLKSEL_Pos)&\
                             SCU_CLK_CLKCR_PCLKSEL_Msk)|\
                             ((CLK002_SSW_IDIV<<SCU_CLK_CLKCR_IDIV_Pos)&\
                             SCU_CLK_CLKCR_IDIV_Msk)|\
                             ((CLK002_SSW_FDIV<<SCU_CLK_CLKCR_FDIV_Pos)&\
                             SCU_CLK_CLKCR_FDIV_Msk)|\
                             ((CLK002_SSW_RTCCLKSEL<<\
                             SCU_CLK_CLKCR_RTCCLKSEL_Pos)&\
                             SCU_CLK_CLKCR_RTCCLKSEL_Msk)


#define    CLK002_CGAT_VADCSHS          (0)
#define    CLK002_CGAT_CCU8             (0)
#define    CLK002_CGAT_CCU4             (0)
#define    CLK002_CGAT_USIC             (0)
#define    CLK002_CGAT_BCCU             (0)
#define    CLK002_CGAT_LEDTS0           (0)
#define    CLK002_CGAT_LEDTS1           (0)
#define    CLK002_CGAT_POSIF            (0)
#define    CLK002_CGAT_MATH             (0)
#define    CLK002_CGAT_WDT              (0)
#define    CLK002_CGAT_RTC              (0)

#define    CLKVAL2_SSW     (CLK002_CGAT_VADCSHS<<SCU_CLK_CGATCLR0_VADC_Pos) |\
                           (CLK002_CGAT_CCU4<<SCU_CLK_CGATCLR0_CCU40_Pos)|\
                           (CLK002_CGAT_USIC<<SCU_CLK_CGATCLR0_USIC0_Pos)|\
                           (CLK002_CGAT_WDT<<SCU_CLK_CGATCLR0_WDT_Pos)|\
                           (CLK002_CGAT_RTC<<SCU_CLK_CGATCLR0_RTC_Pos)



    
        


/*******************************************************************************
**                      Global Type Definitions                               **
*******************************************************************************/
/*******************************************************************************
** FUNCTION PROTOTYPES                                                        **
*******************************************************************************/
/* Support for C++ codebase */
#ifdef __cplusplus
}
#endif   

#endif /* CLKVAL_SSW_H_ */

/*CODE_BLOCK_END*/


