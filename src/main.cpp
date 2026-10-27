#include <windows.h>
#include <wrl.h>
#include <webview2.h>
#include <iostream>

using namespace Microsoft::WRL;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow) {
    // Basic initialization for a lean browser
    MessageBox(NULL, L"LightBrowser Initializing...", L"LightBrowser", MB_OK | MB_ICONINFORMATION);
    
    // In a real implementation, we'd initialize WebView2 environment here.
    // For now, this confirms the build pipeline works.
    
    return 0;
}