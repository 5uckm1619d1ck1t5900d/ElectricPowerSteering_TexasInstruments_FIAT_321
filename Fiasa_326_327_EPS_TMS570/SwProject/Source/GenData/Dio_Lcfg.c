/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2011 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Dio.h
 *    Component:  DrvDio_Tms570Tigio01Asr
 *       Module:  Dio
 *    Generator:  -
 *
 *  Description:  This is the header file of MICROSAR CAL module Dio. This DIO Driver provides services for 
 *                reading and writing to/from
 *                        -   DIO Channels (Pins)
 *                        -   DIO Ports
 *                        -   DIO Channel Groups
 * 
 *                This module works on pins and ports which are configured by the PORT driver for this purpose. 
 *                For this reason there is no configuration and initialization of this port structure in the DIO 
 *                Driver.
 *  
 *********************************************************************************************************************/

/**********************************************************************************************************************
 Project:    EPS.ecuc
 Generated:  2014-01-14 11:03 am
 Licensee:   Nexteer Automotive Corporation (2502600608)
 
    This file is generated by DaVinci Configurator Pro - DAVINCICFG.EXE V4.0.67.0.
    Do not modify this file, otherwise the software may behave in unexpected way.
 *********************************************************************************************************************/

#define DIO_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Dio.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
#if (  (DIO_CFG_MAJOR_VERSION != (2u)) \
    || (DIO_CFG_MINOR_VERSION != (1u)) )
  #error "Version numbers of Dio_Lcfg.c and Dio_Cfg.h are inconsistent!"
#endif

/**********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/
#define DIO_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/*<DIO_CFG_GROUP_LIST>*/
CONST(Dio_ChannelGroupType, DIO_CONST) DioChGrpNHet = { 0x00002E14, 0x00000001, 0 };
CONST(Dio_ChannelGroupType, DIO_CONST) DioChannelGroupAdc1 = { 0x01043040, 0x00000001, 0 };
CONST(Dio_ChannelGroupType, DIO_CONST) DioChannelGroupSpi3 = { 0x02003E07, 0x00000001, 0 };
CONST(Dio_ChannelGroupType, DIO_CONST) DioChannelGroupCan3Rx = { 0x03013879, 0x00000001, 0 };
CONST(Dio_ChannelGroupType, DIO_CONST) DioChannelGroupCan3Tx = { 0x04013878, 0x00000001, 0 };
CONST(Dio_ChannelGroupType, DIO_CONST) DioChannelGroupEsm = { 0x05023D49, 0x00000001, 0 };
/*</DIO_CFG_GROUP_LIST>*/


#if (DIO_CFG_CHK_PARAM_CHANNEL == STD_ON)
/*<DIO_CFG_CHL_TABLE>*/
/* table containing all configured channels for checking */
CONST(Dio_ChannelType, DIO_CONST) Dio_ChannelCheckTable[] =
{
     0x00200000u
    ,0x01400000u
    ,0x02780000u
    ,0x03A00000u
    ,0x04B00000u
    ,0x05C00000u
    ,0x06D00000u
    ,0x07040001u
    ,0x08080002u
    ,0x09010003u
    ,0x0A010004u
    ,0x0B000005u
};
/*</DIO_CFG_CHL_TABLE>*/
#endif

#if (DIO_CFG_CHK_PARAM_PORT == STD_ON) || (DIO_CFG_CHK_PARAM_GROUP == STD_ON)
/*<DIO_CFG_PORT_TABLE>*/
/* table containing all configured ports for checking */
CONST(Dio_PortType, DIO_CONST) Dio_PortCheckTable[] =
{
     0x00002E14u
    ,0x01043040u
    ,0x02003E07u
    ,0x03013879u
    ,0x04013878u
    ,0x05023D49u
};
/*</DIO_CFG_PORT_TABLE>*/
#endif

/*<DIO_PORT_ADDR_TABLE>*/
/* table containing all port basis addresses and assignd memory areas for checking */
CONST(uint32, DIO_CONST) Dio_PortAddrTable[] =
{
     0x0000B850u
    ,0x0100C100u
    ,0x0200F81Cu
    ,0x0300E1E4u
    ,0x0400E1E0u
    ,0x0508F524u
};
/*</DIO_PORT_ADDR_TABLE>*/

/*<DIO_MEM_AREA_ASSIGNMENT>*/
/* table containing memory area defines from satety os */
CONST(uint16, DIO_CONST) Dio_PortMemoryAreas[] =
{
     OS_MEM_AREA_NHET1
    ,OS_MEM_AREA_ADC1
    ,OS_MEM_AREA_SPI3
    ,OS_MEM_AREA_CAN3
    ,OS_MEM_AREA_CAN3
    ,OS_MEM_AREA_ESMEPSR
};
/*</DIO_MEM_AREA_ASSIGNMENT>*/


#define DIO_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 *//* MD_MSR_19.1 */


/**********************************************************************************************************************
 *  END OF FILE: DIO_LCFG.C
 *********************************************************************************************************************/
