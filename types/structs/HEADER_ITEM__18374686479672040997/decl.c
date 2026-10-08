struct HEADER_ITEM
{
INT cxy;
HBITMAP hbm;
LPWSTR pszText;
INT fmt;
__declspec(align(8)) LPARAM_0 lParam;
INT iImage;
INT iOrder;
BOOL bDown;
RECT rect;
DWORD callbackMask;
};
