unsigned int *__thiscall sub_6C4890(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiAVObject *>::`vftable'; /*0x6c4893*/
  NiTMap_Clear(this); /*0x6c4899*/
  FormHeapFree(*(this + 2)); /*0x6c48a2*/
  if ( (a2 & 1) != 0 ) /*0x6c48af*/
    FormHeapFree((unsigned int)this); /*0x6c48b2*/
  return this; /*0x6c48bc*/
}
