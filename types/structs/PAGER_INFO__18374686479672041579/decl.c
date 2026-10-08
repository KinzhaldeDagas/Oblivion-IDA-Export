struct __declspec(align(8)) PAGER_INFO
{
HWND hwndSelf;
HWND hwndChild;
HWND hwndNotify;
BOOL bUnicode;
DWORD dwStyle;
COLORREF clrBk;
INT nBorder;
INT nButtonSize;
INT nPos;
INT nWidth;
INT nHeight;
BOOL bForward;
BOOL bCapture;
INT TLbtnState;
INT BRbtnState;
INT direction;
WCHAR_0 *pwszBuffer;
INT nBufferSize;
};
