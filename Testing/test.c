#include <stdio.h>
#include <stdlib.h>
#include <check.h>
#include <SDL2/SDL.h>
#include "test.h"
#define ON_ERROR(STR) fprintf(stderr, STR); exit(EXIT_FAILURE)

START_TEST(test_readFileCodes)
{
   fail_if(test_myreadFileCodes() != pass);
}
END_TEST

START_TEST(test_staArray_fgcolor)
{
   fail_if(test_mystaArray_fgcolor() != pass);
}
END_TEST

START_TEST(test_staArray_bgcolor)
{
   fail_if(test_mystaArray_bgcolor() != pass);
}
END_TEST

START_TEST(test_staArray_dismode)
{
   fail_if(test_mystaArray_dismode() != pass);
}
END_TEST

START_TEST(test_staArray_height)
{
   fail_if(test_mystaArray_height() != pass);
}
END_TEST

START_TEST(test_staArray_holdgraphics)
{
   fail_if(test_mystaArray_holdgraphics() != pass);
}
END_TEST

START_TEST(test_staInit_fgcolor)
{
   fail_if(test_mystaInit_fgcolor() != pass);
}
END_TEST

START_TEST(test_staInit_bgcolor)
{
   fail_if(test_mystaInit_bgcolor() != pass);
}
END_TEST

START_TEST(test_staInit_dismode)
{
   fail_if(test_mystaInit_dismode() != pass);
}
END_TEST

START_TEST(test_staInit_height)
{
   fail_if(test_mystaInit_height() != pass);
}
END_TEST

START_TEST(test_staInit_holdgraphics)
{
   fail_if(test_mystaInit_holdgraphics() != pass);
}
END_TEST

START_TEST(test_staMode_RedAlpha)
{
   fail_if(test_mystaMode_RedAlpha() != pass);
}
END_TEST

START_TEST(test_staMode_GreenAlpha)
{
   fail_if(test_mystaMode_GreenAlpha() != pass);
}
END_TEST

START_TEST(test_staMode_YellowAlpha)
{
   fail_if(test_mystaMode_YellowAlpha() != pass);
}
END_TEST

START_TEST(test_staMode_BlueAlpha)
{
   fail_if(test_mystaMode_BlueAlpha() != pass);
}
END_TEST

START_TEST(test_staMode_MagentaAlpha)
{
   fail_if(test_mystaMode_MagentaAlpha() != pass);
}
END_TEST

START_TEST(test_staMode_CyanAlpha)
{
   fail_if(test_mystaMode_CyanAlpha() != pass);
}
END_TEST

START_TEST(test_staMode_WhiteAlpha)
{
   fail_if(test_mystaMode_WhiteAlpha() != pass);
}
END_TEST

START_TEST(test_staMode_RedGraphics)
{
   fail_if(test_mystaMode_RedGraphics() != pass);
}
END_TEST

START_TEST(test_staMode_GreenGraphics)
{
   fail_if(test_mystaMode_GreenGraphics() != pass);
}
END_TEST

START_TEST(test_staMode_YellowGraphics)
{
   fail_if(test_mystaMode_YellowGraphics() != pass);
}
END_TEST

START_TEST(test_staMode_BlueGraphics)
{
   fail_if(test_mystaMode_BlueGraphics() != pass);
}
END_TEST

START_TEST(test_staMode_MagentaGraphics)
{
   fail_if(test_mystaMode_MagentaGraphics() != pass);
}
END_TEST

START_TEST(test_staMode_CyanGraphics)
{
   fail_if(test_mystaMode_CyanGraphics() != pass);
}
END_TEST

START_TEST(test_staMode_WhiteGraphics)
{
   fail_if(test_mystaMode_WhiteGraphics() != pass);
}
END_TEST

START_TEST(test_staMode_ContGraphics)
{
   fail_if(test_mystaMode_ContGraphics() != pass);
}
END_TEST

START_TEST(test_staMode_SepGraphics)
{
   fail_if(test_mystaMode_SepGraphics() != pass);
}
END_TEST

START_TEST(test_staMode_RedBackground)
{
   fail_if(test_mystaMode_RedBackground() != pass);
}
END_TEST

START_TEST(test_staMode_GreenBackground)
{
   fail_if(test_mystaMode_GreenBackground() != pass);
}
END_TEST

START_TEST(test_staMode_YellowBackground)
{
   fail_if(test_mystaMode_YellowBackground() != pass);
}
END_TEST

START_TEST(test_staMode_BlueBackground)
{
   fail_if(test_mystaMode_BlueBackground() != pass);
}
END_TEST

START_TEST(test_staMode_MagentaBackground)
{
   fail_if(test_mystaMode_MagentaBackground() != pass);
}
END_TEST

