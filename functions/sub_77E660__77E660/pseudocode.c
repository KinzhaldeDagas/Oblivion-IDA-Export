unsigned int *__thiscall sub_77E660(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBDynamicSet *>::`vftable'; /*0x77e663*/
  NiTMap_Clear(this); /*0x77e669*/
  FormHeapFree(*(this + 2)); /*0x77e672*/
  if ( (a2 & 1) != 0 ) /*0x77e67f*/
    FormHeapFree((unsigned int)this); /*0x77e682*/
  return this; /*0x77e68c*/
}
