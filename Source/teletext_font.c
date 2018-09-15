#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "teletext_font.h"
#define ON_ERROR(STR) fprintf(stderr, STR); exit(EXIT_FAILURE)

int main(void)
{
   Uint16 font[FNTCHARS][FNTHEIGHT];
   Uint8 contiguous[SIXELHEIGHT] = {PIXELROWCONT, 
                                    PIXELROWCONT, 
                                    PIXELROWCONT, 
                                    PIXELROWCONT, 
                                    PIXELROWCONT, 
                                    PIXELROWCONT
                                   };
   Uint8 separated[SIXELHEIGHT] = {0, 
                                   PIXELROWSEP,
                                   PIXELROWSEP,
                                   PIXELROWSEP,
                                   PIXELROWSEP,
                                   0
                                  };
  
/* Load the m7fixed.fnt to let the blast-through letters copy from it */
   readFont(font, ALPHAFONT);
   createFont(font, contiguous, CONTFONT);
   createFont(font, separated, SEPFONT);

   return 0;
}

void readFont(Uint16 font[FNTCHARS][FNTHEIGHT], char *filename)
{
   FILE *file = fopen(filename, "rb");
   size_t itemnum = fread(font, sizeof(Uint16), FNTCHARS * FNTHEIGHT, file);

   if(file == NULL) {
      ON_ERROR("ERROR: Failed to open file:\nCheck filename and path.\n");
   }

   if(itemnum != FNTCHARS * FNTHEIGHT) {
      ON_ERROR("ERROR: Failed to read font file\n");
   }
   fclose(file); 
}

void createFont(Uint16 font[FNTCHARS][FNTHEIGHT], Uint8 *pixelarray, char *filename)
{
   unsigned int i;

   for(i = 0; i < FNTCHARS; i++) {
      editChar(font[i], i + SPACE, pixelarray);
   }
   writeFont(font, filename); 
   fprintf(stdout,"Font be written to %s\n", filename);
}

void editChar(Uint16 *character, unsigned int i, Uint8 *pixelarray)
{
   sixel sixels[SIXELROWS][SIXELCOLS] = {{off}};

   if((i >> l_top) & 1) {
      sixels[top][left] = on;
   }
   if((i >> r_top) & 1) {
      sixels[top][right] = on;
   }
   if((i >> l_mid) & 1) {
      sixels[mid][left] = on;
   }
   if((i >> r_mid) & 1) {
      sixels[mid][right] = on;
   }
   if((i >> l_bot) & 1) {
      sixels[bottom][left] = on;
   }
   if((i >> r_bot) & 1) {
      sixels[bottom][right] = on;
   }
   if(i < BLASTBEGIN || i > BLASTEND) {
      clearChar(character);
      writeSixel(character, sixels, pixelarray);
   }
}

void clearChar(Uint16 *character)
{
   int h;

   for(h = 0; h < FNTHEIGHT; h++) {
      character[h] = 0;
   }
}

void writeSixel(Uint16* character, sixel sixels[SIXELROWS][SIXELCOLS], Uint8 *pixelarray)
{
   int i;
   sixelcol c;
   sixelrow r;

   for(r = 0; r < SIXELROWS; r++) {
      for(c = 0; c < SIXELCOLS; c++) {
         if(sixels[r][c] == on) {
            for(i = 0; i < SIXELHEIGHT; i++) {
               character[i +(SIXELHEIGHT * r)] |= (pixelarray[i] << ((1 - c) * CHAR_BIT));
            }
         }
      }
   }
}

void writeFont(Uint16 font[FNTCHARS][FNTHEIGHT], char *filename)
{
   FILE *file = fopen(filename, "wb");
   size_t itemnum = fwrite(font, sizeof(Uint16), FNTCHARS * FNTHEIGHT, file);

   if(itemnum != FNTCHARS * FNTHEIGHT) {
      ON_ERROR("ERROR: Failed to write font file\n");
   }
   fclose(file);
}
