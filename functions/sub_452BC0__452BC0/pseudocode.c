unsigned int *__thiscall sub_452BC0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>::`vftable'; /*0x452bc3*/
  NiTMap_Clear(this); /*0x452bc9*/
  FormHeapFree(*(this + 2)); /*0x452bd2*/
  if ( (a2 & 1) != 0 ) /*0x452bdf*/
    FormHeapFree((unsigned int)this); /*0x452be2*/
  return this; /*0x452bec*/
}
