#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#include "enums.pb.h"

#define BOARD_NAME "WeAct_RP2350B"

// 競合回避のため全て無効化
#define HAS_I2C 0
#define HAS_DISPLAY 0
#define HAS_TURBO 0
#define HAS_ANALOG_INPUT 1

// config_utils.cpp 等での「未定義エラー」を防ぐため、
// I2Cを0にしつつも、あえてダミーのピン番号（使用しないピン）を定義しておく
#define I2C0_SDA 31
#define I2C0_SCL 32
#define I2C1_SDA 33
#define I2C1_SCL 34

// 設定モード起動用ピン
#define FORCED_SETUP_MODE_PIN 30

#endif

