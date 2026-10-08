struct _DTTOPTS
{
DWORD dwSize;
DWORD dwFlags;
COLORREF crText;
COLORREF crBorder;
COLORREF crShadow;
int iTextShadowType;
POINT ptShadowOffset;
int iBorderSize;
int iFontPropId;
int iColorPropId;
int iStateId;
BOOL fApplyOverlay;
int iGlowSize;
DTT_CALLBACK_PROC pfnDrawTextCallback;
LPARAM_0 lParam;
};
