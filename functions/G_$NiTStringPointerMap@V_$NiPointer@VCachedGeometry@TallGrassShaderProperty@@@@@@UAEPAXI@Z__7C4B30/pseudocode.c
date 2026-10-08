_DWORD *__thiscall NiTStringPointerMap<NiPointer<TallGrassShaderProperty::CachedGeometry>>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  NiTStringPointerMap<NiPointer<TallGrassShaderProperty::CachedGeometry>>::~NiTStringPointerMap<NiPointer<TallGrassShaderProperty::CachedGeometry>>(this); /*0x7c4b33*/
  if ( (a2 & 1) != 0 ) /*0x7c4b3d*/
    FormHeapFree((unsigned int)this); /*0x7c4b40*/
  return this; /*0x7c4b4a*/
}
