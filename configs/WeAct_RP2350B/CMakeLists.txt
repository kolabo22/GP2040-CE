set(PICO_BOARD pico2)
set(PICO_PLATFORM rp2350)

# 80PINパッケージの全GPIOを解放
add_compile_definitions(PICO_RP2350_80PIN=1)

# コンパイルエラーの原因となっている警告を完全に無効化
add_compile_options(-Wno-unused-variable)
add_compile_options(-Wno-error)

generate_board_firmware()
