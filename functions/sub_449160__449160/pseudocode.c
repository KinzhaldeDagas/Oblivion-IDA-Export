unsigned int *__thiscall sub_449160(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESForm *,bool>::`vftable'; /*0x449163*/
  NiTMap_Clear(this); /*0x449169*/
  FormHeapFree(*(this + 2)); /*0x449172*/
  if ( (a2 & 1) != 0 ) /*0x44917f*/
    FormHeapFree((unsigned int)this); /*0x449182*/
  return this; /*0x44918c*/
}
