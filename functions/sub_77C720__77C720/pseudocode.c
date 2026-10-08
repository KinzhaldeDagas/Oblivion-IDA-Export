unsigned int *__thiscall sub_77C720(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiShaderLibrary>>::`vftable'; /*0x77c723*/
  NiTMap_Clear(this); /*0x77c729*/
  FormHeapFree(*(this + 2)); /*0x77c732*/
  if ( (a2 & 1) != 0 ) /*0x77c73f*/
    FormHeapFree((unsigned int)this); /*0x77c742*/
  return this; /*0x77c74c*/
}
