set(PICO_BOARD pico2)
set(PICO_PLATFORM rp2350)

# 80PINパッケージを有効化
add_compile_definitions(PICO_RP2350_80PIN=1)

# 【重要】警告をエラーとして扱わない（ビルドを無理やり通す設定）
add_compile_options(-Wno-error=unused-variable)

generate_board_firmware()

