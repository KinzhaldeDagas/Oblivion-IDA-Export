unsigned int *__thiscall sub_45A5C0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned char,BSSimpleList<LoadFormHeader *> *>::`vftable'; /*0x45a5c3*/
  NiTMap_Clear(this); /*0x45a5c9*/
  FormHeapFree(*(this + 2)); /*0x45a5d2*/
  if ( (a2 & 1) != 0 ) /*0x45a5df*/
    FormHeapFree((unsigned int)this); /*0x45a5e2*/
  return this; /*0x45a5ec*/
}
