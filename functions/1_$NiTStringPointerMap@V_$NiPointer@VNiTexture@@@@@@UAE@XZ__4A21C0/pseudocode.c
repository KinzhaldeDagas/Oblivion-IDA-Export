void __thiscall NiTStringPointerMap<NiPointer<NiTexture>>::~NiTStringPointerMap<NiPointer<NiTexture>>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x4a21c3*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,NiPointer<NiTexture>>,NiPointer<NiTexture>>::`vftable'; /*0x4a21c7*/
  if ( !v2 ) /*0x4a21cd*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x4a21d2*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x4a21db*/
      while ( v4 ) /*0x4a21e0*/
      {
        v5 = v4[1]; /*0x4a21e4*/
        v4 = (_DWORD *)*v4; /*0x4a21e7*/
        FormHeapFree(v5); /*0x4a21ea*/
      }
    }
  }
  NiTPointerMap<char const *,NiPointer<NiTexture>>::~NiTPointerMap<char const *,NiPointer<NiTexture>>(this); /*0x4a2203*/
}
