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

//__eds__ unsigned char GFXDisplayBuffer[GFX_DISPLAY_PIXEL_COUNT] __attribute__((eds));
//__eds__ unsigned char GFXDisplayBufferBottom[GFX_DISPLAY_PIXEL_COUNT] __attribute__((eds));


__eds__ unsigned char  __attribute__((far,section("eds1b"),space(eds) ,address(0x01F00))) GFXDisplayBuffer[ GFX_DISPLAY_PIXEL_COUNT ]; // Sample data buffer
//__eds__ unsigned char  __attribute__((far,section("eds2b"),space(eds) ,address(0x09000))) GFXDisplayBufferBottom[ GFX_DISPLAY_PIXEL_COUNT ]; // Sample data buffer




void config_graphics(void) {
    
    /*
    CLKDIVbits.G1CLKSEL = 1;    // Use 96Mhz Clk
    CLKDIV2bits.GCLKDIV = 56;  // 16 for 30Hz, 6 for 60Hz

    CLKDIVbits.PLLEN = 1;

    G1CON2bits.DPMODE = 1;      // TFT
    G1DBENbits.GDBEN = 0xFFFF;
    G1DPWbits.DPW = 320;
    G1DPHbits.DPH = 240;
    G1DPWTbits.DPWT = 99 + 320;
    G1DPHTbits.DPHT = 22 + 240;
    G1CON3bits.DPCLKPOL = 1;    // Sample on falling edge
    G1CON3bits.DPENOE = 1;
    G1CON3bits.DPENPOL = 1;
    
    G1CON3bits.DPVSOE = 1;      
    G1CON3bits.DPHSOE = 1;     
    G1CON3bits.DPVSPOL = 0;
    G1CON3bits.DPHSPOL = 0;
    G1ACTDAbits.ACTLINE = 22;    // ver sum
    G1ACTDAbits.ACTPIX = 88;    // hor sum
    G1VSYNCbits.VSST = 4;   // front
    G1HSYNCbits.HSST = 20;
    G1VSYNCbits.VSLEN = 3;  //pulse
    G1HSYNCbits.HSLEN = 30;
    G1DBLCONbits.VENST = 4;
    G1DBLCONbits.HENST = 20;

    G1DPADRL = (unsigned long)(0x0000) & 0xFFFF;
    G1DPADRH = 0;

    G1CON2bits.DPBPP = 3;     // 8bpp mode
    G1CON1bits.PUBPP = 3;

    G1CON3bits.DPPINOE = 1;
    
    G1CON3bits.DPPWROE = 1;

    G1CON2bits.DPTEST = 2;
    */
    
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
    //OSCCON = 0x0000;

    CLKDIVbits.RCDIV = 0;      // 8 MHz
    CLKDIVbits.CPDIV = 0;

    ANSB = 0x0000;
    ANSC = 0x0000;
    ANSD = 0x0000;
    ANSF = 0x0000;
    ANSG = 0x0000;
    //TRISE = 0x0000;

    uint32_t y;
    for (y = 1; y < GFX_DISPLAY_PIXEL_COUNT; y++)
    {
        GFXDisplayBuffer[(unsigned long)(y)] = 0x00;
    }
    
    config_graphics();

    static unsigned long x = 0x0000;
    y=0;

    while (1) {
        
        G1CMDL = (unsigned long)(0x0800) & 0xFFFF;
        G1CMDH = 0x5200;
        __delay_ms(1);
        G1CMDL = 0xFFFF;
        G1CMDH = 0x5000;    // CHR_FGCOLOR
        __delay_ms(1);
        G1CMDL = 0x0000;
        G1CMDH = 0x5100;    // CHR_BGCOLOR
        __delay_ms(1);
        G1CMDL = (unsigned long)(0x0800) & 0xFFFF;
        G1CMDH = 0x5200;    // CHR_FONTBASE
        __delay_ms(1);
        G1CMDL = (unsigned long)(x) & 0x00FF;
        G1CMDH = 0x5300;    // CHR_PRINTCHAR
        __delay_ms(1);
        G1CMDL = 0x0000;
        G1CMDH = 0x5800;    // CHR_TXTAREASTART
        __delay_ms(1);
        static uint32_t end_x = HOR_RES;
        static uint32_t end_y = VER_RES;

        G1CMDL = 0xFFFF;//((uint32_t)((end_x>>8)<<12) & (0xF000)) || ((uint32_t)(end_y) & (0x0FFF));
        G1CMDH = (0x59FF); ///|| ((uint32_t)(end_x>>4) & (0x00FF));    // CHR_TXTAREAEND
        __delay_ms(1);
        
        G1CMDL = x;
        G1CMDH = (0x5A00) || ((x>>8) & 0x00FF);    // CHR_PRINTPOS

        __delay_ms(10);
        
        x++;
        if(x>0xFFFE)
        {
            x=0;
        }
      
        //G1CON2bits.DPTEST = 2;
    }

    return 0;
}







