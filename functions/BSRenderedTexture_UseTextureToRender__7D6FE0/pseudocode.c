NiRenderTargetGroup *__thiscall BSRenderedTexture::UseTextureToRender(BSRenderedTexture *this)
{
  NiRenderedTexture *RenderedTexture; // ecx
  NiRTTI *v4; // eax

  if ( !this )
    return 0;
  RenderedTexture = this->members.RenderedTexture;
  if ( !RenderedTexture )
    return this->members.RenderTargetGroup;
  v4 = RenderedTexture->__vftable->super.super.GetType((NiObject *)RenderedTexture);
  if ( !v4 )
    return this->members.RenderTargetGroup;
  while ( v4 != (NiRTTI *)&stru_BAA880 )
  {
    v4 = v4->parent;
    if ( !v4 )
      return this->members.RenderTargetGroup;
  }
  return *(&this->members.RenderTargetGroup
         + (int)NiRTTI_Cast(&stru_BAA880, (NiObject *)this->members.RenderedTexture)[8].__vftable);
}
