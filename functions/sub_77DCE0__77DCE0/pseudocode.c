unsigned int *__thiscall sub_77DCE0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,NiVBSet *>::`vftable'; /*0x77dce3*/
  NiTMap_Clear(this); /*0x77dce9*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBSet *>::`vftable'; /*0x77dcf0*/
  NiTMap_Clear(this); /*0x77dcf6*/
  FormHeapFree(*(this + 2)); /*0x77dcff*/
  if ( (a2 & 1) != 0 ) /*0x77dd0c*/
    FormHeapFree((unsigned int)this); /*0x77dd0f*/
  return this; /*0x77dd19*/
}
