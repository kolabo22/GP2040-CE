set(PICO_BOARD pico2)
set(PICO_PLATFORM rp2350)

# 80PINパッケージを有効化
add_compile_definitions(PICO_RP2350_80PIN=1)

# 強制的に警告をエラーにしない（グローバル）
set(CMAKE_COMPILE_WARNING_AS_ERROR OFF)
add_compile_options(-Wno-error)
add_compile_options(-Wno-unused-variable)
add_compile_options(-Wno-unused-const-variable)

generate_board_firmware()

# GP2040-CEターゲットに対して直接エラー停止を解除する
if (TARGET GP2040-CE)
    target_compile_options(GP2040-CE PRIVATE -Wno-error -Wno-unused-variable -Wno-unused-const-variable)
endif()

