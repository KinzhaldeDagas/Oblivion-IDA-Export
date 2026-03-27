void __thiscall NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::~NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>(
        _DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0;
  *this = &NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::`vftable';
  if ( !v2 )
  {
    for ( i = 0; i < *(this + 1); ++i )
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i);
      while ( v4 )
      {
        v5 = v4[1];
        v4 = (_DWORD *)*v4;
        FormHeapFree(v5);
      }
    }
  }
  NiTMap<char const *,Setting *>::~NiTMap<char const *,Setting *>(this);
}
