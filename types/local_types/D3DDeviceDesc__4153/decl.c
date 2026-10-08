struct _D3DDeviceDesc
{
DWORD dwSize;
DWORD dwFlags;
D3DCOLORMODEL dcmColorModel;
DWORD dwDevCaps;
D3DTRANSFORMCAPS dtcTransformCaps;
BOOL bClipping;
D3DLIGHTINGCAPS dlcLightingCaps;
D3DPRIMCAPS dpcLineCaps;
D3DPRIMCAPS dpcTriCaps;
DWORD dwDeviceRenderBitDepth;
DWORD dwDeviceZBufferBitDepth;
DWORD dwMaxBufferSize;
DWORD dwMaxVertexCount;
DWORD dwMinTextureWidth;
DWORD dwMinTextureHeight;
DWORD dwMaxTextureWidth;
DWORD dwMaxTextureHeight;
DWORD dwMinStippleWidth;
DWORD dwMaxStippleWidth;
DWORD dwMinStippleHeight;
DWORD dwMaxStippleHeight;
};
