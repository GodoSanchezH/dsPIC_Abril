/**
 * INTERRUPT Generated Driver Source File 
 * 
 * @file      interrupt.c
 *            
 * @ingroup   interruptdriver
 *            
 * @brief     This is the generated driver source file for INTERRUPT driver
 *            
 * @version   Driver Version 1.1.0
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

// Section: Includes
#include <xc.h>
#include "../interrupt.h"

// Section: Driver Interface Function Definitions

void INTERRUPT_Initialize(void)
{
    // DMT: Dead Man Timer
    // Priority: 1
    IPC11bits.DMTIP = 1;
    
    // INT3: External Interrupt 3
    // Priority: 1
    IPC6bits.INT3IP = 1;
    
    // INT2: External Interrupt 2
    // Priority: 1
    IPC5bits.INT2IP = 1;
    
    // INT1: External Interrupt 1
    // Priority: 4
    IPC3bits.INT1IP = 4;
    
    // INT0: External Interrupt 0
    // Priority: 7
    IPC0bits.INT0IP = 7;
    
}

void INTERRUPT_Deinitialize(void)
{
    //POR default value of priority
    IPC11bits.DMTIP = 4;
    IPC6bits.INT3IP = 4;
    IPC5bits.INT2IP = 4;
    IPC3bits.INT1IP = 4;
    IPC0bits.INT0IP = 4;
}
