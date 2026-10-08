// Oblivion BSRenderedTexture helper selects the render-target group associated with its inner rendered texture.
NiRenderTargetGroup *__thiscall BSRenderedTexture::UseTextureToRender(BSRenderedTexture *this)
{
  NiRenderedTexture *RenderedTexture; // ecx
  BSStringT *v4; // eax

  if ( !this ) /*0x7d6fe5*/
    return 0; /*0x7d6fe7*/
  RenderedTexture = this->members.RenderedTexture; /*0x7d6feb*/
  if ( !RenderedTexture ) /*0x7d6ff0*/
    return this->members.RenderTargetGroup; /*0x7d6ff0*/
  v4 = (BSStringT *)RenderedTexture->__vftable->super.super.GetType((NiObject *)RenderedTexture); /*0x7d6ff7*/
  if ( !v4 ) /*0x7d6ffb*/
    return this->members.RenderTargetGroup; /*0x7d700e*/
  while ( v4 != &stru_BAA880 ) /*0x7d7005*/
  {
    v4 = *(BSStringT **)&v4->m_dataLen; /*0x7d7007*/
    if ( !v4 ) /*0x7d700c*/
      return this->members.RenderTargetGroup; /*0x7d700c*/
  }
  return *(&this->members.RenderTargetGroup /*0x7d6fe9*/
         + (int)NiRTTI_Cast(&stru_BAA880, (NiObject *)this->members.RenderedTexture)[8].__vftable);
}
