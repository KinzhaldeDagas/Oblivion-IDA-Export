unsigned int *__thiscall sub_4E4BA0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESPathGridPoint *> *>::`vftable'; /*0x4e4ba3*/
  NiTMap_Clear(this); /*0x4e4ba9*/
  FormHeapFree(*(this + 2)); /*0x4e4bb2*/
  if ( (a2 & 1) != 0 ) /*0x4e4bbf*/
    FormHeapFree((unsigned int)this); /*0x4e4bc2*/
  return this; /*0x4e4bcc*/
}
