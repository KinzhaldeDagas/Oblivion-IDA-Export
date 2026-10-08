unsigned int *__thiscall sub_6AA560(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,NiPointer<NiAVObject>>::`vftable'; /*0x6aa563*/
  NiTMap_Clear(this); /*0x6aa569*/
  FormHeapFree(*(this + 2)); /*0x6aa572*/
  if ( (a2 & 1) != 0 ) /*0x6aa57f*/
    FormHeapFree((unsigned int)this); /*0x6aa582*/
  return this; /*0x6aa58c*/
}
