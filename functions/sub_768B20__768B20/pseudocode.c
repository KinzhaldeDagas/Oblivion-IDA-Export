unsigned int *__thiscall sub_768B20(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiRenderedTexture *,NiDX9RenderedTextureData *>::`vftable'; /*0x768b23*/
  NiTMap_Clear(this); /*0x768b29*/
  FormHeapFree(*(this + 2)); /*0x768b32*/
  if ( (a2 & 1) != 0 ) /*0x768b3f*/
    FormHeapFree((unsigned int)this); /*0x768b42*/
  return this; /*0x768b4c*/
}
