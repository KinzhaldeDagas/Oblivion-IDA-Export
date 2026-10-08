void __thiscall NiTStringPointerMap<NiPointer<TallGrassShaderProperty::CachedGeometry>>::~NiTStringPointerMap<NiPointer<TallGrassShaderProperty::CachedGeometry>>(
        _DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x7c37e3*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`vftable'; /*0x7c37e7*/
  if ( !v2 ) /*0x7c37ed*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x7c37f2*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x7c37fb*/
      while ( v4 ) /*0x7c3800*/
      {
        v5 = v4[1]; /*0x7c3804*/
        v4 = (_DWORD *)*v4; /*0x7c3807*/
        FormHeapFree(v5); /*0x7c380a*/
      }
    }
  }
  NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::~NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>(this); /*0x7c3823*/
}
