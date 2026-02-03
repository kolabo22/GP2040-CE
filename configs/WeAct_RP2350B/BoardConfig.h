#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#include "enums.pb.h"

#define BOARD_NAME "WeAct_RP2350B"

// エラー回避のためTurbo機能を無効化
#define HAS_TURBO 0

// I2Cをシステム定義上は生かしつつ、物理動作をオフにする
#define HAS_I2C 1
#define I2C0_ENABLED 0
#define I2C1_ENABLED 0
#define DISPLAY_ENABLED 0
#define HAS_DISPLAY 0

// ピンに -1 を設定して競合を回避
#define I2C0_SDA -1
#define I2C0_SCL -1
#define I2C1_SDA -1
#define I2C1_SCL -1

// セットアップモード起動ピン (RP2350B GPIO 30)
#define FORCED_SETUP_MODE_PIN 30

// 基本機能
#define HAS_ANALOG_INPUT 1

#endif
