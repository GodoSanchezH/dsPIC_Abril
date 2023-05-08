#include "Dis_7Seg.h"
#include <xc.h>



void Write_Display7Seg(Display7Seg *D7S, uint8_t val){

    const uint8_t Display_7SegA[10]={0xC0,0xf9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
    
    uint8_t data = Display_7SegA[val];
    Reset_Display7Seg();
    
    if(data & 0x1) LATD |= 1<<D7S->a;
    if(data & 1<<1)LATD |= 1<<D7S->b;
    if(data & 1<<2)LATB |= 1<<D7S->c;
    if(data & 1<<3)LATB |= 1<<D7S->d;
    if(data & 1<<4)LATB |= 1<<D7S->e;
    if(data & 1<<5)LATB |= 1<<D7S->f;
    if(data & 1<<6)LATB |= 1<<D7S->g;
   
}


void Reset_Display7Seg(void){

    LATD  &= ~(1<<1) & ~(1<<8);
    LATB &= ~(1<<10) & ~(1<<11) & ~(1<<12) & ~(1<<13) & ~(1<<14);

}

