unsigned int *__thiscall sub_55E310(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectTREE *,NiPointer<BSTreeModel> *>::`vftable'; /*0x55e313*/
  NiTMap_Clear(this); /*0x55e319*/
  FormHeapFree(*(this + 2)); /*0x55e322*/
  if ( (a2 & 1) != 0 ) /*0x55e32f*/
    FormHeapFree((unsigned int)this); /*0x55e332*/
  return this; /*0x55e33c*/
}
