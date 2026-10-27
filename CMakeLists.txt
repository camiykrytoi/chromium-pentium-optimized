cmake_minimum_required(VERSION 3.10)
project(LightBrowser)

set(CMAKE_CXX_STANDARD 17)

# 'WIN32' flag tells CMake to use WinMain and /SUBSYSTEM:WINDOWS
add_executable(LightBrowser WIN32 src/main.cpp)

# Find WebView2 and WIL installed by nuget
set(WEBVIEW2_VERSION "1.0.4314.35")
set(WEBVIEW2_DIR "${CMAKE_SOURCE_DIR}/packages/Microsoft.Web.WebView2.${WEBVIEW2_VERSION}")
set(WIL_DIR "${CMAKE_SOURCE_DIR}/packages/Microsoft.Windows.ImplementationLibrary.1.0.260126.7")
set(WEBVIEW2_LIB "${WEBVIEW2_DIR}/build/native/x64/WebView2Loader.lib")

if(EXISTS "${WEBVIEW2_DIR}")
    target_include_directories(LightBrowser PRIVATE "${WEBVIEW2_DIR}/build/native/include")
endif()

if(EXISTS "${WIL_DIR}")
    target_include_directories(LightBrowser PRIVATE "${WIL_DIR}/include")
endif()

target_link_libraries(LightBrowser PRIVATE user32.lib shell32.lib "${WEBVIEW2_LIB}")
