#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL2/SDL.h>
#include <time.h>
#define HEIGHT 25
#define WIDTH 40
#define MAXIMUM (HEIGHT * WIDTH)           /* 25 * 40 = 1000 */
#define BASEASCII 128                      /* ASCII 16bit limit to 128 */
#define SPACE 0xA0
#define FNTWIDTH 16
#define FNTHEIGHT 18
#define FNTMODE 3                          /* Number of different fonts */
#define FNTCHARS 96                        /* Number of characters in font file */
#define RECTNUM 3                          /* Single height, top half of double, bottom half. */
#define ALPHAFONT "font/m7fixed.fnt"
#define CONTFONT "font/m7contiguous.fnt"   /* Created by teletext_font.c */
#define SEPFONT "font/m7separated.fnt"
#define WINHEIGHT (HEIGHT * FNTHEIGHT)
#define WINWIDTH (WIDTH * FNTWIDTH)
#define RGB 255                            /* Color is controlled by three values(RGB) */
#define CLRNUM 8 		           /* Number of colors inc. black */

typedef unsigned char Uint8;               /* Use the length of 8 bit, 0 - 256 */
typedef unsigned short Uint16;             /* Use the length of 16 bit, 0 - 65534 */

/* Separated from modes and codes, codes were 8 bits hex codes fetched from 
m7 file, while modes can be switched “on” and “off” based on codes, and 
stored in the structure of status. */
typedef enum displayMode {alphanumeric, contiguous, separated}displayMode;
typedef enum holdMode {release, hold}holdMode;
typedef enum heightMode {single, doubleBase, doubleTop}heightMode;
typedef enum color {black, red, green, yellow, blue, magenta, cyan, white}color;

typedef struct status {
   color fgcolor;                          /* Foreground color */
   color bgcolor;                          /* Background color */
   displayMode dismode;
   heightMode height;
   holdMode holdgraphics;
}status;

typedef struct cell {
   status s;
   Uint8 code;
   Uint16 ch[FNTHEIGHT];                   /* Bit/pixel two-dimension array */
}cell;

typedef enum controlCode {RedAlpha        = 0x81,
                          GreenAlpha      = 0x82,
                          YellowAlpha     = 0x83,
                          BlueAlpha       = 0x84,
                          MagentaAlpha    = 0x85,
                          CyanAlpha       = 0x86,
                          WhiteAlpha      = 0x87,

                          RedGraphics     = 0x91,
                          GreenGraphics   = 0x92,
                          YellowGraphics  = 0x93,
                          BlueGraphics    = 0x94,
                          MagentaGraphics = 0x95,
                          CyanGraphics    = 0x96,
                          WhiteGraphics   = 0x97,

                          ContGraphics    = 0x99,
                          SepGraphics     = 0x9a,
                          BlckBackground  = 0x9c,
                          NewBackground   = 0x9d,
                          SingleHeight    = 0x8c,
                          DoubleHeight    = 0x8d,
                          HoldGraphics    = 0x9e,
                          RelGraphics     = 0x9f
                         }controlCode;

/* Used to check which portion of a font character to be draw */
typedef struct rect {
   Uint8 x, y, w, h;
}rect;

typedef struct display {
   SDL_bool ended;
   SDL_Window *window;
   SDL_Renderer *render;
}display;

typedef struct RGBset {         /* Common format of SDL color */
  Uint8 r, g, b;
}RGBset;

/* Building status module. Contains functions (fread) to fetch the binary files
(ex, test.m7) and writing the status from binary file to (foreground color, 
word height, etc.) each cell. */
void readFileCodes(char *filename, cell cellarray[HEIGHT][WIDTH]);
void staArray(cell cellarray[HEIGHT][WIDTH], status *s);
void staInit(status *s);
void staMode(Uint8 code, status *s);
void staCellSet(cell *c, status *s);

/* Building cell module. Each cell has an array of FNTHEIGHT Uint16, which is 
regarded as a two-dimension array of bits. On account of the internal status 
of the cell, such as its graphics mode, height, etc. Cell module can fill 
contents of arrays */
void celLoadFont(Uint16 font[FNTMODE][FNTCHARS][FNTHEIGHT]);
void celReadFont(char *filename, Uint16 font[FNTCHARS][FNTHEIGHT]);
void celArrayPixel(Uint16 font[FNTMODE][FNTCHARS][FNTHEIGHT], cell cellarray[HEIGHT][WIDTH]);
void celSetPixel(Uint16 font[FNTCHARS][FNTHEIGHT], cell *c);
void celHoldGraphics(Uint16 *fonttile, cell *c, Uint16 *pixelarray);
void celFillArrayPixel(Uint16 *character, cell *c, rect *r);

/* Stage for drawing contents based on SDL. Initializing the frame (window),
and then using functions to render the contents of each array and cell. */
void disInit(char *filename, display *d);
void disRenderCellArray(display *d, cell cellarray[HEIGHT][WIDTH]);
void disRenderCell(display *d, cell *c, int w, int h);
void disDrawColorSet(display *d, color c);
void disHandleEvent(display *d);
