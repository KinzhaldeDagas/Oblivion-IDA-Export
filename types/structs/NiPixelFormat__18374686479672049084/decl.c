struct NiPixelFormat
{
UInt8 BitsPerPixel;
UInt8 SRGBSpace;
UInt8 pad02[2];
Format eFormat;
Tiling eTiling;
UInt32 RendererHint;
UInt32 ExtraData;
NiComponentSpec Components[4];
};
