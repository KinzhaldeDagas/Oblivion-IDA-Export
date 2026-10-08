void __thiscall NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>::~NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>(
        _DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x550623*/
  *this = &NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>::`vftable'; /*0x550627*/
  if ( !v2 ) /*0x55062d*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x550632*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x55063b*/
      while ( v4 ) /*0x550640*/
      {
        v5 = v4[1]; /*0x550644*/
        v4 = (_DWORD *)*v4; /*0x550647*/
        FormHeapFree(v5); /*0x55064a*/
      }
    }
  }
  NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>::~NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>(this); /*0x550663*/
}
