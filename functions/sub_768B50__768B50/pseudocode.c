unsigned int *__thiscall sub_768B50(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'; /*0x768b53*/
  NiTMap_Clear(this); /*0x768b59*/
  FormHeapFree(*(this + 2)); /*0x768b62*/
  if ( (a2 & 1) != 0 ) /*0x768b6f*/
    FormHeapFree((unsigned int)this); /*0x768b72*/
  return this; /*0x768b7c*/
}
