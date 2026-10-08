ULONG __thiscall NiDX9TextureData::Release(NiDX9TextureData *this)
{
  ULONG result; // eax

  result = (ULONG)this->dTexture; /*0x773923*/
  this->_vtbl = &NiDX9TextureData::`vftable'; /*0x773928*/
  if ( result ) /*0x77392e*/
  {
    ((void (__thiscall *)(NiDX9RenderState *, ULONG))this->pRenderer->member.renderState->vtbl->RemoveTexture)( /*0x773942*/
      this->pRenderer->member.renderState,
      result);
    result = this->dTexture->lpVtbl->Release(this->dTexture);// Texture renderer-data destruction first invokes NiDX9RenderState::RemoveTexture with the base texture at 773942, then native base-texture Release here, then clears dTexture at 77394F. Capture native lifetime before final Release; the pointer may be destroyed/reused before this call returns. Surface aliases may independently retain native parent resources and require separate lifetime tracking. /*0x77394d*/
    this->dTexture = 0; /*0x77394f*/
  }
  this->_vtbl = &NiTexture::RendererData::`vftable'; /*0x773956*/
  return result; /*0x77395c*/
}
