#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#include "enums.pb.h"

#define BOARD_NAME "WeAct_RP2350B"

// 最小限の「設定モード用ピン」のみ定義
#define FORCED_SETUP_MODE_PIN 30

// 基本機能の有効化のみ
#define HAS_ANALOG_INPUT 1
#define HAS_I2C 1

#endif

