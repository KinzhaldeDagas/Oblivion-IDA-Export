unsigned int *__thiscall sub_4E4B70(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`vftable'; /*0x4e4b73*/
  NiTMap_Clear(this); /*0x4e4b79*/
  FormHeapFree(*(this + 2)); /*0x4e4b82*/
  if ( (a2 & 1) != 0 ) /*0x4e4b8f*/
    FormHeapFree((unsigned int)this); /*0x4e4b92*/
  return this; /*0x4e4b9c*/
}
