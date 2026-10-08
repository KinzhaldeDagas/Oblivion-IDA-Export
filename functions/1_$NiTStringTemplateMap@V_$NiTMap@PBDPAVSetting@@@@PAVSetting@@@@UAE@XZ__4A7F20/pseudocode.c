void __thiscall NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::~NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>(
        _DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x4a7f23*/
  *this = &NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::`vftable'; /*0x4a7f27*/
  if ( !v2 ) /*0x4a7f2d*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x4a7f32*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x4a7f3b*/
      while ( v4 ) /*0x4a7f40*/
      {
        v5 = v4[1]; /*0x4a7f44*/
        v4 = (_DWORD *)*v4; /*0x4a7f47*/
        FormHeapFree(v5); /*0x4a7f4a*/
      }
    }
  }
  NiTMap<char const *,Setting *>::~NiTMap<char const *,Setting *>(this); /*0x4a7f63*/
}
