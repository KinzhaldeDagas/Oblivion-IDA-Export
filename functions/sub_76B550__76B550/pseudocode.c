unsigned int *__thiscall sub_76B550(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'; /*0x76b553*/
  NiTMap_Clear(this); /*0x76b559*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable'; /*0x76b560*/
  NiTMap_Clear(this); /*0x76b566*/
  FormHeapFree(*(this + 2)); /*0x76b56f*/
  if ( (a2 & 1) != 0 ) /*0x76b57c*/
    FormHeapFree((unsigned int)this); /*0x76b57f*/
  return this; /*0x76b589*/
}
