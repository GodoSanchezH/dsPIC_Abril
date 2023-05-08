
#include "LCD.h"
#include "mcc_generated_files/system.h"
#include <libpic30.h>

Ubicacion Cursor;

void LCD_dsPIC_DataBus(uint8_t a){
    // D4 D5 D6 D7
    //0000 1000
    if(a & 0x1) D4=1; else D4=0;
    //0000 0100    
    if(a & 0x2) D5=1; else D5=0;
    //0000 0010    
    if(a & 0x4) D6=1; else D6=0;
    //0000 0001    
    if(a & 0x8) D7=1; else D7=0;   
}
void LCD_dsPIC_Cmd(uint8_t a){
    E=0;
    E=1;
    LCD_dsPIC_DataBus(a);
    __delay_ms(1);
    E=0;

}
void LCD_dsPIC_Init(void){


    LCD_dsPIC_Cmd(0x03);
    LCD_dsPIC_Cmd(0x03);
    LCD_dsPIC_Cmd(0x03);
    LCD_dsPIC_Cmd(0x02);
    LCD_dsPIC_Cmd(0x02);
    LCD_dsPIC_Cmd(0x08);
    LCD_dsPIC_Cmd(0x00);
    LCD_dsPIC_Cmd(0x08);
    LCD_dsPIC_Cmd(0x00);
    LCD_dsPIC_Cmd(0x01);
    LCD_dsPIC_Cmd(0x00);
    LCD_dsPIC_Cmd(0x0d);
}

void LCD_dsPIC_SetCursor(uint8_t x , uint8_t y){
    RS = 0;
    uint8_t m,n;
    switch(y){
        case Fila1:
            m = 0x80+x;
            n = (0x80+x)>>4;
            LCD_dsPIC_Cmd(n);
            LCD_dsPIC_Cmd(m);
        break;
        case Fila2:
            m = 0xC0+x;
            n = (0xC0+x)>>4;
            LCD_dsPIC_Cmd(n);
            LCD_dsPIC_Cmd(m);
        break;
        case Fila3:
             m = 0x94+x;
            n = (0x94+x)>>4;
            LCD_dsPIC_Cmd(n);
            LCD_dsPIC_Cmd(m);
        break;
        case Fila4:
            m = 0xD4+x;
            n = (0xD4+x)>>4;
            LCD_dsPIC_Cmd(n);
            LCD_dsPIC_Cmd(m);
        break;
    }
}
void LCD_dsPIC_Print_Char(char a){

    uint8_t m,n;
    m = a;
    n = (a>>4);
    RS = 1;
    LCD_dsPIC_Cmd(n);
    LCD_dsPIC_Cmd(m);
}
void LCD_dsPIC_Print_String(char *a){
    char *ptr;
    ptr = a;
    while(*ptr)
        LCD_dsPIC_Print_Char(*ptr++);

}
void LCD_dsPIC_New_Char(uint8_t a,uint8_t b,uint8_t c,uint8_t d,uint8_t e,uint8_t f,uint8_t g,uint8_t h,uint8_t i){
 uint8_t m,n;
    switch(a){
        case 1:
         LCD_dsPIC_Cmd(0x04);
         LCD_dsPIC_Cmd(0x00);
        RS = 1;
        m=b>>4;
        n=b;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=c>>4;
        n=c;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=d>>4;
        n=d;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=e>>4;
        n=e;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=f>>4;
        n=f;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=g>>4;
        n=g;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=h>>4;
        n=h;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=i>>4;
        n=i;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        RS= 0;
        LCD_dsPIC_Cmd(0x00);
        LCD_dsPIC_Cmd(0x01);
        __delay_ms(100);
        break;
        case 2:
            LCD_dsPIC_Cmd(0x04);
            LCD_dsPIC_Cmd(0x08);
            RS=1;
        m=b>>4;
        n=b;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=c>>4;
        n=c;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=c>>4;
        n=c;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=d>>4;
        n=d;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=e>>4;
        n=e;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=f>>4;
        n=f;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=g>>4;
        n=g;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=h>>4;
        n=h;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=i>>4;
        n=i;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        RS=0;
        LCD_dsPIC_Cmd(0x00);
        LCD_dsPIC_Cmd(0x01);
        __delay_ms(100);
        break;
        case 3:
            LCD_dsPIC_Cmd(0x04);
            LCD_dsPIC_Cmd(0xFF);
        RS=1;
        m=b>>4;
        n=b;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=c>>4;
        n=c;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=d>>4;
        n=d;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=e>>4;
        n=e;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=f>>4;
        n=f;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=g>>4;
        n=g;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=h>>4;
        n=h;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        m=i>>4;
        n=i;
        LCD_dsPIC_Cmd(m);
        LCD_dsPIC_Cmd(n);
        RS=0;
        LCD_dsPIC_Cmd(0x00);
        LCD_dsPIC_Cmd(0x01);
        
__delay_ms(100);
        break;
    }
}
void LCD_dsPIC_Write_New_Char(uint8_t a){
   RS = 1;
    LCD_dsPIC_Cmd(0x00);
    LCD_dsPIC_Cmd(a-1);
    RS = 0;
}
void LCD_dsPIC_Clear(void){
    RS = 0;
    LCD_dsPIC_Cmd(0x00);
    LCD_dsPIC_Cmd(0x01);
}
void LCD_dsPIC_Home(void){
    RS = 0;
    LCD_dsPIC_Cmd(0x00);
    LCD_dsPIC_Cmd(0x02);
}


