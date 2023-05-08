/**
 * PINS Generated Driver Header File 
 * 
 * @file      pins.h
 *            
 * @defgroup  pinsdriver Pins Driver
 *            
 * @brief     The Pin Driver directs the operation and function of 
 *            the selected device pins using dsPIC MCUs.
 *
 * @version   Firmware Driver Version 1.0.1
 *
 * @version   PLIB Version 1.1.0
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

#ifndef PINS_H
#define PINS_H
// Section: Includes
#include <xc.h>

// Section: Device Pin Macros

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD10 GPIO Pin which has a custom name of Led to High
 * @pre      The RD10 must be set as Output Pin             
 * @return   none  
 */
#define Led_SetHigh()          (_LATD10 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD10 GPIO Pin which has a custom name of Led to Low
 * @pre      The RD10 must be set as Output Pin
 * @return   none  
 */
#define Led_SetLow()           (_LATD10 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD10 GPIO Pin which has a custom name of Led
 * @pre      The RD10 must be set as Output Pin
 * @return   none  
 */
#define Led_Toggle()           (_LATD10 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD10 GPIO Pin which has a custom name of Led
 * @return   none  
 */
#define Led_GetValue()         _RD10

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD10 GPIO Pin which has a custom name of Led as Input
 * @return   none  
 */
#define Led_SetDigitalInput()  (_TRISD10 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD10 GPIO Pin which has a custom name of Led as Output
 * @return   none  
 */
#define Led_SetDigitalOutput() (_TRISD10 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD13 GPIO Pin which has a custom name of boton to High
 * @pre      The RD13 must be set as Output Pin             
 * @return   none  
 */
#define boton_SetHigh()          (_LATD13 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD13 GPIO Pin which has a custom name of boton to Low
 * @pre      The RD13 must be set as Output Pin
 * @return   none  
 */
#define boton_SetLow()           (_LATD13 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD13 GPIO Pin which has a custom name of boton
 * @pre      The RD13 must be set as Output Pin
 * @return   none  
 */
#define boton_Toggle()           (_LATD13 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD13 GPIO Pin which has a custom name of boton
 * @return   none  
 */
#define boton_GetValue()         _RD13

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD13 GPIO Pin which has a custom name of boton as Input
 * @return   none  
 */
#define boton_SetDigitalInput()  (_TRISD13 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD13 GPIO Pin which has a custom name of boton as Output
 * @return   none  
 */
#define boton_SetDigitalOutput() (_TRISD13 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Initializes the PINS module
 * @return   none  
 */
void PINS_Initialize(void);



#endif
