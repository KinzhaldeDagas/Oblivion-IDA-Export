struct __declspec(align(8)) SYSLINK_INFO
{
HWND Self;
HWND Notify;
DWORD Style;
list Items;
BOOL HasFocus;
int MouseDownID;
HFONT Font;
HFONT LinkFont;
COLORREF TextColor;
COLORREF LinkColor;
COLORREF VisitedColor;
WCHAR_0 BreakChar;
BOOL IgnoreReturn;
};
