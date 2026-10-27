#include <windows.h>
#include <wrl.h>
#include <webview2.h>
#include <string>

// РџСЂРѕСЃС‚РµР№С€РёР№ Win32 РєР°СЂРєР°СЃ РґР»СЏ WebView2
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow) {
    MessageBox(NULL, L"РќР°С€ Р»РµРіРєРёР№ Р±СЂР°СѓР·РµСЂ СЂР°Р±РѕС‚Р°РµС‚!", L"LightBrowser", MB_OK);
    return 0;
}