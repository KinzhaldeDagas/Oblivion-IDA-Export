unsigned int *__thiscall sub_4B79C0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,int,bool>::`vftable'; /*0x4b79c3*/
  NiTMap_Clear(this); /*0x4b79c9*/
  FormHeapFree(*(this + 2)); /*0x4b79d2*/
  if ( (a2 & 1) != 0 ) /*0x4b79df*/
    FormHeapFree((unsigned int)this); /*0x4b79e2*/
  return this; /*0x4b79ec*/
}
