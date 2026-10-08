unsigned int *__thiscall sub_4B79F0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectCELL *,bool>::`vftable'; /*0x4b79f3*/
  NiTMap_Clear(this); /*0x4b79f9*/
  FormHeapFree(*(this + 2)); /*0x4b7a02*/
  if ( (a2 & 1) != 0 ) /*0x4b7a0f*/
    FormHeapFree((unsigned int)this); /*0x4b7a12*/
  return this; /*0x4b7a1c*/
}
