cmake_minimum_required(VERSION 3.13)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(pico_sdk_import.cmake)

if (PICO_SDK_VERSION_STRING VERSION_LESS "1.4.0")
  message(FATAL_ERROR "Raspberry Pi Pico SDK version 1.4.0 (or later) required. Your version is ${PICO_SDK_VERSION_STRING}")
endif()

project(GP2040-CE LANGUAGES C CXX ASM VERSION 0.6.0)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
if(DEFINED ENV{GP2040_BOARDCONFIG})
  set(GP2040_BOARDCONFIG $ENV{GP2040_BOARDCONFIG})
else()
  set(GP2040_BOARDCONFIG Pico)
endif()

include(FetchContent)
FetchContent_Declare(ArduinoJson
    GIT_REPOSITORY https://github.com/bblanchon/ArduinoJson.git
    GIT_TAG        v6.19.4
)
FetchContent_MakeAvailable(ArduinoJson)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()
add_subdirectory(lib)
add_subdirectory(MPG)
add_subdirectory(Pico-PIO-USB)

add_executable(${PROJECT_NAME}
src/main.cpp
src/gp2040.cpp
src/gp2040aux.cpp
src/gamepad.cpp
src/addonmanager.cpp
src/configmanager.cpp
src/storagemanager.cpp
src/configs/webconfig.cpp
src/addons/analog.cpp
src/addons/turbo.cpp
src/addons/jslider.cpp
src/addons/i2cdisplay.cpp
src/addons/neopicoleds.cpp
src/addons/playerleds.cpp
src/addons/board_led.cpp
src/addons/dualdirectional.cpp
src/addons/reverse.cpp
src/addons/i2canalog1219.cpp
)

set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME}_${CMAKE_PROJECT_VERSION}_${GP2040_BOARDCONFIG})

pico_set_program_name(GP2040-CE "GP2040-CE")
pico_set_program_version(GP2040-CE "0.6.0")

target_link_libraries(${PROJECT_NAME} 
MPG
pico_pio_usb
pico_stdlib
pico_bootsel_via_double_reset
AnimationStation
TinyUSB_Gamepad
FlashPROM
ADS1219
PlayerLEDs
NeoPico
OneBitDisplay
CRC32
ArduinoJson
rndis
hardware_adc
)

target_include_directories(${PROJECT_NAME} PUBLIC
headers
headers/addons
configs/${GP2040_BOARDCONFIG}
)

target_include_directories(${PROJECT_NAME}  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}
    ${CMAKE_CURRENT_LIST_DIR}/.. # for our common lwipopts or any other standard includes, if required
  )

pico_add_extra_outputs(${PROJECT_NAME})

add_compile_options(-Wall
        -Wno-format          # int != int32_t as far as the compiler is concerned because gcc has int32_t as long int
        -Wno-unused-function # we have some for the docs that aren't called
        -Wno-maybe-uninitialized
        )

        install(FILES
    ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}_${CMAKE_PROJECT_VERSION}_${GP2040_BOARDCONFIG}.uf2
    ${CMAKE_CURRENT_LIST_DIR}/README.md
    DESTINATION .
)