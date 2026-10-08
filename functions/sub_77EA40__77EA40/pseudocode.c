unsigned int *__thiscall sub_77EA40(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,NiVBDynamicSet *>::`vftable'; /*0x77ea43*/
  NiTMap_Clear(this); /*0x77ea49*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBDynamicSet *>::`vftable'; /*0x77ea50*/
  NiTMap_Clear(this); /*0x77ea56*/
  FormHeapFree(*(this + 2)); /*0x77ea5f*/
  if ( (a2 & 1) != 0 ) /*0x77ea6c*/
    FormHeapFree((unsigned int)this); /*0x77ea6f*/
  return this; /*0x77ea79*/
}
