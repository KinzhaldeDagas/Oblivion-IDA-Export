struct _DDOVERLAYFX
{
DWORD dwSize;
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
DDCOLORKEY dckDestColorkey;
DDCOLORKEY dckSrcColorkey;
DWORD dwDDFX;
DWORD dwFlags;
};
