struct __declspec(align(8)) _IMAGELISTDRAWPARAMS
{
DWORD cbSize;
HIMAGELIST himl;
INT i;
HDC hdcDst;
INT x;
INT y;
INT cx;
INT cy;
INT xBitmap;
INT yBitmap;
COLORREF rgbBk;
COLORREF rgbFg;
UINT fStyle;
DWORD dwRop;
DWORD fState;
DWORD Frame;
COLORREF crEffect;
};
