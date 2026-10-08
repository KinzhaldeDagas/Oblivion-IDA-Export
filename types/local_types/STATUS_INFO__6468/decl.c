struct __declspec(align(8)) STATUS_INFO
{
HWND Self;
HWND Notify;
WORD numParts;
UINT height;
UINT minHeight;
BOOL simple;
HWND hwndToolTip;
HFONT hFont;
HFONT hDefaultFont;
COLORREF clrBk;
BOOL bUnicode;
STATUSWINDOWPART part0;
STATUSWINDOWPART *parts;
INT horizontalBorder;
INT verticalBorder;
INT horizontalGap;
};
