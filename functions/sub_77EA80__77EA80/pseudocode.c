unsigned int *__thiscall sub_77EA80(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,NiVBChip *>::`vftable'; /*0x77ea83*/
  NiTMap_Clear(this); /*0x77ea89*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBChip *>::`vftable'; /*0x77ea90*/
  NiTMap_Clear(this); /*0x77ea96*/
  FormHeapFree(*(this + 2)); /*0x77ea9f*/
  if ( (a2 & 1) != 0 ) /*0x77eaac*/
    FormHeapFree((unsigned int)this); /*0x77eaaf*/
  return this; /*0x77eab9*/
}
