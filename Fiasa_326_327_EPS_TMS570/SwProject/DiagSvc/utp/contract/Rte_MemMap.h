/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2011 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_MemMap.h
 *     Workspace:  C:/Users/mzjphh/Desktop/Fiasa_326_327_05.01.00/Fiasa_326_327_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *     SW-C Type:  Ap_DiagSvc
 *  Generated at:  Mon Mar  6 13:53:50 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  RTE Memory Mapping header file
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * RTE specific defines
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_CODE
 *********************************************************************************************************************/

/* open sections */
#ifdef RTE_START_SEC_CODE
# undef RTE_START_SEC_CODE
# define START_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_CONST_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_CONST_UNSPECIFIED
# undef RTE_START_SEC_CONST_UNSPECIFIED
# define START_SEC_CONST_UNSPECIFIED
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* close sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_CODE
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_CODE
# undef RTE_STOP_SEC_CODE
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_CONST_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_CONST_UNSPECIFIED
# undef RTE_STOP_SEC_CONST_UNSPECIFIED
# define STOP_SEC_CONST
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * SW-C specific defines
 *********************************************************************************************************************/

/* open sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_AP_DIAGSVC_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_AP_DIAGSVC_APPL_CODE
# undef RTE_START_SEC_AP_DIAGSVC_APPL_CODE
# define START_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* close sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_AP_DIAGSVC_APPL_CODE
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_AP_DIAGSVC_APPL_CODE
# undef RTE_STOP_SEC_AP_DIAGSVC_APPL_CODE
# define STOP_SEC_CODE
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Per-Instance Memory specific defines
 *********************************************************************************************************************/

/* open sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!         << Start of memory mapping implementation >>         DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_START_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_START_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
# undef RTE_START_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
# define START_SEC_VAR_NOINIT_UNSPECIFIED
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/* close sections */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!        << Start of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 * Symbol: RTE_STOP_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
 *********************************************************************************************************************/

#ifdef RTE_STOP_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
# undef RTE_STOP_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
# define STOP_SEC_VAR
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!          << End of memory mapping implementation >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
# ifdef RTE_MAGIC_NUMBER
#  if RTE_MAGIC_NUMBER != 1488824210
#   error "The magic number of the generated file <C:/Users/mzjphh/Desktop/Fiasa_326_327_05.01.00/Fiasa_326_327_EPS_TMS570/SwProject/DiagSvc/utp/contract/Ap_DiagSvc/Rte_MemMap.h> is different. Please check time and date of the generated RTE files!"
#  endif
# else
#  define RTE_MAGIC_NUMBER 1488824210
# endif  /* RTE_MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */
