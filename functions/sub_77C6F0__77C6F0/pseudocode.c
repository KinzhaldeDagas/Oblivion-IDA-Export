unsigned int *__thiscall sub_77C6F0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiShader *>::`vftable'; /*0x77c6f3*/
  NiTMap_Clear(this); /*0x77c6f9*/
  FormHeapFree(*(this + 2)); /*0x77c702*/
  if ( (a2 & 1) != 0 ) /*0x77c70f*/
    FormHeapFree((unsigned int)this); /*0x77c712*/
  return this; /*0x77c71c*/
}
