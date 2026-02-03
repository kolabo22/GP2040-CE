#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#include "enums.pb.h"

#define BOARD_NAME "WeAct RP2350B Full"

// メインボタン配置 (最新の構造体形式)
#define GPIO_PIN_02 { .action = BUTTON_PRESS_UP,    .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_03 { .action = BUTTON_PRESS_DOWN,  .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_04 { .action = BUTTON_PRESS_RIGHT, .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_05 { .action = BUTTON_PRESS_LEFT,  .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_06 { .action = BUTTON_PRESS_B1,    .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_07 { .action = BUTTON_PRESS_B2,    .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_08 { .action = BUTTON_PRESS_R2,    .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_09 { .action = BUTTON_PRESS_L2,    .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_10 { .action = BUTTON_PRESS_B3,    .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_11 { .action = BUTTON_PRESS_B4,    .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_12 { .action = BUTTON_PRESS_R1,    .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_13 { .action = BUTTON_PRESS_L1,    .direction = GPIO_DIRECTION_INPUT }

// 拡張ピン (30-47) をシステムに認識させるための最小定義
// これを記述することで Web Configurator のドロップダウンに番号が出現します
#define GPIO_PIN_30 { .action = BUTTON_PRESS_NONE, .direction = GPIO_DIRECTION_INPUT }
#define GPIO_PIN_40 { .action = BUTTON_PRESS_NONE, .direction = GPIO_DIRECTION_INPUT }

// アナログ入力有効化
#define HAS_ANALOG_INPUT 1

// I2C / LED 設定 (WeActのデフォルトピンに合わせて適宜調整してください)
#define HAS_I2C 1
#define I2C0_SDA 0
#define I2C0_SCL 1
#define BOARD_LEDS_PIN 28

#endif

