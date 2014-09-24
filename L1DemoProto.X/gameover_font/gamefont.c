/*****************************************************************************
 * FileName:        gamefont.c
 * Processor:       PIC24F, PIC24H, dsPIC
 * Compiler:        MPLAB C30 (see release notes for tested revision)
 * Linker:          MPLAB LINK30
 * Company:         Microchip Technology, Inc.
 *
 * Software License Agreement
 *
 * Copyright © 2010 Microchip Technology Inc.  All rights reserved.
 * Microchip licenses to you the right to use, modify, copy and distribute
 * Software only when embedded on a Microchip microcontroller or digital
 * signal controller, which is integrated into your product or third party
 * product (pursuant to the sublicense terms in the accompanying license
 * agreement).
 *
 * You should refer to the license agreement accompanying this Software
 * for additional information regarding your rights and obligations.
 *
 * SOFTWARE AND DOCUMENTATION ARE PROVIDED “AS IS” WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
 * OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
 * PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
 * OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
 * BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
 * DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
 * INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
 * COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
 * CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
 * OR OTHER SIMILAR COSTS.
 *
 *
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * AUTO-GENERATED CODE:  Graphics Resource Converter version: 3.0.0
 *****************************************************************************/

/*****************************************************************************
 * SECTION:  Includes
 *****************************************************************************/
#include <Graphics/Graphics.h>

/*****************************************************************************
 * Converted Resources
 * -------------------
 *
 *
 * Fonts
 * -----
 * game_over_16 - Heigth: 10 pixels, range: ' ' to '~'
 *****************************************************************************/

/*****************************************************************************
 * SECTION:  Fonts
 *****************************************************************************/

/*********************************
 * TYPE_FONT_FILE Structure
 * Label: game_over_16
 * Description:  Heigth: 10 pixels, range: ' ' to '~'
 ***********************************/

extern const char __game_over_16[] __attribute__((aligned(2)));

const FONT_FLASH game_over_16 =
{
    (FLASH | COMP_NONE),
    __game_over_16
};

