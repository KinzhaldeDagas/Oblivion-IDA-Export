unsigned int *__thiscall sub_4E8790(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<TESConnectedPoint *> *>::`vftable'; /*0x4e8793*/
  NiTMap_Clear(this); /*0x4e8799*/
  FormHeapFree(*(this + 2)); /*0x4e87a2*/
  if ( (a2 & 1) != 0 ) /*0x4e87af*/
    FormHeapFree((unsigned int)this); /*0x4e87b2*/
  return this; /*0x4e87bc*/
}
