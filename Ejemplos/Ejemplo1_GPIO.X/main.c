/* 
 * File:   main.c
 * Author: gssan
 *
 * Created on 21 de abril de 2023, 09:58 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "Config.h"
#include <libpic30.h>
#include <p33FJ32MC202.h>

/*
 * 
 */
int main(int argc, char** argv) {

    AD1PCFGL = 0xFF;
    
    TRISBbits.TRISB0 = 0;//como saida
    TRISBbits.TRISB1 = 0;//como saida
    TRISBbits.TRISB2 = 0;//como saida
    TRISBbits.TRISB10 = 0;//como saida
    
    TRISBbits.TRISB15 = 1;//como entrada
    TRISBbits.TRISB14 = 1;//como entrada
    
    for(;;){
    
//        LATBbits.LATB0 = 1;
//        LATBbits.LATB1 = 1;
//        LATBbits.LATB2 = 1;
//        LATBbits.LATB10 = 1;
//        __delay_ms(400);
//        
//        LATBbits.LATB0 = 0;
//        LATBbits.LATB1 = 0;
//        LATBbits.LATB2 = 0;
//        LATBbits.LATB10 = 0;
//        __delay_ms(400);
        
        
        //if(PORTBbits.RB14 == 1)
        if (!PORTBbits.RB14) {
        LATBbits.LATB0 = 1;
        LATBbits.LATB1 = 1;
        LATBbits.LATB2 = 1;
        LATBbits.LATB10 = 1;
        }
        else if (PORTBbits.RB15) {
         LATBbits.LATB0 = 1;
        LATBbits.LATB1 = 1;
       LATBbits.LATB2 = 1;
       LATBbits.LATB10 = 1;
           
        }else{
               LATBbits.LATB0 = 0;
        LATBbits.LATB1 = 0;
        LATBbits.LATB2 = 0;
        LATBbits.LATB10 = 0;
        
        }
        
        
        
    }
    
    
    return (EXIT_SUCCESS);
}

