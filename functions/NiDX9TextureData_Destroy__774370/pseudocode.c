NiDX9TextureData *__thiscall NiDX9TextureData::Destroy(NiDX9TextureData *this, char a2)
{
  IDirect3DBaseTexture9 *dTexture; // eax

  dTexture = this->dTexture;
  this->_vtbl = &NiDX9TextureData::`vftable';
  if ( dTexture )
  {
    ((void (__thiscall *)(NiDX9RenderState *, IDirect3DBaseTexture9 *))this->pRenderer->member.renderState->vtbl->RemoveTexture)(
      this->pRenderer->member.renderState,
      dTexture);
    this->dTexture->lpVtbl->Release(this->dTexture);
    this->dTexture = 0;
  }
  this->_vtbl = &NiTexture::RendererData::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
