unsigned int *__thiscall sub_4A1D50(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,BSFileEntry const *,NiPointer<NiTexture>>::`vftable'; /*0x4a1d53*/
  NiTMap_Clear(this); /*0x4a1d59*/
  FormHeapFree(*(this + 2)); /*0x4a1d62*/
  if ( (a2 & 1) != 0 ) /*0x4a1d6f*/
    FormHeapFree((unsigned int)this); /*0x4a1d72*/
  return this; /*0x4a1d7c*/
}
