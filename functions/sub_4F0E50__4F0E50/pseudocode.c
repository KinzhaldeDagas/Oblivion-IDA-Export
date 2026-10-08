unsigned int *__thiscall sub_4F0E50(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,TESObjectCELL *>::`vftable'; /*0x4f0e53*/
  NiTMap_Clear(this); /*0x4f0e59*/
  FormHeapFree(*(this + 2)); /*0x4f0e62*/
  if ( (a2 & 1) != 0 ) /*0x4f0e6f*/
    FormHeapFree((unsigned int)this); /*0x4f0e72*/
  return this; /*0x4f0e7c*/
}
