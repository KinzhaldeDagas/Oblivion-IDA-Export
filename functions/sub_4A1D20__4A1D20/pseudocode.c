unsigned int *__thiscall sub_4A1D20(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiTexture>>::`vftable'; /*0x4a1d23*/
  NiTMap_Clear(this); /*0x4a1d29*/
  FormHeapFree(*(this + 2)); /*0x4a1d32*/
  if ( (a2 & 1) != 0 ) /*0x4a1d3f*/
    FormHeapFree((unsigned int)this); /*0x4a1d42*/
  return this; /*0x4a1d4c*/
}
