void __thiscall NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::~NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
