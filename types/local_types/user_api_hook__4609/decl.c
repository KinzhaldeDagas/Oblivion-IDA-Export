struct user_api_hook
{
LRESULT_0 (*pDefDlgProc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL) __offset(OFF64|AUTO);
void (*pScrollBarDraw)(HWND, HDC, INT, SCROLL_HITTEST, const SCROLL_TRACKING_INFO *, BOOL, BOOL, RECT *, INT, INT, INT, BOOL) __offset(OFF64|AUTO);
LRESULT_0 (*pScrollBarWndProc)(HWND, UINT, WPARAM_0, LPARAM_0, BOOL) __offset(OFF64|AUTO);
};
