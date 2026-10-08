void __thiscall NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>::~NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>(
        _DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x46c1d3*/
  *this = &NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>::`vftable'; /*0x46c1d7*/
  if ( !v2 ) /*0x46c1dd*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x46c1e2*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x46c1eb*/
      while ( v4 ) /*0x46c1f0*/
      {
        v5 = v4[1]; /*0x46c1f4*/
        v4 = (_DWORD *)*v4; /*0x46c1f7*/
        FormHeapFree(v5); /*0x46c1fa*/
      }
    }
  }
  NiTMap<char const *,TESForm *>::~NiTMap<char const *,TESForm *>(this); /*0x46c213*/
}
