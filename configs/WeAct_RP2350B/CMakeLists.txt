set(PICO_BOARD pico2)
set(PICO_PLATFORM rp2350-arm-s)

# 60PINの定義を削除し、全てのGPIOを有効化
add_compile_definitions(PICO_RP2350_80PIN=1)

generate_board_firmware()

