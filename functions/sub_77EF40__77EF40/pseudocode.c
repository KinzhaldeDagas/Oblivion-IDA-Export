unsigned int *__thiscall sub_77EF40(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiD3DShaderProgramCreator *>::`vftable'; /*0x77ef43*/
  NiTMap_Clear(this); /*0x77ef49*/
  FormHeapFree(*(this + 2)); /*0x77ef52*/
  if ( (a2 & 1) != 0 ) /*0x77ef5f*/
    FormHeapFree((unsigned int)this); /*0x77ef62*/
  return this; /*0x77ef6c*/
}
