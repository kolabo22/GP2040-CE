#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#include "enums.pb.h"

#define BOARD_NAME "WeAct_RP2350B"

// エラー回避のため表示機能を無効化
#define HAS_I2C 0
#define DISPLAY_ENABLED 0
#define HAS_DISPLAY 0

// 設定モード起動用ピン
#define FORCED_SETUP_MODE_PIN 30

// 基本機能
#define HAS_ANALOG_INPUT 1

#endif

