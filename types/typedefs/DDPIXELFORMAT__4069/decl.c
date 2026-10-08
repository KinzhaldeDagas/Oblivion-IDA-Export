struct _DDPIXELFORMAT
{
DWORD dwSize;
DWORD dwFlags;
DWORD dwFourCC;
union
{
DWORD dwRGBBitCount;
DWORD dwYUVBitCount;
DWORD dwZBufferBitDepth;
DWORD dwAlphaBitDepth;
};
union
{
DWORD dwRBitMask;
DWORD dwYBitMask;
};
union
{
DWORD dwGBitMask;
DWORD dwUBitMask;
};
union
{
DWORD dwBBitMask;
DWORD dwVBitMask;
};
union
{
DWORD dwRGBAlphaBitMask;
DWORD dwYUVAlphaBitMask;
DWORD dwRGBZBitMask;
DWORD dwYUVZBitMask;
};
};
