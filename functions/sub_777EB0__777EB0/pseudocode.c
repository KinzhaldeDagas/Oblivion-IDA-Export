unsigned int *__thiscall sub_777EB0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777eb3*/
  NiTMap_Clear(this); /*0x777eb9*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9VertexBufferManager::NiDX9VBInfo *>::`vftable'; /*0x777ec0*/
  NiTMap_Clear(this); /*0x777ec6*/
  FormHeapFree(*(this + 2)); /*0x777ecf*/
  if ( (a2 & 1) != 0 ) /*0x777edc*/
    FormHeapFree((unsigned int)this); /*0x777edf*/
  return this; /*0x777ee9*/
}
