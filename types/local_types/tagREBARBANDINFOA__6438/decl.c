struct tagREBARBANDINFOA
{
UINT cbSize;
UINT fMask;
UINT fStyle;
COLORREF clrFore;
COLORREF clrBack;
LPSTR lpText;
UINT cch;
INT iImage;
HWND hwndChild;
UINT cxMinChild;
UINT cyMinChild;
UINT cx;
HBITMAP hbmBack;
UINT wID;
UINT cyChild;
UINT cyMaxChild;
UINT cyIntegral;
UINT cxIdeal;
__declspec(align(8)) LPARAM_0 lParam;
UINT cxHeader;
RECT rcChevronLocation;
UINT uChevronState;
};
