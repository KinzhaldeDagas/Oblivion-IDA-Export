unsigned int *__thiscall sub_77EF10(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DPixelShader *>::`vftable'; /*0x77ef13*/
  NiTMap_Clear(this); /*0x77ef19*/
  FormHeapFree(*(this + 2)); /*0x77ef22*/
  if ( (a2 & 1) != 0 ) /*0x77ef2f*/
    FormHeapFree((unsigned int)this); /*0x77ef32*/
  return this; /*0x77ef3c*/
}
