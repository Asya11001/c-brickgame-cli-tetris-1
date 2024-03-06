#ifndef C7_BRICK_GAME_V_1_0_1_BRICK_GAME_TETRIS_COMMON_COLOR_HANDLER_H_
#define C7_BRICK_GAME_V_1_0_1_BRICK_GAME_TETRIS_COMMON_COLOR_HANDLER_H_

#include <ncurses.h>

#include "../backend/block/block.h"
#include "../common/colors.h"

#define BASE_COLOR_PAIR_INDEX (100)
#define RED_COLOR_PAIR_INDEX (BASE_COLOR_PAIR_INDEX + 0)
#define ORANGE_COLOR_PAIR_INDEX (BASE_COLOR_PAIR_INDEX + 1)
#define YELLOW_COLOR_PAIR_INDEX (BASE_COLOR_PAIR_INDEX + 2)
#define PINK_COLOR_PAIR_INDEX (BASE_COLOR_PAIR_INDEX + 3)
#define GREEN_COLOR_PAIR_INDEX (BASE_COLOR_PAIR_INDEX + 4)
#define BLUE_COLOR_PAIR_INDEX (BASE_COLOR_PAIR_INDEX + 5)
#define PURPLE_COLOR_PAIR_INDEX (BASE_COLOR_PAIR_INDEX + 6)

#define RECORD_1_COLOR_PAIR_INDEX (BASE_COLOR_PAIR_INDEX + 7)
#define RECORD_2_COLOR_PAIR_INDEX (BASE_COLOR_PAIR_INDEX + 8)
#define RECORD_3_COLOR_PAIR_INDEX (BASE_COLOR_PAIR_INDEX + 9)
#define RECORD_4_5_COLOR_PAIR_INDEX (BASE_COLOR_PAIR_INDEX + 10)

#define CUSTOM_COLOR_ORANGE (BASE_COLOR_PAIR_INDEX + 11)
#define CUSTOM_COLOR_PINK (BASE_COLOR_PAIR_INDEX + 12)
#define CUSTOM_COLOR_PURPLE (BASE_COLOR_PAIR_INDEX + 13)
#define CUSTOM_COLOR_BROWN (BASE_COLOR_PAIR_INDEX + 14)
#define CUSTOM_COLOR_SILVER (BASE_COLOR_PAIR_INDEX + 15)
#define CUSTOM_COLOR_YELLOW (BASE_COLOR_PAIR_INDEX + 16)
#define CUSTOM_COLOR_RED (BASE_COLOR_PAIR_INDEX + 17)
#define CUSTOM_COLOR_GREEN (BASE_COLOR_PAIR_INDEX + 18)
#define CUSTOM_COLOR_BLUE (BASE_COLOR_PAIR_INDEX + 19)
#define CUSTOM_COLOR_PREDICT (BASE_COLOR_PAIR_INDEX + 20)
#define CUSTOM_COLOR_GRAY (BASE_COLOR_PAIR_INDEX + 21)

#define INIT_COLOR_PAIR (BASE_COLOR_PAIR_INDEX + 22)
#define PREDICT_COLOR_PAIR_INDEX (BASE_COLOR_PAIR_INDEX + 23)

static const int kBlockColorPairsArray[] = {
    RED_COLOR_PAIR_INDEX,    ORANGE_COLOR_PAIR_INDEX,  YELLOW_COLOR_PAIR_INDEX,
    PINK_COLOR_PAIR_INDEX,   GREEN_COLOR_PAIR_INDEX,   BLUE_COLOR_PAIR_INDEX,
    PURPLE_COLOR_PAIR_INDEX, PREDICT_COLOR_PAIR_INDEX,
};

void InitGameColors();

#endif  // C7_BRICK_GAME_V_1_0_1_BRICK_GAME_TETRIS_COMMON_COLOR_HANDLER_H_
