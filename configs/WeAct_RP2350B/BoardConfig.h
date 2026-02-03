
#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#include "enums.pb.h"

#define BOARD_NAME "WeAct RP2350B Full"

// メインボタン配置 (必要最低限に絞り、重複を避けます)
#define GPIO_PIN_02 { .action = BUTTON_PRESS_UP,    .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_03 { .action = BUTTON_PRESS_DOWN,  .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_04 { .action = BUTTON_PRESS_RIGHT, .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_05 { .action = BUTTON_PRESS_LEFT,  .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_06 { .action = BUTTON_PRESS_B1,    .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_07 { .action = BUTTON_PRESS_B2,    .direction = GPIO_DIRECTION_INPUT }

// 設定モード起動用ピン (重要)
#define FORCED_SETUP_MODE_PIN 30 

// アナログ入力有効化
#define HAS_ANALOG_INPUT 1

// I2C設定 (ディスプレイ用)
#define HAS_I2C 1
#define I2C0_SDA 0
#define I2C0_SCL 1

// LED設定
#define BOARD_LEDS_PIN 28

#endif

