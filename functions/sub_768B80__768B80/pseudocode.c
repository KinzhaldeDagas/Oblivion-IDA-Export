unsigned int *__thiscall sub_768B80(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiDynamicTexture *,NiDX9DynamicTextureData *>::`vftable'; /*0x768b83*/
  NiTMap_Clear(this); /*0x768b89*/
  FormHeapFree(*(this + 2)); /*0x768b92*/
  if ( (a2 & 1) != 0 ) /*0x768b9f*/
    FormHeapFree((unsigned int)this); /*0x768ba2*/
  return this; /*0x768bac*/
}
