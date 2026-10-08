struct _DDSURFACEDESC
{
DWORD dwSize;
DWORD dwFlags;
DWORD dwHeight;
DWORD dwWidth;
union
{
LONG lPitch;
DWORD dwLinearSize;
};
DWORD dwBackBufferCount;
union
{
DWORD dwMipMapCount;
DWORD dwZBufferBitDepth;
DWORD dwRefreshRate;
};
DWORD dwAlphaBitDepth;
DWORD dwReserved;
LPVOID lpSurface;
DDCOLORKEY ddckCKDestOverlay;
DDCOLORKEY ddckCKDestBlt;
DDCOLORKEY ddckCKSrcOverlay;
DDCOLORKEY ddckCKSrcBlt;
DDPIXELFORMAT ddpfPixelFormat;
DDSCAPS ddsCaps;
};
