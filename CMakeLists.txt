cmake_minimum_required(VERSION 3.10)
project(LightBrowser)

set(CMAKE_CXX_STANDARD 17)

# 'WIN32' flag tells CMake to use WinMain and /SUBSYSTEM:WINDOWS
add_executable(LightBrowser WIN32 src/main.cpp)

target_link_libraries(LightBrowser PRIVATE user32.lib shell32.lib)