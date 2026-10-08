struct SPY_INSTANCE
{
UINT msgnum;
HWND msg_hwnd __offset(OFF64|AUTO);
WPARAM_0 wParam;
LPARAM_0 lParam;
INT data_len;
char msg_name[60];
WCHAR_0 wnd_class[60];
WCHAR_0 wnd_name[16];
};
