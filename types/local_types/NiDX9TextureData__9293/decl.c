struct NiDX9TextureData
{
void **_vtbl;
NiTexture *parent;
NiDX9Renderer *pRenderer;
NiPixelFormat PixelFormat;
IDirect3DBaseTexture9 *dTexture;
UInt32 Width;
UInt32 Height;
UInt32 Levels;
};
