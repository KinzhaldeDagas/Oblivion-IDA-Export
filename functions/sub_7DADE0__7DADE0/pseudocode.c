unsigned int *__thiscall sub_7DADE0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,ShaderBufferEntry *>::`vftable'; /*0x7dade3*/
  NiTMap_Clear(this); /*0x7dade9*/
  FormHeapFree(*(this + 2)); /*0x7dadf2*/
  if ( (a2 & 1) != 0 ) /*0x7dadff*/
    FormHeapFree((unsigned int)this); /*0x7dae02*/
  return this; /*0x7dae0c*/
}
