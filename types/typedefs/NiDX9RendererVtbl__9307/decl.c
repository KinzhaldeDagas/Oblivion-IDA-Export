struct NiDX9RendererVtbl
{
NiRendererVtbl super;
bool (__thiscall *DeleteRenderedCubeMap)(NiDX9Renderer *this, NiRenderedCubeMap *arg);
bool (__thiscall *DeleteTexture)(NiDX9Renderer *this, NiTexture *arg);
bool (__thiscall *DeleteDynamicTexture)(NiDX9Renderer *this, UInt32 arg);
};
