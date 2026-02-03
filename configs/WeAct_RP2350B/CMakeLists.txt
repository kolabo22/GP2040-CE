set(PICO_BOARD pico2)
set(PICO_PLATFORM rp2350)

# 80PINパッケージを有効化
add_compile_definitions(PICO_RP2350_80PIN=1)

# 警告でビルドを止めないための設定（追加・修正）
add_definitions(-Wno-error)
add_definitions(-Wno-unused-variable)
add_definitions(-Wno-unused-const-variable)

generate_board_firmware()

