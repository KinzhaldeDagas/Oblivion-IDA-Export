unsigned int *__thiscall sub_778B50(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x778b53*/
  NiTMap_Clear(this); /*0x778b59*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiDX9IndexBufferManager::NiDX9IBInfo *>::`vftable'; /*0x778b60*/
  NiTMap_Clear(this); /*0x778b66*/
  FormHeapFree(*(this + 2)); /*0x778b6f*/
  if ( (a2 & 1) != 0 ) /*0x778b7c*/
    FormHeapFree((unsigned int)this); /*0x778b7f*/
  return this; /*0x778b89*/
}
