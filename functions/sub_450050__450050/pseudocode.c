unsigned int *__thiscall sub_450050(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESFile *>::`vftable'; /*0x450053*/
  NiTMap_Clear(this); /*0x450059*/
  FormHeapFree(*(this + 2)); /*0x450062*/
  if ( (a2 & 1) != 0 ) /*0x45006f*/
    FormHeapFree((unsigned int)this); /*0x450072*/
  return this; /*0x45007c*/
}
