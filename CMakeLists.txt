cmake_minimum_required(VERSION 3.10)
project(LightBrowser)

set(CMAKE_CXX_STANDARD 17)

# 'WIN32' flag tells CMake to use WinMain and /SUBSYSTEM:WINDOWS
add_executable(LightBrowser WIN32 src/main.cpp)

# Find WebView2 installed by nuget
file(GLOB WEBVIEW2_DIR "${CMAKE_SOURCE_DIR}/packages/Microsoft.Web.WebView2.*")
if(WEBVIEW2_DIR)
    target_include_directories(LightBrowser PRIVATE "${WEBVIEW2_DIR}/build/native/include")
    target_link_directories(LightBrowser PRIVATE "${WEBVIEW2_DIR}/build/native/x64")
endif()

target_link_libraries(LightBrowser PRIVATE user32.lib shell32.lib WebView2Loader.dll)
