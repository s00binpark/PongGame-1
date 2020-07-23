//*****************************************************************************
//
// fontfixed4x5.c - Font defintion for the fixed-point 4x5 font by tompreston.
// Original version is available at https://github.com/tompreston/4x5-Font (MIT license)
// Modified to Tiva Graphics Library by Sangsoo Park (sangsoo.park@ewha.ac.kr)
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include <ti/grlib/grlib.h>

//*****************************************************************************
//
// Details of this font:
//     Style: fixed
//     Size: 4 point
//     Bold: no
//     Italic: no
//     Memory usage: 960 bytes --
//
//*****************************************************************************

//*****************************************************************************
//
// The uncompressed data for the fixed-point 4x5 font.
//
//*****************************************************************************
const uint8_t g_pui4FontFixed4x5Data[760] =
{
0x05, 0x04, 0x00, 0x00, 0x00,
0x05, 0x04, 0x44, 0x40, 0x40,
0x05, 0x04, 0xaa, 0x00, 0x00,
0x05, 0x04, 0x6f, 0x6f, 0x60,
0x05, 0x04, 0x7a, 0x65, 0xe0,
0x05, 0x04, 0x7e, 0x47, 0xe0,
0x05, 0x04, 0x25, 0x6a, 0x50,
0x05, 0x04, 0x22, 0x00, 0x00,
0x05, 0x04, 0x48, 0x88, 0x40,
0x05, 0x04, 0x42, 0x22, 0x40,
0x05, 0x04, 0x06, 0xf6, 0x00,
0x05, 0x04, 0x02, 0x72, 0x00,
0x05, 0x04, 0x00, 0x02, 0x40,
0x05, 0x04, 0x00, 0x0f, 0x00,
0x05, 0x04, 0x00, 0x00, 0x40,
0x05, 0x04, 0x11, 0x24, 0x80,
0x05, 0x04, 0x6b, 0xfd, 0x60,
0x05, 0x04, 0x26, 0x22, 0x20,
0x05, 0x04, 0xe1, 0x68, 0xf0,
0x05, 0x04, 0xe1, 0x61, 0xe0,
0x05, 0x04, 0x26, 0xaf, 0x20,
0x05, 0x04, 0xf8, 0xe1, 0xe0,
0x05, 0x04, 0x68, 0xe9, 0x60,
0x05, 0x04, 0xf1, 0x24, 0x80,
0x05, 0x04, 0x69, 0x69, 0x60,
0x05, 0x04, 0x69, 0xf1, 0x60,
0x05, 0x04, 0x04, 0x04, 0x00,
0x05, 0x04, 0x04, 0x04, 0x80,
0x05, 0x04, 0x24, 0x84, 0x20,
0x05, 0x04, 0x0f, 0x0f, 0x00,
0x05, 0x04, 0x42, 0x12, 0x40,
0x05, 0x04, 0x69, 0x20, 0x20,
0x05, 0x04, 0x6d, 0xb8, 0x60,
0x05, 0x04, 0x4a, 0xea, 0xa0,
0x05, 0x04, 0xe9, 0xe9, 0xe0,
0x05, 0x04, 0x69, 0x89, 0x60,
0x05, 0x04, 0xe9, 0x99, 0xe0,
0x05, 0x04, 0xf8, 0xe8, 0xf0,
0x05, 0x04, 0xf8, 0xe8, 0x80,
0x05, 0x04, 0x68, 0xb9, 0x60,
0x05, 0x04, 0x99, 0xf9, 0x90,
0x05, 0x04, 0xe4, 0x44, 0xe0,
0x05, 0x04, 0x11, 0x19, 0x60,
0x05, 0x04, 0x9a, 0xca, 0x90,
0x05, 0x04, 0x88, 0x88, 0xf0,
0x05, 0x04, 0x9f, 0xf9, 0x90,
0x05, 0x04, 0x9d, 0xfb, 0x90,
0x05, 0x04, 0x69, 0x99, 0x60,
0x05, 0x04, 0xe9, 0xe8, 0x80,
0x05, 0x04, 0x69, 0x9b, 0x70,
0x05, 0x04, 0xe9, 0xea, 0x90,
0x05, 0x04, 0x78, 0x61, 0xe0,
0x05, 0x04, 0xe4, 0x44, 0x40,
0x05, 0x04, 0x99, 0x99, 0x60,
0x05, 0x04, 0x99, 0x96, 0x60,
0x05, 0x04, 0x99, 0xff, 0x90,
0x05, 0x04, 0x99, 0x69, 0x90,
0x05, 0x04, 0x95, 0x22, 0x20,
0x05, 0x04, 0xf2, 0x48, 0xf0,
0x05, 0x04, 0xe8, 0x88, 0xe0,
0x05, 0x04, 0x88, 0x42, 0x10,
0x05, 0x04, 0x71, 0x11, 0x70,
0x05, 0x04, 0x4a, 0x00, 0x00,
0x05, 0x04, 0x00, 0x00, 0xf0,
0x05, 0x04, 0x42, 0x00, 0x00,
0x05, 0x04, 0x05, 0xbb, 0x50,
0x05, 0x04, 0x88, 0xe9, 0xe0,
0x05, 0x04, 0x07, 0x88, 0x70,
0x05, 0x04, 0x11, 0x79, 0x70,
0x05, 0x04, 0x06, 0xf8, 0x70,
0x05, 0x04, 0x34, 0xe4, 0x40,
0x05, 0x04, 0x79, 0x71, 0x70,
0x05, 0x04, 0x88, 0xe9, 0x90,
0x05, 0x04, 0x02, 0x02, 0x20,
0x05, 0x04, 0x10, 0x11, 0x60,
0x05, 0x04, 0x8a, 0xca, 0x90,
0x05, 0x04, 0xc4, 0x44, 0xe0,
0x05, 0x04, 0x09, 0xff, 0x90,
0x05, 0x04, 0x0e, 0x99, 0x90,
0x05, 0x04, 0x06, 0x99, 0x60,
0x05, 0x04, 0x0e, 0x9e, 0x80,
0x05, 0x04, 0x06, 0x97, 0x10,
0x05, 0x04, 0x0b, 0xc8, 0x80,
0x05, 0x04, 0x07, 0x42, 0xe0,
0x05, 0x04, 0x4e, 0x44, 0x30,
0x05, 0x04, 0x09, 0x99, 0x60,
0x05, 0x04, 0x09, 0x96, 0x60,
0x05, 0x04, 0x09, 0xff, 0x60,
0x05, 0x04, 0x09, 0x66, 0x90,
0x05, 0x04, 0x09, 0x71, 0x60,
0x05, 0x04, 0x0f, 0x24, 0xf0,
0x05, 0x04, 0x64, 0xc4, 0x60,
0x05, 0x04, 0x44, 0x44, 0x40,
0x05, 0x04, 0xc4, 0x64, 0xc0,
0x05, 0x04, 0x00, 0x5a, 0x00,
0x05, 0x04, 0x00, 0x5a, 0x00,
};

