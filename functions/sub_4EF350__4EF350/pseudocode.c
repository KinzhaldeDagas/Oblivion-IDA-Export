unsigned int *__thiscall sub_4EF350(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESObjectREFR *> *>::`vftable'; /*0x4ef353*/
  NiTMap_Clear(this); /*0x4ef359*/
  FormHeapFree(*(this + 2)); /*0x4ef362*/
  if ( (a2 & 1) != 0 ) /*0x4ef36f*/
    FormHeapFree((unsigned int)this); /*0x4ef372*/
  return this; /*0x4ef37c*/
}
