unsigned int *__thiscall sub_77E690(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBChip *>::`vftable'; /*0x77e693*/
  NiTMap_Clear(this); /*0x77e699*/
  FormHeapFree(*(this + 2)); /*0x77e6a2*/
  if ( (a2 & 1) != 0 ) /*0x77e6af*/
    FormHeapFree((unsigned int)this); /*0x77e6b2*/
  return this; /*0x77e6bc*/
}
