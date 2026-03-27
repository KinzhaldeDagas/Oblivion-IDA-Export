unsigned int *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>(
        unsigned int *this,
        char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
