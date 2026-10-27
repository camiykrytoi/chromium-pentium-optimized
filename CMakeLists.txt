cmake_minimum_required(VERSION 3.10)
project(LightBrowser)

# Basic C++ setup
set(CMAKE_CXX_STANDARD 17)
add_executable(LightBrowser src/main.cpp)

# Linking against minimal Windows libs
target_link_libraries(LightBrowser PRIVATE user32.lib shell32.lib)