#include <SDL2/SDL.h>
#include "teletext.h"
#define ON_ERROR(STR) fprintf(stderr, STR); exit(EXIT_FAILURE)

void readFileCodes(char *filename, cell cellarray[HEIGHT][WIDTH])
{
   FILE *file = fopen(filename, "rb");
   Uint8 a[HEIGHT][WIDTH];
   int h, w;
/* fread: automatically index after reading the file system */
   size_t itemnum = fread(a, sizeof(Uint8), MAXIMUM, file);

   if(file == NULL) {
      ON_ERROR("ERROR: unable to open file:\nCheck filename and path.\n");
   }
   if(itemnum != MAXIMUM) {
      ON_ERROR("ERROR: Incorrect filesize.\nFailed to read file.\n");
   }
   fclose(file);

   for(h = 0 ; h < HEIGHT ; h++) {
      for(w = 0 ; w < WIDTH ; w++) {
/* Exchange (high) value if bit is 16bit ASCII */
         if(a[h][w] < BASEASCII) {
            a[h][w] = a[h][w] + BASEASCII;
         }
         cellarray[h][w].code = a[h][w];
      }
   }
}

void staArray(cell cellarray[HEIGHT][WIDTH], status *s)
{
   int h, w;

   for(h = 0 ; h < HEIGHT ; h++) {
/* Reinitialize every line into newline */
      staInit(s);
      for(w = 0 ; w < WIDTH ; w++) {
/* Set each code to each array */
         staMode(cellarray[h][w].code, s);
         if(h > 0 && s->height == doubleTop && cellarray[h - 1][w].s.height == doubleTop) {
            s->height = doubleBase;
         }
         staCellSet(&cellarray[h][w], s);
      }
   }
}

void staInit(status *s)
{
   s->fgcolor = white;
   s->bgcolor = black;
   s->dismode = alphanumeric;
   s->height = single;
   s->holdgraphics = release;
}

void staMode(Uint8 code, status *s)
{
   switch((controlCode)code) {
/* Alphanumeric color codes */
      case RedAlpha:
         s->dismode = alphanumeric;
         s->fgcolor = red;
         break;
      case GreenAlpha:
         s->dismode = alphanumeric;
         s->fgcolor = green;
         break;
      case YellowAlpha:
         s->dismode = alphanumeric;
         s->fgcolor = yellow;
         break;
      case BlueAlpha:
         s->dismode = alphanumeric;
         s->fgcolor = blue;
         break;
      case MagentaAlpha:
         s->dismode = alphanumeric;
         s->fgcolor = magenta;
         break;
      case CyanAlpha:
         s->dismode = alphanumeric;
         s->fgcolor = cyan;
         break;
      case WhiteAlpha:
         s->dismode = alphanumeric;
         s->fgcolor = white;
         break;
/* Graphics color codes */
      case RedGraphics:
         s->dismode = contiguous;
         s->fgcolor = red;
         break;
      case GreenGraphics:
         s->dismode = contiguous;
         s->fgcolor = green;
         break;
      case YellowGraphics:
         s->dismode = contiguous;
         s->fgcolor = yellow;
         break;
      case BlueGraphics:
         s->dismode = contiguous;
         s->fgcolor = blue;
         break;
      case MagentaGraphics:
         s->dismode = contiguous;
         s->fgcolor = magenta;
         break;
      case CyanGraphics:
         s->dismode = contiguous;
         s->fgcolor = cyan;
         break;
      case WhiteGraphics:
         s->dismode = contiguous;
         s->fgcolor = white;
         break;
/* Contiguous and separated graphics codes */
      case ContGraphics:
         s->dismode = contiguous;
         break;
      case SepGraphics:
         s->dismode = separated;
         break;
/* Re-set the background */
      case BlckBackground:
         s->bgcolor = black;
         break;
      case NewBackground:
         s->bgcolor = s->fgcolor;
         break;
/* Single and double height codes */
/* Double height works with both contiguous and separated graphics */
      case SingleHeight:
         s->height = single;
         break;
      case DoubleHeight:
         s->height = doubleTop;
         break;
/* Hold the graphics */
      case HoldGraphics:
         s->holdgraphics = hold;
         break;
/* Release the graphics */
      case RelGraphics:
         s->holdgraphics = release;
         break;
   }
}

void staCellSet(cell *c, status *s)
{
   c->s.fgcolor = s->fgcolor;
   c->s.bgcolor = s->bgcolor;
   c->s.dismode = s->dismode;
   c->s.height = s->height;
   c->s.holdgraphics = s->holdgraphics;
}

void celLoadFont(Uint16 font[FNTMODE][FNTCHARS][FNTHEIGHT])
{
   celReadFont(ALPHAFONT, font[alphanumeric]);
   celReadFont(CONTFONT, font[contiguous]);
   celReadFont(SEPFONT, font[separated]);
}

void celReadFont(char *filename, Uint16 font[FNTCHARS][FNTHEIGHT])
{
   FILE *file = fopen(filename, "rb");
   size_t itemnum = fread(font, sizeof(Uint16), FNTCHARS * FNTHEIGHT, file);

   if(file == NULL) {
      ON_ERROR("ERROR: unable to open file:\nCheck filename and path.\n");
   }
   if(itemnum != FNTCHARS * FNTHEIGHT) {
      ON_ERROR("ERROR: Failed to read font file\n");
   }
   fclose(file);
}

void celArrayPixel(Uint16 font[FNTMODE][FNTCHARS][FNTHEIGHT], cell cellarray[HEIGHT][WIDTH])
{
   int h, w;

   for(h = 0; h < HEIGHT; h++) {
      for(w = 0; w < WIDTH; w++) {
         celSetPixel(font[cellarray[h][w].s.dismode], &cellarray[h][w]);
      }
   }
}

