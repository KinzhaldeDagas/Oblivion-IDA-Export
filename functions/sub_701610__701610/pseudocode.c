// Generic compatible depth/stencil request for a render-target surface: request 32 depth bits and 8 stencil bits from the renderer-specific selector.
NiSurfaceData *__thiscall NiRenderer_SelectCompatibleDepthStencilSurfaceData(
        NiRenderer *this,
        NiSurfaceData *renderTargetSurfaceData)
{
  return (NiSurfaceData *)this->__vftable->Unk_25(this, renderTargetSurfaceData, 0x20, 8);// Request 32 depth bits and 8 stencil bits generically; the DX9 surface path normalizes this to the 24/8 compatibility target. /*0x701623*/
}
