unsigned int *__thiscall sub_77DBF0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBSet *>::`vftable'; /*0x77dbf3*/
  NiTMap_Clear(this); /*0x77dbf9*/
  FormHeapFree(*(this + 2)); /*0x77dc02*/
  if ( (a2 & 1) != 0 ) /*0x77dc0f*/
    FormHeapFree((unsigned int)this); /*0x77dc12*/
  return this; /*0x77dc1c*/
}
