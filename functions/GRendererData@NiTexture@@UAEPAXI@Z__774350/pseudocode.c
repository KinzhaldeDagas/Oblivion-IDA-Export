NiTexture::RendererData *__thiscall NiTexture::RendererData::`scalar deleting destructor'(
        NiTexture::RendererData *this,
        char a2)
{
  *(_DWORD *)this = &NiTexture::RendererData::`vftable'; /*0x774358*/
  if ( (a2 & 1) != 0 ) /*0x77435e*/
    FormHeapFree((unsigned int)this); /*0x774361*/
  return this; /*0x77436b*/
}
