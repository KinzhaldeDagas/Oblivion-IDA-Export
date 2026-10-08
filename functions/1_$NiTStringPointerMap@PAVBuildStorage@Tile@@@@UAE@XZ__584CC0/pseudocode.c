void __thiscall NiTStringPointerMap<Tile::BuildStorage *>::~NiTStringPointerMap<Tile::BuildStorage *>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x584cc3*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,Tile::BuildStorage *>,Tile::BuildStorage *>::`vftable'; /*0x584cc7*/
  if ( !v2 ) /*0x584ccd*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x584cd2*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x584cdb*/
      while ( v4 ) /*0x584ce0*/
      {
        v5 = v4[1]; /*0x584ce4*/
        v4 = (_DWORD *)*v4; /*0x584ce7*/
        FormHeapFree(v5); /*0x584cea*/
      }
    }
  }
  NiTPointerMap<char const *,Tile::BuildStorage *>::~NiTPointerMap<char const *,Tile::BuildStorage *>(this); /*0x584d03*/
}
