/* 
 * File:   Dis_7Seg.h
 * Author: godo
 *
 * Created on April 25, 2023, 9:23 PM
 */

#ifndef DIS_7SEG_H
#define	DIS_7SEG_H

#include <stdint.h>

typedef struct{
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t f;
    uint8_t g;
    
}Display7Seg;

void Write_Display7Seg(Display7Seg *D7S, uint8_t val);
void Reset_Display7Seg(void);

#endif	/* DIS_7SEG_H */

