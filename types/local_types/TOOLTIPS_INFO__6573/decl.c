struct TOOLTIPS_INFO
{
HWND hwndSelf;
WCHAR_0 szTipText[1024];
BOOL bActive;
BOOL bTrackActive;
UINT uNumTools;
COLORREF clrBk;
COLORREF clrText;
HFONT hFont;
HFONT hTitleFont;
INT xTrackPos;
INT yTrackPos;
INT nMaxTipWidth;
INT nTool;
INT nCurrentTool;
INT nTrackTool;
INT nReshowTime;
INT nAutoPopTime;
INT nInitialTime;
RECT rcMargin;
BOOL bToolBelow;
LPWSTR pszTitle;
HICON hTitleIcon;
TTTOOL_INFO *tools;
};
