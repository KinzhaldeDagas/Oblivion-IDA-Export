struct _IMAGELIST
{
IImageList2_0 IImageList2_iface;
INT cCurImage;
INT cMaxImage;
INT cGrow;
INT cx;
INT cy;
DWORD x4;
UINT flags;
COLORREF clrFg;
COLORREF clrBk;
HBITMAP hbmImage;
HBITMAP hbmMask;
HDC hdcImage;
HDC hdcMask;
INT nOvlIdx[15];
HBRUSH hbrBlend25;
HBRUSH hbrBlend50;
INT cInitial;
UINT uBitsPixel;
DWORD *item_flags;
BOOL color_table_set;
LONG ref;
};
