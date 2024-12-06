/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2015 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Fee_Cfg.h
 *    Component:  If_AsrIfFeeTiSub
 *       Module:  Fee - Submodule Cfg (configuration)
 *    Generator:  -
 *
 *  Description:  Configuration Header File.
 *                Contains Public configuration data, affecting API, and which may be accessed by applications
 *  -------------------------------------------------------------------------------------------------------------------
 *  GENERATION INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *     Project:    EPS.ecuc
 *   Generated:  2016-03-24 01:27 pm
 *    Licensee:   Hardware Dongle (2988533) 
 
    This file is generated by DaVinci Configurator Pro - DAVINCICFG.EXE V4.2.2.6.
    Do not modify this file, otherwise the software may behave in unexpected way.
 *********************************************************************************************************************/

/* Do not modify the following parts. */
/* Modification is only allowed in the described parts */

/**********************************************************************************************************************
 * API CFG DEFINES
 *********************************************************************************************************************/

#ifndef FEE_CFG_H
#define FEE_CFG_H

/**********************************************************************************************************************
 * API RELEVANT (PUBLIC) SECTION OF CONFIGURATION
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * VERSION IDENTIFICATION
 *********************************************************************************************************************/
#define FEE_CFG_MAJOR_VERSION    (2U)
#define FEE_CFG_MINOR_VERSION    (4U)
#define FEE_CFG_PATCH_VERSION    (0U)

/**********************************************************************************************************************
 * API CFG MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * FEE API TYPE INCLUDES
 *********************************************************************************************************************/
#include "MemIf_Types.h"

/**********************************************************************************************************************
 * CFG COMMON PARAMETER
 *********************************************************************************************************************/

/* --------------------  DEVELOPMENT / PRODUCTION MODE -------------------- */
/* switch between Debug- or Production-Mode */
#define FEE_DEV_ERROR_DETECT (STD_OFF)


/*-----------------2010-05-05 15:53-----------------
 * Number of Bytes used for Block Header
 * --------------------------------------------------*/
#define FEE_BLOCK_OVERHEAD  (24U)

/*-----------------2010-05-05 15:54-----------------
 * Maximum allowed blocking time for any Fee call
 * --------------------------------------------------*/
#define FEE_MAXIMUM_BLOCKING_TIME  (600.0)

/*-----------------2010-05-05 15:53-----------------
 * Page Overhead in bytes
 * --------------------------------------------------*/
#define FEE_PAGE_OVERHEAD  (0U)

/*-----------------2010-05-05 15:54-----------------
 * Number of bytes used for virtual sector header
 * --------------------------------------------------*/
#define FEE_VIRTUAL_SECTOR_OVERHEAD  (16U)

#define FEE_INDEX   (0U)
#define FEE_VIRTUAL_PAGE_SIZE   (8U)
#define FEE_NUMBER_OF_EEPS	(2U)


/*-----------------2010-05-06 08:49-----------------
 * Callback functions to notify job end/error
 * --------------------------------------------------*/
#define FEE_NVM_JOB_END_NOTIFICATION   NvM_JobEndNotification
#define FEE_NVM_JOB_ERROR_NOTIFICATION NvM_JobErrorNotification



/*-----------------2010-05-06 09:13-----------------
 * Device operating frequency in MHz.
 * --------------------------------------------------*/
#define FEE_OPERATING_FREQUENCY (160)

#define FEE_POLLING_MODE    (STD_ON)
#define FEE_FLASH_CRC_ENABLE	(STD_OFF)
#define FEE_FLASH_WRITECOUNTER_SAVE	(STD_OFF)
#define FEE_CHECK_BANK7_ACCESS	(STD_OFF)

#define FEE_VERSION_INFO_API   (STD_OFF)

#define FEE_FLASH_ERROR_CORRECTION_ENABLE   (STD_OFF)
#define FEE_FLASH_ERROR_CORRECTION_HANDLING Fee_None

/*-----------------2010-05-06 10:11-----------------
 * Block configuration
 * --------------------------------------------------*/
#define FEE_NUMBER_OF_BLOCKS    (110U)
#define FEE_NUMBER_OF_UNCONFIGUREDBLOCKSTOCOPY	(20U)

/*-----------------2010-05-06 10:11-----------------
 * Sector configuration
 * --------------------------------------------------*/
#define FEE_NUMBER_OF_VIRTUAL_SECTORS   (4u)
#define FEE_NUMBER_OF_VIRTUAL_SECTORS_EEP1   (2u)


#define FEE_NUMBER_OF_EIGHTBYTEWRITES	(128U)
#define FEE_TOTAL_BLOCKS_DATASETS       (111U)

/*-----------------2015-01-12 17:56-----------------
 * Device and Virtual sector structures
 * --------------------------------------------------*/
#define FEE_GENERATE_DEVICEANDVIRTUALSECTORSTRUC   (STD_ON)

#define FEE_VIRTUALSECTOR_SIZE	  (16U)
#define FEE_PHYSICALSECTOR_SIZE   (4U)

#endif /* FEE_CFG_H */
/*---- End of File ---------------------------------------------------------*/
