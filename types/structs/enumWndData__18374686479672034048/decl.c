struct _enumWndData
{
UINT uiMsgId;
__declspec(align(8)) WPARAM_0 wParam;
LPARAM_0 lParam;
LRESULT_0 (*pfnPost)(HWND, UINT, WPARAM_0, LPARAM_0);
};