START_TEST(test_staMode_CyanBackground)
{
   fail_if(test_mystaMode_CyanBackground() != pass);
}
END_TEST

START_TEST(test_staMode_WhiteBackground)
{
   fail_if(test_mystaMode_WhiteBackground() != pass);
}
END_TEST

START_TEST(test_staMode_BlackBackground)
{
   fail_if(test_mystaMode_BlackBackground() != pass);
}
END_TEST

START_TEST(test_staMode_SingleHeight)
{
   fail_if(test_mystaMode_SingleHeight() != pass);
}
END_TEST

START_TEST(test_staMode_DoubleHeight)
{
   fail_if(test_mystaMode_DoubleHeight() != pass);
}
END_TEST

START_TEST(test_staMode_HoldGraphics)
{
   fail_if(test_mystaMode_HoldGraphics() != pass);
}
END_TEST

START_TEST(test_staMode_RelGraphics)
{
   fail_if(test_mystaMode_RelGraphics() != pass);
}
END_TEST

START_TEST(test_staCellSet_fgcolor)
{
   fail_if(test_mystaCellSet_fgcolor() != pass);
}
END_TEST

START_TEST(test_staCellSet_bgcolor)
{
   fail_if(test_mystaCellSet_bgcolor() != pass);
}
END_TEST

START_TEST(test_staCellSet_dismode)
{
   fail_if(test_mystaCellSet_dismode() != pass);
}
END_TEST

START_TEST(test_staCellSet_height)
{
   fail_if(test_mystaCellSet_height() != pass);
}
END_TEST

START_TEST(test_staCellSet_holdgraphics)
{
   fail_if(test_mystaCellSet_holdgraphics() != pass);
}
END_TEST

START_TEST(test_celLoadFont)
{
   fail_if(test_mycelLoadFont() != pass);
}
END_TEST

START_TEST(test_celArrayPixel)
{
   fail_if(test_mycelArrayPixel() != pass);
}
END_TEST

START_TEST(test_celSetPixel_Alphanumeric)
{
   fail_if(test_mycelSetPixel_Alphanumeric() != pass);
}
END_TEST

START_TEST(test_celSetPixel_Contiguous)
{
   fail_if(test_mycelSetPixel_Contiguous() != pass);
}
END_TEST

START_TEST(test_celSetPixel_Separated)
{
   fail_if(test_mycelSetPixel_Separated() != pass);
}
END_TEST

START_TEST(test_celHoldGraphics_NotHold)
{
   fail_if(test_mycelHoldGraphics_NotHold() != pass);
}
END_TEST

START_TEST(test_celHoldGraphics_Hold)
{
   fail_if(test_mycelHoldGraphics_Hold() != pass);
}
END_TEST

START_TEST(test_celHoldGraphics_Recent)
{
   fail_if(test_mycelHoldGraphics_Recent() != pass);
}
END_TEST

START_TEST(test_celFillArrayPixel_single)
{
   fail_if(test_mycelFillArrayPixel_single() != pass);
}
END_TEST

START_TEST(test_celFillArrayPixel_doubleBase)
{
   fail_if(test_mycelFillArrayPixel_doubleBase() != pass);
}
END_TEST

START_TEST(test_celFillArrayPixel_doubleTop)
{
   fail_if(test_mycelFillArrayPixel_doubleTop() != pass);
}
END_TEST

START_TEST(test_disInit)
{
   fail_if(test_mydisInit() != pass);
}
END_TEST

START_TEST(test_disRenderCellArray)
{
   fail_if(test_mydisRenderCellArray() != pass);
}
END_TEST

START_TEST(test_disRenderCell)
{
   fail_if(test_mydisRenderCell() != pass);
}
END_TEST

START_TEST(test_disDrawColorSet)
{
   fail_if(test_mydisDrawColorSet() != pass);
}
END_TEST

START_TEST(test_disHandleEvent)
{
   fail_if(test_mydisHandleEvent() != pass);
}
END_TEST

/************************************************************************/

