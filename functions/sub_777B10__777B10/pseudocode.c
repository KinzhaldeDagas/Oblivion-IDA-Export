unsigned int *__thiscall sub_777B10(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777b13*/
  NiTMap_Clear(this); /*0x777b19*/
  FormHeapFree(*(this + 2)); /*0x777b22*/
  if ( (a2 & 1) != 0 ) /*0x777b2f*/
    FormHeapFree((unsigned int)this); /*0x777b32*/
  return this; /*0x777b3c*/
}
