unsigned int *__thiscall sub_72D280(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,float>::`vftable'; /*0x72d283*/
  NiTMap_Clear(this); /*0x72d289*/
  FormHeapFree(*(this + 2)); /*0x72d292*/
  if ( (a2 & 1) != 0 ) /*0x72d29f*/
    FormHeapFree((unsigned int)this); /*0x72d2a2*/
  return this; /*0x72d2ac*/
}
