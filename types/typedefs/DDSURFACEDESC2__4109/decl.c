struct _DDSURFACEDESC2
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
union
{
DWORD dwBackBufferCount;
DWORD dwDepth;
};
union
{
DWORD dwMipMapCount;
DWORD dwRefreshRate;
DWORD dwSrcVBHandle;
};
DWORD dwAlphaBitDepth;
DWORD dwReserved;
LPVOID lpSurface;
union
{
DDCOLORKEY ddckCKDestOverlay;
DWORD dwEmptyFaceColor;
};
DDCOLORKEY ddckCKDestBlt;
DDCOLORKEY ddckCKSrcOverlay;
DDCOLORKEY ddckCKSrcBlt;
union
{
DDPIXELFORMAT ddpfPixelFormat;
DWORD dwFVF;
};
DDSCAPS2 ddsCaps;
DWORD dwTextureStage;
};
