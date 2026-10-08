unsigned int *__thiscall sub_452BF0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,void *>::`vftable'; /*0x452bf3*/
  NiTMap_Clear(this); /*0x452bf9*/
  FormHeapFree(*(this + 2)); /*0x452c02*/
  if ( (a2 & 1) != 0 ) /*0x452c0f*/
    FormHeapFree((unsigned int)this); /*0x452c12*/
  return this; /*0x452c1c*/
}
