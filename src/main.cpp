#include <windows.h>
#include <wrl.h>
#include <webview2.h>
#include <wil/com.h>

using namespace Microsoft::WRL;

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Basic setup for WebView2 is complex to put in 100 lines, 
    // but this structure will initialize the environment.
    MessageBox(NULL, L"LightBrowser v0.1 loading...", L"LightBrowser", MB_OK);
    return 0;
}