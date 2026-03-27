unsigned int *__thiscall sub_76B490(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTPointerMap<NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiVBBlock *,NiDX9Renderer::PrePackObject *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
