NiDX9TextureData *__thiscall NiDX9TextureData::Destroy(NiDX9TextureData *this, char a2)
{
  IDirect3DBaseTexture9 *dTexture; // eax

  dTexture = this->dTexture; /*0x774373*/
  this->_vtbl = &NiDX9TextureData::`vftable'; /*0x774378*/
  if ( dTexture ) /*0x77437e*/
  {
    ((void (__thiscall *)(NiDX9RenderState *, IDirect3DBaseTexture9 *))this->pRenderer->member.renderState->vtbl->RemoveTexture)( /*0x774392*/
      this->pRenderer->member.renderState,
      dTexture);
    this->dTexture->lpVtbl->Release(this->dTexture); /*0x77439d*/
    this->dTexture = 0; /*0x77439f*/
  }
  this->_vtbl = &NiTexture::RendererData::`vftable'; /*0x7743ab*/
  if ( (a2 & 1) != 0 ) /*0x7743b1*/
    FormHeapFree((unsigned int)this); /*0x7743b4*/
  return this; /*0x7743be*/
}
