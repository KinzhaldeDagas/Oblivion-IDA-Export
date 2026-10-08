// Creates renderer data only when NiTexture::rendererData is absent, then records the NiRenderedTexture -> NiDX9RenderedTextureData association in the renderer's tracked map for reset-time reconstruction.
bool __thiscall NiDX9Renderer_CreateRenderedTextureRendererData(NiDX9Renderer *this, NiTexture *texture)
{
  NiDX9TextureData *v3; // eax

  if ( !texture->members.rendererData ) /*0x768706*/
  {
    v3 = NiDX9RenderedTextureData_Create((int)texture, texture, this); /*0x768710*/
    if ( !v3 ) /*0x76871a*/
      return 0; /*0x768720*/
    NiTMap_SetAt(&this->member.renderedTextures.vtbl, (int)texture, (int)v3); /*0x76872b*/
  }
  return 1; /*0x76871c*/
}
