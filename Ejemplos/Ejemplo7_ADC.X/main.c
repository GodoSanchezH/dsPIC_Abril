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
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/system/clock.h"
#include "mcc_generated_files/adc/adc1.h"
#include <libpic30.h>
#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
/*
    Main application
*/
#define VDD  3.3

int main(void)
{
    SYSTEM_Initialize();
    uint16_t adcread[2];
    float vtem, temp;
    while(1)
        
    {   
        ADC1_Enable();
        ADC1_ChannelSelect(Channel_AN0);
        ADC1_SoftwareTriggerEnable();
        while(!ADC1_IsConversionComplete(Channel_AN0));
        adcread[0] = ADC1_ConversionResultGet(Channel_AN0);
        ADC1_SoftwareTriggerDisable();
        ADC1_Disable();
        
        
        __delay_ms(1);
        ADC1_Enable();
        ADC1_ChannelSelect(Channel_AN16);
        ADC1_SoftwareTriggerEnable();
        while(!ADC1_IsConversionComplete(Channel_AN16));
        adcread[1] = ADC1_ConversionResultGet(Channel_AN16);
        ADC1_SoftwareTriggerDisable();
        ADC1_Disable();
        
        vtem = (adcread[1]/(float)4095.0)*3.3;
        temp = (vtem/1.5)+25;
        printf("ADC[0]=%u\n\rADC[1]=%u\n\rVtem=%.4f\n\rTemp : %.4f\n\r\n\r", adcread[0],adcread[1],vtem,temp);
        LATD ^= (1<<10);
    
        __delay_ms(500);
        
        
    }    
}