//*****************************************************************************
//
// The font definition for the fixed-point 6x8 font.
//
//*****************************************************************************
const tFont g_sFontFixed4x5 =
{
    //
    // The format of the font.
    //
    FONT_FMT_UNCOMPRESSED,

    //
    // The maximum width of the font.
    //
    4,

    //
    // The height of the font.
    //
    5,

    //
    // The baseline of the font.
    //
    7,

    //
    // The offset to each character in the font.
    //
    {
0, 5, 10, 15, 20, 
25, 30, 35, 40, 45, 
50, 55, 60, 65, 70, 
75, 80, 85, 90, 95, 
100, 105, 110, 115, 120, 
125, 130, 135, 140, 145, 
150, 155, 160, 165, 170, 
175, 180, 185, 190, 195, 
200, 205, 210, 215, 220, 
225, 230, 235, 240, 245, 
250, 255, 260, 265, 270, 
275, 280, 285, 290, 295, 
300, 305, 310, 315, 320, 
325, 330, 335, 340, 345, 
350, 355, 360, 365, 370, 
375, 380, 385, 390, 395, 
400, 405, 410, 415, 420, 
425, 430, 435, 440, 445, 
450, 455, 460, 465, 470, 
475, 
    },

    //
    // A pointer to the actual font data
    //
    g_pui4FontFixed4x5Data
};
