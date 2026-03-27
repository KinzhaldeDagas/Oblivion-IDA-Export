_DWORD *__thiscall NiTStringPointerMap<NiPointer<TallGrassShaderProperty::CachedGeometry>>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  NiTStringPointerMap<NiPointer<TallGrassShaderProperty::CachedGeometry>>::~NiTStringPointerMap<NiPointer<TallGrassShaderProperty::CachedGeometry>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
