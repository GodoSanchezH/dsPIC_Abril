/**
 * EXT_INT Generated Driver Header File
 * 
 * @file      ext_int.h
 *            
 * @ingroup   ext_interruptdriver
 *            
 * @brief     This is the generated driver header file for the EXT_INT driver
 *            
 * @version   Driver Version 2.1.0
 *            
 * @skipline  Device : dsPIC33CK64MC105
*/

/*
© [2023] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef EXT_INT_H
#define    EXT_INT_H

#include <xc.h>
#include "ext_int_types.h"
#include "ext_int_interface.h"

/**
 * @ingroup  ext_interruptdriver
 * @brief    Structure object of type EXT_INTERRUPT_INTERFACE with the custom name
 *           given by the user in the Melody Driver User interface. The default name 
 *           e.g. External_Interrupt can be changed by the user in the EXT_INTERRUPT user interface. 
 *           This allows defining a structure with application specific name using 
 *           the 'Custom Name' field. Application specific name allows the API Portability.
*/
extern const struct EXT_INTERRUPT_INTERFACE External_Interrupt;

/**
 * @ingroup  ext_interruptdriver
 * @brief    This macro defines the Custom Name for \ref EXT_INT_Initialize API
 */
#define External_Interrupt_Initialize EXT_INT_Initialize
/**
 * @ingroup  ext_interruptdriver
 * @brief    This macro defines the Custom Name for \ref EXT_INT_Deinitialize API
 */
#define External_Interrupt_Deinitialize EXT_INT_Deinitialize
/**
 * @ingroup  ext_interruptdriver
 * @brief    This macro defines the Custom Name for \ref EXT_INT_PositiveEdgeSet API
 */
#define External_Interrupt_PositiveEdgeSet EXT_INT_PositiveEdgeSet
/**
 * @ingroup  ext_interruptdriver
 * @brief    This macro defines the Custom Name for \ref EXT_INT_NegativeEdgeSet API
 */
#define External_Interrupt_NegativeEdgeSet EXT_INT_NegativeEdgeSet
/**
 * @ingroup  ext_interruptdriver
 * @brief    This macro defines the Custom Name for \ref EXT_INT_InterruptEnable API
 */
#define External_Interrupt_InterruptEnable EXT_INT_InterruptEnable
/**
 * @ingroup  ext_interruptdriver
 * @brief    This macro defines the Custom Name for \ref EXT_INT_InterruptDisable API
 */
#define External_Interrupt_InterruptDisable EXT_INT_InterruptDisable
/**
 * @ingroup  ext_interruptdriver
 * @brief    This macro defines the Custom Name for \ref EXT_INT_InterruptFlagClear API
 */
#define External_Interrupt_InterruptFlagClear EXT_INT_InterruptFlagClear
/**
 * @ingroup  ext_interruptdriver
 * @brief    This macro defines the Custom Name for \ref EXT_INT_CallbackRegister API
 */
#define External_Interrupt_CallbackRegister EXT_INT_CallbackRegister

/**
 * @ingroup  ext_interruptdriver
 * @brief    Initializes EXT_INT module 
 * @return   none  
 */
void EXT_INT_Initialize(void);

/**
 * @ingroup  ext_interruptdriver
 * @brief    Deinitializes the EXT_INT to POR values
 * @return   none  
 */
void EXT_INT_Deinitialize(void);

/**
 * @ingroup    ext_interruptdriver
 * @brief      Sets the external interrupt to positive edge detect
 * @param[in]  interruptNum - External interrupt number
 * @return     none  
 */
void EXT_INT_PositiveEdgeSet(enum EXT_INT interruptNum);

/**
 * @ingroup    ext_interruptdriver
 * @brief      Sets the external interrupt to negative edge detect
 * @param[in]  interruptNum - External interrupt number
 * @return     none  
 */
void EXT_INT_NegativeEdgeSet(enum EXT_INT interruptNum);

/**
 * @ingroup     ext_interruptdriver
 * @brief       Enable the external interrupt for pins
 * @param[in]   interruptNum - External interrupt number
 * @return  none  
 */
void EXT_INT_InterruptEnable(enum EXT_INT interruptNum);

/**
 * @ingroup    ext_interruptdriver
 * @brief      Disable the external interrupt for pins
 * @param[in]  interruptNum - External interrupt number
 * @return     none  
 */
void EXT_INT_InterruptDisable(enum EXT_INT interruptNum);

/**
 * @ingroup    ext_interruptdriver
 * @brief      Clear the external interrupt flag for pins
 * @param[in]  interruptNum - External interrupt number
 * @return     none  
 */
void EXT_INT_InterruptFlagClear(enum EXT_INT interruptNum);

/**
 * @ingroup    ext_interruptdriver
 * @brief      This function can be used to override default callback and to 
 *             define custom callback for EXT_INT event.
 * @pre        EXT_INT_Initialize() must be called for the associated 
 *             function to work.
 * @param[in]  interruptNum - External interrupt number
 * @param[in]  handler - Address of the callback function 
 * @return     none  
 */
void EXT_INT_CallbackRegister(enum EXT_INT interruptNum, void* handler);


/**
 * @ingroup  ext_interruptdriver
 * @brief    This is the default callback with weak attribute. 
 *           The user can override and implement the default callback without
 *           weak attribute or can register a custom callback function using 
 *           EXT_INT_CallbackRegister.
 * @pre      EXT_INT_Initialize() must be called for the associated 
 *           function to work.
 * @return   none  
 */
void EXT_INT0_Callback(void);


/**
 * @ingroup  ext_interruptdriver
 * @brief    This is the default callback with weak attribute. 
 *           The user can override and implement the default callback without
 *           weak attribute or can register a custom callback function using 
 *           EXT_INT_CallbackRegister.
 * @pre      EXT_INT_Initialize() must be called for the associated 
 *           function to work.
 * @return   none  
 */
void EXT_INT1_Callback(void);
#endif