const char __game_over_16[] __attribute__((aligned(2))) =
{
/****************************************
 * Font header
 ****************************************/
    0x00,           // Information
    0x00,           // ID
    0x20, 0x00,     // First Character
    0x7E, 0x00,     // Last Character
    0x0A,           // Height
    0x00,           // Reserved
/****************************************
 * Font Glyph Table
 ****************************************/
    0x02, 0x84, 0x01, 0x00,           // width, MSB Offset, LSB offset
    0x02, 0x8E, 0x01, 0x00,           // width, MSB Offset, LSB offset
    0x02, 0x98, 0x01, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xA2, 0x01, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xAC, 0x01, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0xB6, 0x01, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xC0, 0x01, 0x00,           // width, MSB Offset, LSB offset
    0x01, 0xCA, 0x01, 0x00,           // width, MSB Offset, LSB offset
    0x02, 0xD4, 0x01, 0x00,           // width, MSB Offset, LSB offset
    0x02, 0xDE, 0x01, 0x00,           // width, MSB Offset, LSB offset
    0x02, 0xE8, 0x01, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xF2, 0x01, 0x00,           // width, MSB Offset, LSB offset
    0x01, 0xFC, 0x01, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x06, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x01, 0x10, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0x1A, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x24, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0x2E, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x38, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x42, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x4C, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x56, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x60, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x6A, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x74, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x7E, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x01, 0x88, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x01, 0x92, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0x9C, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xA6, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0xB0, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xBA, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xC4, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0xCE, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xD8, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xE2, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xEC, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xF6, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x00, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0x0A, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x14, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0x1E, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x28, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x32, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x3C, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0x46, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0x50, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0x5A, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x64, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0x6E, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x78, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x82, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x8C, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x96, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0xA0, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xAA, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xB4, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0xBE, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0xC8, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x02, 0xD2, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0xDC, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x02, 0xE6, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0xF0, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xFA, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x01, 0x04, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x0E, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x18, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x22, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x2C, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x36, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0x40, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x4A, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x54, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x02, 0x5E, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0x68, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x72, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x02, 0x7C, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0x86, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x90, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0x9A, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xA4, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xAE, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0xB8, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xC2, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0xCC, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xD6, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xE0, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x06, 0xEA, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0xF4, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xFE, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x08, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0x12, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x02, 0x1C, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0x26, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x30, 0x05, 0x00,           // width, MSB Offset, LSB offset
/***********************************
 * Font Characters
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x03,         // **      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x0F,         // ****    
    0x0E,         //  ***    
    0x0F,         // ****    
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x07,         // ***     
    0x07,         // ***     
    0x0E,         //  ***    
    0x0F,         // ****    
    0x02,         //  *      
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x1C,         //   ***   
    0x06,         //  **     
    0x06,         //  **     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x0F,         // ****    
    0x07,         // ***     
    0x0F,         // ****    
    0x0F,         // ****    
    0x08,         //    *    
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x01,         // *       
    0x01,         // *       
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x03,         // **      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x0F,         // ****    
    0x06,         //  **     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x01,         // *       
    0x01,         // *       
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x01,         // *       
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x06,         //  **     
    0x02,         //  *      
    0x02,         //  *      
    0x01,         // *       
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x0F,         // ****    
    0x0F,         // ****    
    0x0F,         // ****    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x07,         // ***     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x0C,         //   **    
    0x07,         // ***     
    0x03,         // **      
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x0C,         //   **    
    0x0E,         //  ***    
    0x0C,         //   **    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x06,         //  **     
    0x0F,         // ****    
    0x0C,         //   **    
    0x0C,         //   **    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x03,         // **      
    0x0F,         // ****    
    0x0C,         //   **    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x03,         // **      
    0x0F,         // ****    
    0x0B,         // ** *    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x0C,         //   **    
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x0F,         // ****    
    0x0F,         // ****    
    0x0F,         // ****    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x0F,         // ****    
    0x0E,         //  ***    
    0x0C,         //   **    
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x01,         // *       
    0x00,         //         
    0x01,         // *       
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x01,         // *       
    0x00,         //         
    0x01,         // *       
    0x01,         // *       
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x04,         //   *     
    0x07,         // ***     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x03,         // **      
    0x04,         //   *     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x0C,         //   **    
    0x0E,         //  ***    
    0x06,         //  **     
    0x06,         //  **     
    0x00,         //         
    0x00,         //         

    0x3C,         //   ****  
    0x7E,         //  ****** 
    0x7E,         //  ****** 
    0x3F,         // ******  
    0x1F,         // *****   
    0x3F,         // ******  
    0x7E,         //  ****** 
    0x7C,         //   ***** 
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x0E,         //  ***    
    0x0A,         //  * *    
    0x1F,         // *****   
    0x1B,         // ** **   
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x0B,         // ** *    
    0x0F,         // ****    
    0x0B,         // ** *    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x0B,         // ** *    
    0x0B,         // ** *    
    0x0B,         // ** *    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x03,         // **      
    0x0F,         // ****    
    0x03,         // **      
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x03,         // **      
    0x07,         // ***     
    0x03,         // **      
    0x03,         // **      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x1B,         // ** **   
    0x1F,         // *****   
    0x1B,         // ** **   
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0B,         // ** *    
    0x0B,         // ** *    
    0x0F,         // ****    
    0x0B,         // ** *    
    0x0B,         // ** *    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x07,         // ***     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x0F,         // ****    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0B,         // ** *    
    0x0F,         // ****    
    0x07,         // ***     
    0x0F,         // ****    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x13,         // **  *   
    0x1F,         // *****   
    0x17,         // *** *   
    0x13,         // **  *   
    0x13,         // **  *   
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1B,         // ** **   
    0x1F,         // *****   
    0x1F,         // *****   
    0x1F,         // *****   
    0x1B,         // ** **   
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x1B,         // ** **   
    0x1B,         // ** **   
    0x1B,         // ** **   
    0x1F,         // *****   
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x0B,         // ** *    
    0x0F,         // ****    
    0x03,         // **      
    0x03,         // **      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x1B,         // ** **   
    0x1B,         // ** **   
    0x1F,         // *****   
    0x1F,         // *****   
    0x18,         //    **   
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x0B,         // ** *    
    0x0F,         // ****    
    0x0B,         // ** *    
    0x0B,         // ** *    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x03,         // **      
    0x07,         // ***     
    0x0C,         //   **    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x06,         //  **     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0B,         // ** *    
    0x0B,         // ** *    
    0x0B,         // ** *    
    0x0B,         // ** *    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1B,         // ** **   
    0x1B,         // ** **   
    0x0A,         //  * *    
    0x0E,         //  ***    
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x43,         // **    * 
    0x5F,         // ***** * 
    0x7A,         //  * **** 
    0x7E,         //  ****** 
    0x3E,         //  *****  
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0B,         // ** *    
    0x0F,         // ****    
    0x0E,         //  ***    
    0x0E,         //  ***    
    0x0B,         // ** *    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1B,         // ** **   
    0x1B,         // ** **   
    0x0A,         //  * *    
    0x0E,         //  ***    
    0x04,         //   *     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1F,         // *****   
    0x1F,         // *****   
    0x0C,         //   **    
    0x06,         //  **     
    0x1F,         // *****   
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x01,         // *       
    0x03,         // **      
    0x02,         //  *      
    0x02,         //  *      
    0x04,         //   *     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x03,         // **      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x05,         // * *     
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x01,         // *       
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x0E,         //  ***    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x07,         // ***     
    0x0F,         // ****    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x03,         // **      
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x0E,         //  ***    
    0x0F,         // ****    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x0F,         // ****    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x07,         // ***     
    0x03,         // **      
    0x03,         // **      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x0F,         // ****    
    0x0F,         // ****    
    0x0E,         //  ***    
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x07,         // ***     
    0x0F,         // ****    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x03,         // **      
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x07,         // ***     
    0x07,         // ***     
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x07,         // ***     
    0x07,         // ***     
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x1F,         // *****   
    0x1F,         // *****   
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x0F,         // ****    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x07,         // ***     
    0x07,         // ***     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x0F,         // ****    
    0x0F,         // ****    
    0x03,         // **      
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x0F,         // ****    
    0x0F,         // ****    
    0x0C,         //   **    
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x03,         // **      
    0x03,         // **      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x07,         // ***     
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x07,         // ***     
    0x02,         //  *      
    0x06,         //  **     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x0F,         // ****    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x0F,         // ****    
    0x06,         //  **     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x3F,         // ******  
    0x3F,         // ******  
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x07,         // ***     
    0x07,         // ***     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x0F,         // ****    
    0x0F,         // ****    
    0x0E,         //  ***    
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x0E,         //  ***    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x02,         //  *      
    0x03,         // **      
    0x02,         //  *      
    0x06,         //  **     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x03,         // **      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x02,         //  *      
    0x06,         //  **     
    0x02,         //  *      
    0x03,         // **      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0A,         //  * *    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         
    0x00,         //         

};

