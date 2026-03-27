unsigned int *__thiscall sub_76B550(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiRenderedCubeMap *,NiDX9RenderedCubeMapData *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
