#include "teletext.h"
#define FILENAME "test.m7"

typedef enum result {fail, pass, error}result;

int test_myreadFileCodes();
int test_mystaArray_fgcolor();
int test_mystaArray_bgcolor();
int test_mystaArray_dismode();
int test_mystaArray_height();
int test_mystaArray_holdgraphics();
int test_mystaInit_fgcolor();
int test_mystaInit_bgcolor();
int test_mystaInit_dismode();
int test_mystaInit_height();
int test_mystaInit_holdgraphics();
int test_mystaMode_RedAlpha();
int test_mystaMode_GreenAlpha();
int test_mystaMode_YellowAlpha();
int test_mystaMode_BlueAlpha();
int test_mystaMode_MagentaAlpha();
int test_mystaMode_CyanAlpha();
int test_mystaMode_WhiteAlpha();
int test_mystaMode_RedGraphics();
int test_mystaMode_GreenGraphics();
int test_mystaMode_YellowGraphics();
int test_mystaMode_BlueGraphics();
int test_mystaMode_MagentaGraphics();
int test_mystaMode_CyanGraphics();
int test_mystaMode_WhiteGraphics();
int test_mystaMode_ContGraphics();
int test_mystaMode_SepGraphics();
int test_mystaMode_RedBackground();
int test_mystaMode_GreenBackground();
int test_mystaMode_YellowBackground();
int test_mystaMode_BlueBackground();
int test_mystaMode_MagentaBackground();
int test_mystaMode_CyanBackground();
int test_mystaMode_WhiteBackground();
int test_mystaMode_BlackBackground();
int test_mystaMode_SingleHeight();
int test_mystaMode_DoubleHeight();
int test_mystaMode_HoldGraphics();
int test_mystaMode_RelGraphics();
int test_mystaCellSet_fgcolor();
int test_mystaCellSet_bgcolor();
int test_mystaCellSet_dismode();
int test_mystaCellSet_height();
int test_mystaCellSet_holdgraphics();

int test_mycelLoadFont();
int test_mycelArrayPixel();
int test_mycelSetPixel_Alphanumeric();
int test_mycelSetPixel_Contiguous();
int test_mycelSetPixel_Separated();
int test_mycelHoldGraphics_NotHold();
int test_mycelHoldGraphics_Hold();
int test_mycelHoldGraphics_Recent();
int test_mycelFillArrayPixel_single();
int test_mycelFillArrayPixel_doubleBase();
int test_mycelFillArrayPixel_doubleTop();

int test_mydisInit();
int test_mydisRenderCellArray();
int test_mydisRenderCell();
int test_mydisDrawColorSet();
int test_mydisHandleEvent();

