unsigned int *__thiscall NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::~NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>(this); /*0x7c3833*/
  if ( (a2 & 1) != 0 ) /*0x7c383d*/
    FormHeapFree((unsigned int)this); /*0x7c3840*/
  return this; /*0x7c384a*/
}
