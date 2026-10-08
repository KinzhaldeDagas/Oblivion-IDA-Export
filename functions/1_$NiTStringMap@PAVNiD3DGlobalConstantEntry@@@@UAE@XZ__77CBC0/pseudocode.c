void __thiscall NiTStringMap<NiD3DGlobalConstantEntry *>::~NiTStringMap<NiD3DGlobalConstantEntry *>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x77cbc3*/
  *this = &NiTStringTemplateMap<NiTMap<char const *,NiD3DGlobalConstantEntry *>,NiD3DGlobalConstantEntry *>::`vftable'; /*0x77cbc7*/
  if ( !v2 ) /*0x77cbcd*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x77cbd2*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x77cbdb*/
      while ( v4 ) /*0x77cbe0*/
      {
        v5 = v4[1]; /*0x77cbe4*/
        v4 = (_DWORD *)*v4; /*0x77cbe7*/
        FormHeapFree(v5); /*0x77cbea*/
      }
    }
  }
  *this = &NiTMap<char const *,NiD3DGlobalConstantEntry *>::`vftable'; /*0x77cc02*/
  NiTMap_Clear(this); /*0x77cc08*/
  *this = &NiTMapBase<DFALL<NiD3DGlobalConstantEntry *>,char const *,NiD3DGlobalConstantEntry *>::`vftable'; /*0x77cc0f*/
  NiTMap_Clear(this); /*0x77cc15*/
  FormHeapFree(*(this + 2)); /*0x77cc1e*/
}
