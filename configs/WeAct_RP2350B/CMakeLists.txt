set(PICO_BOARD pico2)
set(PICO_PLATFORM rp2350)

# 80PINパッケージを有効化
add_compile_definitions(PICO_RP2350_80PIN=1)

# 全ターゲットに対して警告によるエラー停止を無効化
set(CMAKE_COMPILE_WARNING_AS_ERROR OFF)
add_compile_options(-Wno-error)
add_compile_options(-Wno-unused-variable)
add_compile_options(-Wno-unused-const-variable)

generate_board_firmware()

# 生成されたターゲットに対して個別にエラー停止を解除（念のため）
if (TARGET GP2040-CE)
    target_compile_options(GP2040-CE PRIVATE -Wno-error)
endif()
