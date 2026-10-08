struct _DDBLTFX
{
DWORD dwSize;
DWORD dwDDFX;
DWORD dwROP;
DWORD dwDDROP;
DWORD dwRotationAngle;
DWORD dwZBufferOpCode;
DWORD dwZBufferLow;
DWORD dwZBufferHigh;
DWORD dwZBufferBaseDest;
DWORD dwZDestConstBitDepth;
union
{
DWORD dwZDestConst;
LPDIRECTDRAWSURFACE lpDDSZBufferDest;
};
DWORD dwZSrcConstBitDepth;
union
{
DWORD dwZSrcConst;
LPDIRECTDRAWSURFACE lpDDSZBufferSrc;
};
DWORD dwAlphaEdgeBlendBitDepth;
DWORD dwAlphaEdgeBlend;
DWORD dwReserved;
DWORD dwAlphaDestConstBitDepth;
union
{
DWORD dwAlphaDestConst;
LPDIRECTDRAWSURFACE lpDDSAlphaDest;
};
DWORD dwAlphaSrcConstBitDepth;
union
{
DWORD dwAlphaSrcConst;
LPDIRECTDRAWSURFACE lpDDSAlphaSrc;
};
union
{
DWORD dwFillColor;
DWORD dwFillDepth;
DWORD dwFillPixel;
LPDIRECTDRAWSURFACE lpDDSPattern;
};
DDCOLORKEY ddckDestColorkey;
DDCOLORKEY ddckSrcColorkey;
};
