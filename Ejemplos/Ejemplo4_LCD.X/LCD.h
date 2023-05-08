/* 
 * File:   LCD.h
 * Author: godo
 *
 * Created on April 25, 2023, 10:01 PM
 */

#ifndef LCD_H
#define	LCD_H

#include <xc.h>

#define E   LATDbits.LATD1
#define RS  LATDbits.LATD8
#define D4  LATBbits.LATB10
#define D5  LATBbits.LATB11
#define D6  LATBbits.LATB12
#define D7  LATBbits.LATB13

typedef enum{
    Fila1=0,
    Fila2,
    Fila3,
    Fila4
}Ubicacion;


void LCD_dsPIC_Cmd(uint8_t a);
void LCD_dsPIC_DataBus(uint8_t a);
void LCD_dsPIC_Init(void);
void LCD_dsPIC_SetCursor(uint8_t x , uint8_t y);
void LCD_dsPIC_Print_Char(char a);
void LCD_dsPIC_Print_String(char *a);
void LCD_dsPIC_New_Char(uint8_t a,uint8_t b,uint8_t c,uint8_t d,uint8_t e,uint8_t f,uint8_t g,uint8_t h,uint8_t i);
void LCD_dsPIC_Write_New_Char(uint8_t a);
void LCD_dsPIC_Clear(void);
void LCD_dsPIC_Home(void);




#endif	/* LCD_H */

