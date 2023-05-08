/**
 * EXT_INTERRUPT Generated Driver Interface Header File
 * 
 * @file      ext_int_interface.h
 *            
 * @defgroup  ext_interruptdriver External Interrupt Driver
 *            
 * @brief     External Interrupt Driver is used to configure the dedicated INTx 
 *            pin to interrupt on negative or positive edge using dsPIC MCUs.
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

#ifndef EXT_INTERRUPT_INTERFACE_H
#define EXT_INTERRUPT_INTERFACE_H

// Section: Included Files
#include "ext_int_types.h"

// Section: Data Type Definitions

/**
 @ingroup  ext_interruptdriver
 @struct   EXT_INTERRUPT_INTERFACE
 @brief    Structure containing the function pointers of EXT_INTERRUPT driver
*/
struct EXT_INTERRUPT_INTERFACE 
{
    void (*Initialize)(void);
    ///< Pointer to \ref EXT_INT_Initialize
    
    void (*Deinitialize)(void);
    ///< Pointer to \ref EXT_INT_Deinitialize
    
    void (*PositiveEdgeSet)(enum EXT_INT interruptNum);
    ///< Pointer to \ref EXT_INT_PositiveEdgeSet
    
    void (*NegativeEdgeSet)(enum EXT_INT interruptNum);
    ///< Pointer to \ref EXT_INT_NegativeEdgeSet
    
    void (*InterruptEnable)(enum EXT_INT interruptNum);
    ///< Pointer to \ref EXT_INT_InterruptEnable
    
    void (*InterruptDisable)(enum EXT_INT interruptNum);
    ///< Pointer to \ref EXT_INT_InterruptDisable
    
    void (*InterruptFlagClear)(enum EXT_INT interruptNum);
    ///< Pointer to \ref EXT_INT_InterruptFlagClear
    
    void (*CallbackRegister)(enum EXT_INT interruptNum, void (*CallbackHandler));
    ///< Pointer to \ref EXT_INT_CallbackRegister
};

#endif    /* _EXT_INT_INTERFACE_H */


