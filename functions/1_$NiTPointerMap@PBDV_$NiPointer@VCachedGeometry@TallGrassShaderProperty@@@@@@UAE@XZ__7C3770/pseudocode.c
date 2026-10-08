void __thiscall NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::~NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`vftable'; /*0x7c3798*/
  NiTMap_Clear(this); /*0x7c37a6*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`vftable'; /*0x7c37b5*/
  NiTMap_Clear(this); /*0x7c37bb*/
  FormHeapFree(*(this + 2)); /*0x7c37c4*/
}
