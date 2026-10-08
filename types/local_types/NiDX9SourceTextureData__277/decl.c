struct NiDX9SourceTextureData
{
void **vtbl;
NiTexture *parent;
NiDX9Renderer *pRenderer;
NiPixelFormat PixelFormat;
IDirect3DBaseTexture9 *dTexture;
UInt32 Width;
UInt32 Height;
UInt32 Levels;
UInt32 unk60;
UInt8 ReplacementData;
UInt8 Mipmap;
UInt8 pad64;
UInt32 FormattedSize;
UInt32 Palette;
UInt32 LevelsSkipped;
UInt32 SourceRevID;
UInt32 PalRevID;
};
