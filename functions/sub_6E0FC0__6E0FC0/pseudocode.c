unsigned int *__thiscall sub_6E0FC0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiSequence>>::`vftable'; /*0x6e0fc3*/
  NiTMap_Clear(this); /*0x6e0fc9*/
  FormHeapFree(*(this + 2)); /*0x6e0fd2*/
  if ( (a2 & 1) != 0 ) /*0x6e0fdf*/
    FormHeapFree((unsigned int)this); /*0x6e0fe2*/
  return this; /*0x6e0fec*/
}
