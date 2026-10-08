unsigned int *__thiscall sub_4D97D0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectREFR *,bool>::`vftable'; /*0x4d97d3*/
  NiTMap_Clear(this); /*0x4d97d9*/
  FormHeapFree(*(this + 2)); /*0x4d97e2*/
  if ( (a2 & 1) != 0 ) /*0x4d97ef*/
    FormHeapFree((unsigned int)this); /*0x4d97f2*/
  return this; /*0x4d97fc*/
}
