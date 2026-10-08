unsigned int *__thiscall sub_682550(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,Actor *,PathingData *>::`vftable'; /*0x682553*/
  NiTMap_Clear(this); /*0x682559*/
  FormHeapFree(*(this + 2)); /*0x682562*/
  if ( (a2 & 1) != 0 ) /*0x68256f*/
    FormHeapFree((unsigned int)this); /*0x682572*/
  return this; /*0x68257c*/
}
