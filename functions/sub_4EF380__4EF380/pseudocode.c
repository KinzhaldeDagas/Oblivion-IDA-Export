unsigned int *__thiscall sub_4EF380(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,bool>::`vftable'; /*0x4ef383*/
  NiTMap_Clear(this); /*0x4ef389*/
  FormHeapFree(*(this + 2)); /*0x4ef392*/
  if ( (a2 & 1) != 0 ) /*0x4ef39f*/
    FormHeapFree((unsigned int)this); /*0x4ef3a2*/
  return this; /*0x4ef3ac*/
}