int main(void)
{
   TCase *status, *cell, *display;
   Suite *suite_status, *suite_cell, *suite_display;
   SRunner *runner_status, *runner_cell, *runner_display;
   int fail_status, fail_cell, fail_display;

   status = tcase_create("");
   tcase_add_test(status, test_readFileCodes);
   tcase_add_test(status, test_staArray_fgcolor);
   tcase_add_test(status, test_staArray_bgcolor);
   tcase_add_test(status, test_staArray_dismode);
   tcase_add_test(status, test_staArray_height);
   tcase_add_test(status, test_staArray_holdgraphics);
   tcase_add_test(status, test_staInit_fgcolor);
   tcase_add_test(status, test_staInit_bgcolor);
   tcase_add_test(status, test_staInit_dismode);
   tcase_add_test(status, test_staInit_height);
   tcase_add_test(status, test_staInit_holdgraphics);
   tcase_add_test(status, test_staMode_RedAlpha);
   tcase_add_test(status, test_staMode_GreenAlpha);
   tcase_add_test(status, test_staMode_YellowAlpha);
   tcase_add_test(status, test_staMode_BlueAlpha);
   tcase_add_test(status, test_staMode_MagentaAlpha);
   tcase_add_test(status, test_staMode_CyanAlpha);
   tcase_add_test(status, test_staMode_WhiteAlpha);
   tcase_add_test(status, test_staMode_RedGraphics);
   tcase_add_test(status, test_staMode_GreenGraphics);
   tcase_add_test(status, test_staMode_YellowGraphics);
   tcase_add_test(status, test_staMode_BlueGraphics);
   tcase_add_test(status, test_staMode_MagentaGraphics);
   tcase_add_test(status, test_staMode_CyanGraphics);
   tcase_add_test(status, test_staMode_WhiteGraphics);
   tcase_add_test(status, test_staMode_ContGraphics);
   tcase_add_test(status, test_staMode_SepGraphics);
   tcase_add_test(status, test_staMode_RedBackground);
   tcase_add_test(status, test_staMode_GreenBackground);
   tcase_add_test(status, test_staMode_YellowBackground);
   tcase_add_test(status, test_staMode_BlueBackground);
   tcase_add_test(status, test_staMode_MagentaBackground);
   tcase_add_test(status, test_staMode_CyanBackground);
   tcase_add_test(status, test_staMode_WhiteBackground);
   tcase_add_test(status, test_staMode_BlackBackground);
   tcase_add_test(status, test_staMode_SingleHeight);
   tcase_add_test(status, test_staMode_DoubleHeight);
   tcase_add_test(status, test_staMode_HoldGraphics);
   tcase_add_test(status, test_staMode_RelGraphics);
   tcase_add_test(status, test_staCellSet_fgcolor);
   tcase_add_test(status, test_staCellSet_bgcolor);
   tcase_add_test(status, test_staCellSet_dismode);
   tcase_add_test(status, test_staCellSet_height);
   tcase_add_test(status, test_staCellSet_holdgraphics);
 
   suite_status = suite_create("Status Suite");
   suite_add_tcase(suite_status, status);
   runner_status = srunner_create(suite_status);
   srunner_run_all(runner_status, CK_VERBOSE);
   fail_status = srunner_ntests_failed(runner_status);
   srunner_free(runner_status);
   printf("\n");

   cell = tcase_create("");
   tcase_add_test(cell, test_celLoadFont);
   tcase_add_test(cell, test_celArrayPixel);
   tcase_add_test(cell, test_celSetPixel_Alphanumeric);
   tcase_add_test(cell, test_celSetPixel_Contiguous);
   tcase_add_test(cell, test_celSetPixel_Separated);
   tcase_add_test(cell, test_celHoldGraphics_NotHold);
   tcase_add_test(cell, test_celHoldGraphics_Hold);
   tcase_add_test(cell, test_celHoldGraphics_Recent);
   tcase_add_test(cell, test_celFillArrayPixel_single);
   tcase_add_test(cell, test_celFillArrayPixel_doubleBase);
   tcase_add_test(cell, test_celFillArrayPixel_doubleTop);

   suite_cell = suite_create("Cell Suite");
   suite_add_tcase(suite_cell, cell);
   runner_cell = srunner_create(suite_cell);
   srunner_run_all(runner_cell, CK_VERBOSE);
   fail_cell = srunner_ntests_failed(runner_cell);
   srunner_free(runner_cell);
   printf("\n");

   display = tcase_create("");
   tcase_add_test(display, test_disInit);
   tcase_add_test(display, test_disRenderCellArray);
   tcase_add_test(display, test_disRenderCell);
   tcase_add_test(display, test_disDrawColorSet);
   tcase_add_test(display, test_disHandleEvent);

   suite_display = suite_create("Display Suite");
   suite_add_tcase(suite_display, display);
   runner_display = srunner_create(suite_display);
   srunner_run_all(runner_display, CK_VERBOSE);
   fail_display = srunner_ntests_failed(runner_display);
   srunner_free(runner_display);

   return (fail_status == 0 && fail_cell == 0 && fail_display == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

/**********************************************/
int test_myreadFileCodes()
{
   int i, j;
   FILE *file = fopen(FILENAME, "rb");
   Uint8 a[HEIGHT][WIDTH];
   cell cellarray[HEIGHT][WIDTH];
   fread(a, sizeof(Uint8), MAXIMUM, file);

   readFileCodes(FILENAME, cellarray);
   for(i = 0 ; i < HEIGHT ; i++) {
      for(j = 0 ; j < WIDTH ; j++) {
         if(cellarray[i][j].code != a[i][j]) {
            return fail;
         }
      }
   }
   fclose(file);
   return pass;
}

int test_mystaArray_fgcolor()
{
   status curstate;
   cell cellarray[HEIGHT][WIDTH];
   
   readFileCodes(FILENAME, cellarray);
   staArray(cellarray, &curstate);

   if(cellarray[0][20].s.fgcolor  != white ||
      cellarray[5][20].s.fgcolor  != red || 
      cellarray[6][20].s.fgcolor  != green || 
      cellarray[7][20].s.fgcolor  != yellow || 
      cellarray[8][20].s.fgcolor  != magenta || 
      cellarray[10][20].s.fgcolor != blue ||
      cellarray[11][20].s.fgcolor != cyan) {
      return fail;
   }
   return pass;
}

int test_mystaArray_bgcolor()
{
   status curstate;
   cell cellarray[HEIGHT][WIDTH];
   
   readFileCodes(FILENAME, cellarray);
   staArray(cellarray, &curstate);

   if(cellarray[13][11].s.bgcolor != cyan || 
      cellarray[15][11].s.bgcolor != blue || 
      cellarray[15][22].s.bgcolor != yellow ||
      cellarray[16][22].s.bgcolor != green) {
      return fail;
   }
   return pass;
}

int test_mystaArray_dismode()
{
   status curstate;
   cell cellarray[HEIGHT][WIDTH];
   
   readFileCodes(FILENAME, cellarray);
   staArray(cellarray, &curstate);

   if(cellarray[0][15].s.dismode != alphanumeric || 
      cellarray[6][15].s.dismode != alphanumeric || 
      cellarray[13][15].s.dismode != alphanumeric ||
      cellarray[18][5].s.dismode != contiguous || 
      cellarray[18][30].s.dismode != contiguous || 
      cellarray[18][15].s.dismode != separated ||
      cellarray[24][5].s.dismode != contiguous) {
      return fail;
   }
   return pass;
}

int test_mystaArray_height()
{
   status curstate;
   cell cellarray[HEIGHT][WIDTH];
   
   readFileCodes(FILENAME, cellarray);
   staArray(cellarray, &curstate);

   if(cellarray[2][15].s.height != doubleTop || 
      cellarray[3][15].s.height != doubleBase || 
      cellarray[15][31].s.height != single || 
      cellarray[16][31].s.height != doubleTop ||  
      cellarray[16][36].s.height != doubleBase) {
      return fail;
   }
   return pass;
}

int test_mystaArray_holdgraphics()
{
   status curstate;
   cell cellarray[HEIGHT][WIDTH];
   
   readFileCodes(FILENAME, cellarray);
   staArray(cellarray, &curstate);

   if(cellarray[2][30].s.holdgraphics != release ||  
      cellarray[18][32].s.holdgraphics != hold || 
      cellarray[20][29].s.holdgraphics != release) {
      return fail;
   }
   return pass;
}

int test_mystaInit_fgcolor()
{
   status curstate;
   staInit(&curstate);

   if(curstate.fgcolor != white) {
      return fail;
   }
   return pass;
}

int test_mystaInit_bgcolor()
{
   status curstate;
   staInit(&curstate);

   if(curstate.bgcolor != black) {
      return fail;
   }
   return pass;
}

int test_mystaInit_dismode()
{
   status curstate;
   staInit(&curstate);

   if(curstate.dismode != alphanumeric) {
      return fail;
   }
   return pass;
}

int test_mystaInit_height()
{
   status curstate;
   staInit(&curstate);

   if(curstate.height != single) {
      return fail;
   }
   return pass;
}

int test_mystaInit_holdgraphics()
{
   status curstate;
   staInit(&curstate);

   if(curstate.holdgraphics != release) {
      return fail;
   }
   return pass;
}

/* Alphanumeric Test */
int test_mystaMode_RedAlpha()
{
   status curstate;

   staMode(RedAlpha, &curstate);
   if(curstate.dismode != alphanumeric || curstate.fgcolor != red) {
      return fail;
   }
   return pass;
}

int test_mystaMode_GreenAlpha()
{
   status curstate;

   staMode(GreenAlpha, &curstate);
   if(curstate.dismode != alphanumeric || curstate.fgcolor != green) {
      return fail;
   }
   return pass;
}

int test_mystaMode_YellowAlpha()
{
   status curstate;

   staMode(YellowAlpha, &curstate);
   if(curstate.dismode != alphanumeric || curstate.fgcolor != yellow) {
      return fail;
   }
   return pass;
}

int test_mystaMode_BlueAlpha()
{
   status curstate;


   staMode(BlueAlpha, &curstate);
   if(curstate.dismode != alphanumeric || curstate.fgcolor != blue) {
      return fail;
   }
   return pass;
}

int test_mystaMode_MagentaAlpha()
{
   status curstate;

   staMode(MagentaAlpha, &curstate);
   if(curstate.dismode != alphanumeric || curstate.fgcolor != magenta) {
      return fail;
   }
   return pass;
}

int test_mystaMode_CyanAlpha()
{
   status curstate;

   staMode(CyanAlpha, &curstate);
   if(curstate.dismode != alphanumeric || curstate.fgcolor != cyan) {
      return fail;
   }
   return pass;
}

int test_mystaMode_WhiteAlpha()
{
   status curstate;

   staMode(WhiteAlpha, &curstate);
   if(curstate.dismode != alphanumeric || curstate.fgcolor != white) {
      return fail;
   }
   return pass;
}

/* Graphics Test */
int test_mystaMode_RedGraphics()
{
   status curstate;

   staMode(RedGraphics, &curstate);
   if(curstate.dismode != contiguous || curstate.fgcolor != red) {
      return fail;
   }
   return pass;
}

int test_mystaMode_GreenGraphics()
{
   status curstate;

   staMode(GreenGraphics, &curstate);
   if(curstate.dismode != contiguous || curstate.fgcolor != green) {
      return fail;
   }
   return pass;
}

int test_mystaMode_YellowGraphics()
{
   status curstate;

   staMode(YellowGraphics, &curstate);
   if(curstate.dismode != contiguous || curstate.fgcolor != yellow) {
      return fail;
   }
   return pass;
}

int test_mystaMode_BlueGraphics()
{
   status curstate;

   staMode(BlueGraphics, &curstate);
   if(curstate.dismode != contiguous || curstate.fgcolor != blue) {
      return fail;
   }
   return pass;
}

int test_mystaMode_MagentaGraphics()
{
   status curstate;

   staMode(MagentaGraphics, &curstate);
   if(curstate.dismode != contiguous || curstate.fgcolor != magenta) {
      return fail;
   }
   return pass;
}

int test_mystaMode_CyanGraphics()
{
   status curstate;

   staMode(CyanGraphics, &curstate);
   if(curstate.dismode != contiguous || curstate.fgcolor != cyan) {
      return fail;
   }
   return pass;
}

int test_mystaMode_WhiteGraphics()
{
   status curstate;

   staMode(WhiteGraphics, &curstate);
   if(curstate.dismode != contiguous || curstate.fgcolor != white) {
      return fail;
   }
   return pass;
}

/* Contiguous Seperated */
int test_mystaMode_ContGraphics()
{
   status curstate;

   staMode(ContGraphics, &curstate);
   if(curstate.dismode != contiguous) {
      return fail;
   }
   return pass;
}
int test_mystaMode_SepGraphics()
{
   status curstate;

   staMode(SepGraphics, &curstate);
   if(curstate.dismode != separated) {
      return fail;
   }
   return pass;
}

/* Background Color */
int test_mystaMode_RedBackground()
{
   status curstate;

   staMode(RedAlpha, &curstate);   /* s->bgcolor = s->fgcolor */
   staMode(NewBackground, &curstate);
   if(curstate.bgcolor != red) {
      return fail;
   }
   return pass;
}

int test_mystaMode_GreenBackground()
{
   status curstate;

   staMode(GreenAlpha, &curstate);
   staMode(NewBackground, &curstate);
   if(curstate.bgcolor != green) {
      return fail;
   }
   return pass;
}

int test_mystaMode_YellowBackground()
{
   status curstate;

   staMode(YellowAlpha, &curstate);
   staMode(NewBackground, &curstate);
   if(curstate.bgcolor != yellow) {
      return fail;
   }
   return pass;
}

int test_mystaMode_BlueBackground()
{
   status curstate;

   staMode(BlueAlpha, &curstate);
   staMode(NewBackground, &curstate);
   if(curstate.bgcolor != blue) {
      return fail;
   }
   return pass;
}

int test_mystaMode_MagentaBackground()
{
   status curstate;

   staMode(MagentaAlpha, &curstate);
   staMode(NewBackground, &curstate);
   if(curstate.bgcolor != magenta) {
      return fail;
   }
   return pass;
}

int test_mystaMode_CyanBackground()
{
   status curstate;

   staMode(CyanAlpha, &curstate);
   staMode(NewBackground, &curstate);
   if(curstate.bgcolor != cyan) {
      return fail;
   }
   return pass;
}

int test_mystaMode_WhiteBackground()
{
   status curstate;

   staMode(WhiteAlpha, &curstate);
   staMode(NewBackground, &curstate);
   if(curstate.bgcolor != white) {
      return fail;
   }
   return pass;
}

int test_mystaMode_BlackBackground()
{
   status curstate;

   staMode(BlckBackground, &curstate);
   if(curstate.bgcolor != black) {
      return fail;
   }
   return pass;
}

/* Single Double */
int test_mystaMode_SingleHeight()
{
   status curstate;
   
   staMode(SingleHeight, &curstate);
   if(curstate.height != single) {
      return fail;
   }
   return pass;
}

int test_mystaMode_DoubleHeight()
{
   status curstate;
   
   staMode(DoubleHeight, &curstate);
   if(curstate.height != doubleTop) {
      return fail;
   }
   return pass;
}

/* Hold Release */
int test_mystaMode_HoldGraphics()
{
   status curstate;
   
   staMode(HoldGraphics, &curstate);
   if(curstate.holdgraphics != hold) {
      return fail;
   }
   return pass;
}

int test_mystaMode_RelGraphics()
{
   status curstate;
   
   staMode(RelGraphics, &curstate);
   if(curstate.holdgraphics != release) {
      return fail;
   }
   return pass;
}

int test_mystaCellSet_fgcolor()
{
   status curstate;
   cell cellarray;

   staInit(&curstate);
   staCellSet(&cellarray, &curstate);
   if(cellarray.s.fgcolor != white) {
      return fail;
   }
   return pass;
}
 
int test_mystaCellSet_bgcolor()
{
   status curstate;
   cell cellarray;

   staInit(&curstate);
   staCellSet(&cellarray, &curstate);
   if(cellarray.s.bgcolor != black) {
      return fail;
   }
   return pass;
}
 
int test_mystaCellSet_dismode()
{
   status curstate;
   cell cellarray;

   staInit(&curstate);
   staCellSet(&cellarray, &curstate);
   if(cellarray.s.dismode != alphanumeric) {
      return fail;
   }
   return pass;
}
 
int test_mystaCellSet_height()
{
   status curstate;
   cell cellarray;

   staInit(&curstate);
   staCellSet(&cellarray, &curstate);
   if(cellarray.s.height != single) {
      return fail;
   }
   return pass;
}
 
int test_mystaCellSet_holdgraphics()
{
   status curstate;
   cell cellarray;

   staInit(&curstate);
   staCellSet(&cellarray, &curstate);
   if(cellarray.s.holdgraphics != release) {
      return fail;
   }
   return pass;
}

/**********************************************/
int test_mycelLoadFont()
{
   int i, j;
   FILE *file = fopen(ALPHAFONT, "rb");
   Uint16 data[FNTCHARS][FNTHEIGHT];
   Uint16 font[FNTCHARS][FNTHEIGHT];
   fread(data, sizeof(Uint16), FNTCHARS * FNTHEIGHT, file);

   celReadFont(ALPHAFONT, font);
   for(i = 0 ; i < FNTCHARS ; i++) {
      for(j = 0 ; j < FNTHEIGHT ; j++) {
         if(font[i][j] != data[i][j]) {
            return fail;
         }
      }
   }
   fclose(file);
   return pass;
}

int test_mycelArrayPixel()
{
   status curstate;
   cell cellarray[HEIGHT][WIDTH];
   Uint16 font[FNTMODE][FNTCHARS][FNTHEIGHT];

   readFileCodes(FILENAME, cellarray);
   celLoadFont(font);
   staArray(cellarray, &curstate);
   celArrayPixel(font, cellarray);
   if(cellarray[2][15].s.height != doubleTop || 
      cellarray[6][15].s.dismode != alphanumeric || 
      cellarray[18][32].s.holdgraphics != hold) {
      return fail;
   }
   return pass;
}

int test_mycelSetPixel_Alphanumeric()
{
   cell cellarray;
   Uint16 font[FNTCHARS][FNTHEIGHT];

   staInit(&cellarray.s);
   cellarray.code = 0xC2;  /* A */
   celReadFont(ALPHAFONT, font); 
   celSetPixel(font, &cellarray);
   if(memcmp(cellarray.ch, font[34], sizeof(Uint16) * FNTHEIGHT) != 0) {
      return fail;
   }
   return pass;
}

int test_mycelSetPixel_Contiguous()
{
   cell cellarray;
   Uint16 font[FNTCHARS][FNTHEIGHT];

   staInit(&cellarray.s);
   cellarray.code = 0xC2;
   celReadFont(CONTFONT, font); 
   celSetPixel(font, &cellarray);
   if(memcmp(cellarray.ch, font[34], sizeof(Uint16) * FNTHEIGHT) != 0) {
      return fail;
   }
   return pass;
}

int test_mycelSetPixel_Separated()
{
   cell cellarray;
   Uint16 font[FNTCHARS][FNTHEIGHT];

   staInit(&cellarray.s);
   cellarray.code = 0xC2;
   celReadFont(SEPFONT, font); 
   celSetPixel(font, &cellarray);
   if(memcmp(cellarray.ch, font[34], sizeof(Uint16) * FNTHEIGHT) != 0) {
      return fail;
   }
   return pass;
}

int test_mycelHoldGraphics_NotHold()
{
   cell cellarray;
   Uint16 pixelarray[FNTHEIGHT];
   Uint16 fonttile[FNTHEIGHT] = {0xFFFF, 0xF485, 0x3456, 0x1234,
                                 0x0000, 0x1111, 0x2222, 0x3333,
                                 0x4444, 0xFF11, 0x00FF, 0xFF00,
                                 0x5566, 0x4444, 0xEEEE, 0xABAB,
                                 0xCAFE, 0xFACE
                                }; 
   staInit(&cellarray.s);
   celHoldGraphics(fonttile, &cellarray, pixelarray);
   if(memcmp(fonttile, pixelarray, sizeof(Uint16) * FNTHEIGHT) == 0) {
      return pass;
   }
   return fail;
}

int test_mycelHoldGraphics_Hold()
{
   cell cellarray;
   Uint16 pixelarray[FNTHEIGHT];
   Uint16 resultcomp[FNTHEIGHT] = {0};
   Uint16 fonttile[FNTHEIGHT] = {0xFFFF, 0xF485, 0x3456, 0x1234,
                                 0x0000, 0x1111, 0x2222, 0x3333,
                                 0x4444, 0xFF11, 0x00FF, 0xFF00,
                                 0x5566, 0x4444, 0xEEEE, 0xABAB,
                                 0xCAFE, 0xFACE
                                }; 
   staInit(&cellarray.s);
   cellarray.s.holdgraphics = hold;
   cellarray.code = SPACE-SPACE;
   celHoldGraphics(fonttile, &cellarray, pixelarray);
   if(memcmp(resultcomp, pixelarray, sizeof(Uint16) * FNTHEIGHT) == 0) {
      return pass;
   }
   return fail;
}

int test_mycelHoldGraphics_Recent()
{
   cell cellarray, d;
   Uint16 pixelarray[FNTHEIGHT];
   Uint16 fonttile[FNTHEIGHT] = {0xFFFF, 0xF485, 0x3456, 0x1234,
                                 0x0000, 0x1111, 0x2222, 0x3333,
                                 0x4444, 0xFF11, 0x00FF, 0xFF00,
                                 0x5566, 0x4444, 0xEEEE, 0xABAB,
                                 0xCAFE, 0xFACE
                                };
   Uint16 wrongtile[FNTHEIGHT] = {0x0001, 0x0001, 0x0001, 0x0001,
                                  0x0001, 0x0001, 0x0001, 0x0001,
                                  0x0001, 0x0001, 0x0001, 0x0001,
                                  0x0001, 0x0001, 0x0001, 0x0001,
                                  0x0001, 0x0001
                                 };
   staInit(&cellarray.s);
   cellarray.s.holdgraphics = hold;
   cellarray.s.dismode = contiguous;
   cellarray.code = SPACE + 1;
   staInit(&d.s);
   d.s.holdgraphics = hold;
   d.s.dismode = contiguous;
   d.code = SPACE - 1;
   celHoldGraphics(fonttile, &cellarray, pixelarray);
   celHoldGraphics(wrongtile, &d, pixelarray);
   if(memcmp(fonttile, pixelarray, sizeof(Uint16) * FNTHEIGHT) == 0) {
      return pass;
   }
   return fail;
}

int test_mycelFillArrayPixel_single()
{
   cell cellarray;
   rect r = {0, 0, FNTWIDTH, FNTHEIGHT};
   Uint16 fonttile[FNTHEIGHT] = {0xFFFF, 0xF485, 0x3456, 0x1234,
                                 0x0000, 0x1111, 0x2222, 0x3333,
                                 0x4444, 0xFF11, 0x00FF, 0xFF00,
                                 0x5566, 0x4444, 0xEEEE, 0xABAB,
                                 0xCAFE, 0xFACE
                                };  
   celFillArrayPixel(fonttile, &cellarray, &r);
   if(memcmp(cellarray.ch, fonttile, sizeof(Uint16) * FNTHEIGHT) == 0) {
      return pass;
   }
   return fail;
}

int test_mycelFillArrayPixel_doubleBase()
{
   cell cellarray;
   rect r = {0, FNTHEIGHT / 2, FNTWIDTH, FNTHEIGHT / 2};
   Uint16 fonttile[FNTHEIGHT] = {0xFFFF, 0xF485, 0x3456, 0x1234,
                                 0x0000, 0x1111, 0x2222, 0x3333,
                                 0x4444, 0xFF11, 0x00FF, 0xFF00,
                                 0x5566, 0x4444, 0xEEEE, 0xABAB,
                                 0xCAFE, 0xFACE
                                };
   Uint16 result[FNTHEIGHT] = {0xFF11, 0xFF11, 0x00FF, 0x00FF,
                               0xFF00, 0xFF00, 0x5566, 0x5566,
                               0x4444, 0x4444, 0xEEEE, 0xEEEE,
                               0xABAB, 0xABAB, 0xCAFE, 0xCAFE,
                               0xFACE, 0xFACE
                              };
   celFillArrayPixel(fonttile, &cellarray, &r);
   if(memcmp(cellarray.ch, result, sizeof(Uint16) * FNTHEIGHT) == 0) {
      return pass;
   }
   return fail;
}
int test_mycelFillArrayPixel_doubleTop()
{
   cell cellarray;
   rect r = {0, 0, FNTWIDTH, FNTHEIGHT / 2};
   Uint16 fonttile[FNTHEIGHT] = {0xFFFF, 0xF485, 0x3456, 0x1234,
                                 0x0000, 0x1111, 0x2222, 0x3333,
                                 0x4444, 0xFF11, 0x00FF, 0xFF00,
                                 0x5566, 0x4444, 0xEEEE, 0xABAB,
                                 0xCAFE, 0xFACE
                                };
   Uint16 result[FNTHEIGHT] = {0xFFFF, 0xFFFF, 0xF485, 0xF485,
                               0x3456, 0x3456, 0x1234, 0x1234,
                               0x0000, 0x0000, 0x1111, 0x1111,
                               0x2222, 0x2222, 0x3333, 0x3333,
                               0x4444, 0x4444
                              };
   celFillArrayPixel(fonttile, &cellarray, &r);
   if(memcmp(cellarray.ch, result, sizeof(Uint16) * FNTHEIGHT) == 0) {
      return pass;
   }
   return fail;
}

/**********************************************/
int test_mydisInit()
{
   display d;

   disInit(FILENAME, &d);
   if(d.ended != 0 || 
      d.window == NULL || 
      d.render == NULL) {
      return fail;
   }
   return pass;
}

int test_mydisRenderCellArray()
{
   status curstate;
   cell cellarray[HEIGHT][WIDTH];
   display d;
   Uint16 font[FNTMODE][FNTCHARS][FNTHEIGHT];

   readFileCodes(FILENAME, cellarray);
   celLoadFont(font);
   staArray(cellarray, &curstate);
   celArrayPixel(font, cellarray);
   disInit(FILENAME, &d);
   disRenderCellArray(&d, cellarray);
   return pass;
}

int test_mydisRenderCell()
{
   status curstate;
   cell cellarray[HEIGHT][WIDTH];
   display d;
   Uint16 font[FNTMODE][FNTCHARS][FNTHEIGHT];

   readFileCodes(FILENAME, cellarray);
   celLoadFont(font);
   staArray(cellarray, &curstate);
   celArrayPixel(font, cellarray);
   disInit(FILENAME, &d);
   disRenderCellArray(&d, cellarray);
   return pass;
}

int test_mydisDrawColorSet()
{
   status curstate;
   cell cellarray[HEIGHT][WIDTH];
   display d;
   Uint16 font[FNTMODE][FNTCHARS][FNTHEIGHT];

   readFileCodes(FILENAME, cellarray);
   celLoadFont(font);
   staArray(cellarray, &curstate);
   celArrayPixel(font, cellarray);
   disInit(FILENAME, &d);
   disRenderCellArray(&d, cellarray);
   return pass;
}

int test_mydisHandleEvent()
{
   status curstate;
   cell cellarray[HEIGHT][WIDTH];
   display d;
   Uint16 font[FNTMODE][FNTCHARS][FNTHEIGHT];

   readFileCodes(FILENAME, cellarray);
   celLoadFont(font);
   staArray(cellarray, &curstate);
   celArrayPixel(font, cellarray);
   disInit(FILENAME, &d);
   disRenderCellArray(&d, cellarray);
   do {
      disHandleEvent(&d);
   }while(d.ended != 0);
   if(d.ended != 0) {
      return fail;
   }
   return pass;
}
