struct __declspec(align(8)) CASCADE_INFO
{
HWND top;
UINT flags;
HWND parent;
HWND desktop;
HWND tray_wnd;
HWND progman;
HWND *wnd_array;
DWORD wnd_count;
};
