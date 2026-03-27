unsigned int *__thiscall NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::~NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
