/* 
 * File:   main.c
 * Author: arko
 *
 * Created on September 8, 2014, 7:25 PM
 */
#include <stdint.h> 
#include <stdio.h>
#include <stdlib.h>
#include <xc.h>

#include "font.h"
#include "uart.h"
#define font_28_SIZE    (2088)


#define  FCY    16000000UL    // Instruction cycle frequency, Hz
#include <libpic30.h>

_CONFIG1(FWDTEN_OFF)
_CONFIG2(FNOSC_FRCPLL & PLL96MHZ_ON & PLLDIV_DIV2)

        
#define HOR_RES 640
#define VER_RES 480           
#define HOR_FRONT_PORCH 20
#define HOR_BACK_PORCH 51
#define HOR_PULSE_WIDTH  96
#define VER_FRONT_PORCH 12
#define VER_BACK_PORCH 36
#define VER_PULSE_WIDTH 2

#define GFX_DISPLAY_PIXEL_COUNT    64000

#define GFX_DISPLAY_BUFFER_START_ADDRESS        0x00000001ul
#define GFX_DISPLAY_BUFFER_LENGTH               0x00012C00ul

__eds__ unsigned char  __attribute__((far,section("eds1b"),space(eds) ,address(0x01F00))) GFXDisplayBuffer[ GFX_DISPLAY_PIXEL_COUNT ]; // Sample data buffer

char message[] = "HAPPY 10TH BIRTHDAY HACKADAY! \n";
char input_char;

void config_graphics(void) {
    
    CLKDIVbits.RCDIV = 0;

    CLKDIVbits.G1CLKSEL = 1;                         /* Use 96Mhz Clk */
    CLKDIV2bits.GCLKDIV = 11;  //56      //11        /* 56 = divide by 15 = 6.5Mhz */

    G1CON2bits.DPMODE = 1;      /* TFT */
    G1DBENbits.GDBEN = 0xFFFF;
    G1DPWbits.DPW = HOR_RES;
    G1DPHbits.DPH = VER_RES;

    G1PUWbits.PUW = HOR_RES;
    G1PUHbits.PUH = VER_RES;
    
    G1DPWTbits.DPWT = HOR_FRONT_PORCH + HOR_PULSE_WIDTH + HOR_BACK_PORCH + HOR_RES;
    G1DPHTbits.DPHT = VER_FRONT_PORCH + VER_PULSE_WIDTH + VER_BACK_PORCH + VER_RES;
    G1CON3bits.DPCLKPOL = 1;    /* Sample on rising edge*/
    G1CON3bits.DPENOE = 0;
    G1CON3bits.DPPWROE = 0;
    G1CON3bits.DPVSOE = 1;      /* use VSYNC */
    G1CON3bits.DPHSOE = 1;      /* use HSYNC */
    G1CON3bits.DPVSPOL = 0;     /* VSYNC negative polarity */
    G1CON3bits.DPHSPOL = 0;     /* HSYNC negative polarity */
    G1ACTDAbits.ACTLINE = VER_FRONT_PORCH + VER_PULSE_WIDTH + VER_BACK_PORCH;
    G1ACTDAbits.ACTPIX = HOR_FRONT_PORCH + HOR_PULSE_WIDTH + HOR_BACK_PORCH;
    G1VSYNCbits.VSST = VER_FRONT_PORCH;
    G1HSYNCbits.HSST = HOR_FRONT_PORCH;
    G1VSYNCbits.VSLEN = VER_PULSE_WIDTH;
    G1HSYNCbits.HSLEN = HOR_PULSE_WIDTH;
    G1DBLCONbits.VENST = VER_FRONT_PORCH + VER_PULSE_WIDTH + VER_BACK_PORCH;
    G1DBLCONbits.HENST = HOR_FRONT_PORCH + HOR_PULSE_WIDTH + HOR_BACK_PORCH;
    
    G1DPADRL = (unsigned long)(GFXDisplayBuffer) & 0xFFFF;
    G1DPADRH = 0;

    G1W1ADRL = (unsigned long)(GFXDisplayBuffer+6000) & 0xFFFF;
    G1W1ADRH = 0;

    G1CON2bits.DPBPP = 0;     /* 8bpp mode */
    G1CON1bits.PUBPP = 0;

    G1CON3bits.DPPINOE = 1;
    G1CON3bits.DPPOWER = 1;

    //G1CON2bits.DPTEST = 2;
    
    G1CON1bits.G1EN = 1;        /* Enable module */
    G1CON3bits.DPPOWER = 1;
    
    /*
    G1CLUTbits.CLUTEN = 1;

    G1CLUTbits.CLUTRWEN = 1;
    G1CLUTbits.CLUTADR = 0x00;
    G1CLUTWR = 0x001F;
    G1CLUTbits.CLUTADR = 0x01;
    G1CLUTWR = 0xF800;
    G1CLUTbits.CLUTADR = 0x02;
    G1CLUTWR = 0x07E0;

    G1CLUTbits.CLUTRWEN = 0;
    */
}


int main(void) {

    CLKDIVbits.RCDIV = 0;      // 8 MHz
    CLKDIVbits.CPDIV = 0;

    ANSB = 0x0000;
    ANSC = 0x0000;
    ANSD = 0x0000;
    ANSF = 0x0000;
    ANSG = 0x0000;

    uint32_t i;
    for (i = 1; i < GFX_DISPLAY_PIXEL_COUNT; i++)
    {
        GFXDisplayBuffer[(unsigned long)(i)] = 0x00;
    }
    
    config_graphics();

    UART1Init(103);

    static unsigned short c = 0;
    static unsigned short x = 0;
    static unsigned short y = 0;

    static unsigned short pos_l = 0;
    static unsigned short pos_h = 0;

    while (1) {

        G1CMDL = (unsigned short)(0x0800) & 0xFFFF;
        G1CMDH = 0x5200;    // CHR_FONTBASE
        //__delay_ms(1);

        G1CMDL = 0x0000;
        G1CMDH = 0x5800;    // CHR_TXTAREASTART
        //__delay_ms(1);

        G1CMDL = 0xFFFF;
        G1CMDH = (0x59FF);  // CHR_TXTAREAEND
        //__delay_ms(1);

        G1CMDL = 0xFFFF;
        G1CMDH = 0x5000;    // CHR_FGCOLOR
        //__delay_ms(1);

        G1CMDL = 0x0000;
        G1CMDH = 0x5100;    // CHR_BGCOLOR
        //__delay_ms(1);

        pos_l = (unsigned short)((y & 0x0FFF) + (x<<12));
        pos_h = (unsigned short)(0x5A00 + (x>>4));
        //__delay_ms(1);
        
        G1CMDL = pos_l;
        G1CMDH = pos_h;     // CHR_PRINTPOS
        //__delay_ms(1);

        input_char = UART1GetChar();
        G1CMDL = (unsigned short)(input_char) & 0x00FF;
        G1CMDH = 0x5300;    // CHR_PRINTCHAR

        //__delay_ms(10);
        
        c++;
        x = x + 8;
        if(input_char == '\n')
        {
            c = 0;
            x = 0;
            y = y + 16;
        }

        if(y>390)
        {
            y = 0;
            i=0;
            for (i = 1; i < 47000; i++)
            {
                GFXDisplayBuffer[(unsigned long)(i)] = 0x00;
            }
        }
    }

    return 0;
}







