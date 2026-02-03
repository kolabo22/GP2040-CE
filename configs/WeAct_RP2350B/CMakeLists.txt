set(PICO_BOARD pico2)
set(PICO_PLATFORM rp2350)

# 80PINパッケージを有効化
add_compile_definitions(PICO_RP2350_80PIN=1)

# 警告を無視
add_compile_options(-Wno-error=unused-variable)
add_compile_options(-Wno-error=unused-const-variable)

generate_board_firmware()