void celSetPixel(Uint16 font[FNTCHARS][FNTHEIGHT], cell *c)
{
   Uint8 value;
   Uint16 pixelarray[FNTHEIGHT] = {0};
   static rect fontrect[RECTNUM] = {{0,             0, FNTWIDTH, FNTHEIGHT    },   /*Normal      */
                                    {0, FNTHEIGHT / 2, FNTWIDTH, FNTHEIGHT / 2},   /*DoubleBottom*/
                                    {0,             0, FNTWIDTH, FNTHEIGHT / 2}    /*DoubleTop   */
                                   };
   if(c->code > SPACE) {
      value = c->code - SPACE;
   }
   else {
      value = SPACE - SPACE;
   }
   celHoldGraphics(font[value], c, pixelarray);
   celFillArrayPixel(pixelarray, c, &fontrect[c->s.height]);
}

void celHoldGraphics(Uint16 *fonttile, cell *c, Uint16 *pixelarray)
{
   static Uint16 recent[FNTHEIGHT] = {0};
   static heightMode prevheight = single;
   static displayMode prevdismode = alphanumeric;

   if(prevdismode != c->s.dismode || prevheight != c->s.height) {
      memset(recent, 0, sizeof(Uint16) * FNTHEIGHT);
   }
   if(c->code < SPACE && c->s.holdgraphics == hold) {
      memcpy(pixelarray, recent, sizeof(Uint16) * FNTHEIGHT);
   }
   else {
      memcpy(pixelarray, fonttile, sizeof(Uint16) * FNTHEIGHT);
   }
   if(c->code > SPACE && c->s.dismode != alphanumeric) {
      memcpy(recent, fonttile, sizeof(Uint16) * FNTHEIGHT);
   }
   prevdismode = c->s.dismode;
   prevheight = c->s.height;
}

void celFillArrayPixel(Uint16 *character, cell *c, rect *r)
{
/* Vertical scaling factor(for double height) */
   unsigned int y, i, vscale = FNTHEIGHT / r->h;      

   for(y = 0; y < r->h; y++) {
      for(i = 0; i < vscale; i++) {
         c->ch[(y * vscale) + i] = character[y + r->y];
      }
   }
}

void disInit(char *filename, display *d)
{
   if(SDL_Init(SDL_INIT_VIDEO) != 0) {
      ON_ERROR("ERROR: SDL initialization failed\n");
   }
   d->ended = 0;
/* create a video window */
   d->window = SDL_CreateWindow(filename, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINWIDTH, WINHEIGHT, SDL_WINDOW_SHOWN);   /*SDL_WINDOW_RESIZABLE*/

   if(d->window == NULL) {
      ON_ERROR("ERROR: SDL Window initialization failed\n");
   }
/* flags: 0, or one or more SDL_RendererFlags */
   d->render = SDL_CreateRenderer(d->window, -1, SDL_RENDERER_SOFTWARE);
   if(d->render == NULL) {
      ON_ERROR("ERROR: SDL Renderer initialization failed\n");
   }
}

void disRenderCellArray(display *d, cell cellarray[HEIGHT][WIDTH])
{
   int h, w;

   for(h = 0; h < HEIGHT; h++) {
      for(w = 0; w < WIDTH; w++) {
         disRenderCell(d, &cellarray[h][w], w * FNTWIDTH, h * FNTHEIGHT);
         SDL_RenderPresent(d->render);
         SDL_Delay(0);
      }
   }
   SDL_RenderClear(d->render);
   if(SDL_RenderClear(d->render) != 0) {
      ON_ERROR("ERROR: Unable to clear render\n"); 
   }
}

void disRenderCell(display *d, cell *c, int w, int h)
{
   int x, y;

   for(y = 0; y < FNTHEIGHT; y++) {
      for(x = 0; x < FNTWIDTH; x++) {
         if(c->ch[y] >> (FNTWIDTH - 1 - x) & 1) {
            disDrawColorSet(d, c->s.fgcolor);
         }
         else {
            disDrawColorSet(d, c->s.bgcolor);
         }
         if(SDL_RenderDrawPoint(d->render, w + x, h + y) != 0){
            ON_ERROR("Unable to draw point\n"); 
         }
         SDL_RenderDrawPoint(d->render, w + x, h + y);
      }
   }
}

void disDrawColorSet(display *d, color c)
{
   static RGBset rgb[CLRNUM] = {{0  , 0  , 0  },   /* black   */
                                {RGB, 0  , 0  },   /* red     */
                                {0  , RGB, 0  },   /* green   */
                                {RGB, RGB, 0  },   /* yellow  */
                                {0  , 0  , RGB},   /* blue    */
                                {RGB, 0  , RGB},   /* magenta */
                                {0  , RGB, RGB},   /* cyan    */
                                {RGB, RGB, RGB}    /* white   */
                               };
   if(SDL_SetRenderDrawColor(d->render, 0, 0, 0, SDL_ALPHA_OPAQUE) != 0){
      ON_ERROR("Unable to draw color\n");
   }
   SDL_SetRenderDrawColor(d->render, rgb[c].r, rgb[c].g, rgb[c].b, SDL_ALPHA_OPAQUE);
}

void disHandleEvent(display *d)
{
   SDL_Event event;

   while(SDL_PollEvent(&event)) {
      switch(event.type) {
         case SDL_KEYDOWN:
            switch(event.key.keysym.sym) {
               case SDLK_ESCAPE:
                  d->ended = 1;
                  break;
               case SDLK_SPACE:
                  d->ended = 1;
                  break;
               case SDLK_RETURN:
                  d->ended = 1;
                  break;
            }
            break;
         default:
            break;
      }
   }
}
