#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#define ON_ERROR(STR) fprintf(stderr, STR); exit(EXIT_FAILURE)
#define SPACE 0xA0 
#define BLASTBEGIN 0xC0 
#define BLASTEND 0xDF
#define FNTHEIGHT 18
#define FNTCHARS 96
#define SIXELHEIGHT FNTHEIGHT/3
#define SIXELCNT 6
#define SIXELCOLS 2
#define SIXELROWS 3
#define PIXELROWCONT 0xFF      /* 1111 1111 */
#define PIXELROWSEP  0x7E      /* 0111 1110 */
#define ALPHAFONT "font/m7fixed.fnt"
#define CONTFONT "font/m7contiguous.fnt"
#define SEPFONT "font/m7separated.fnt"

typedef unsigned char Uint8;          /* Use the length of 8 bit, 0 - 256 */
typedef unsigned short Uint16;        /* Use the length of 16 bit, 0 - 65534 */

typedef enum sixel {off, on}sixel;
typedef enum sixelcol {left, right}sixelcol;
typedef enum sixelrow {top, mid, bottom}sixelrow;
enum sixelrect {l_top = 0, r_top = 1,
                l_mid = 2, r_mid = 3,
                l_bot = 4, r_bot = 6
               };

void readFont(Uint16 font[FNTCHARS][FNTHEIGHT], char *filename);
void createFont(Uint16 font[FNTCHARS][FNTHEIGHT], Uint8 *pixelarray, char *filename);
void editChar(Uint16 *character, unsigned int i, Uint8 *pixelarray);
void clearChar(Uint16 character[FNTHEIGHT]);
void writeSixel(Uint16* character, sixel sixels[SIXELROWS][SIXELCOLS], Uint8 *pixelarray);
void writeFont(Uint16 font[FNTCHARS][FNTHEIGHT], char *filename);
