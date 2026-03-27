NiTexture::RendererData *__thiscall NiTexture::RendererData::`scalar deleting destructor'(
        NiTexture::RendererData *this,
        char a2)
{
  *(_DWORD *)this = &NiTexture::RendererData::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
