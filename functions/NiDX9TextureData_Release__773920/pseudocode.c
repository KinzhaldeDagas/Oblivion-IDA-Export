ULONG __thiscall NiDX9TextureData::Release(NiDX9TextureData *this)
{
  ULONG result; // eax

  result = (ULONG)this->dTexture;
  this->_vtbl = &NiDX9TextureData::`vftable';
  if ( result )
  {
    ((void (__thiscall *)(NiDX9RenderState *, ULONG))this->pRenderer->member.renderState->vtbl->RemoveTexture)(
      this->pRenderer->member.renderState,
      result);
    result = this->dTexture->lpVtbl->Release(this->dTexture);
    this->dTexture = 0;
  }
  this->_vtbl = &NiTexture::RendererData::`vftable';
  return result;
}
