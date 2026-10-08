void __thiscall NiTStringPointerMap<NiPointer<NiSequence>>::~NiTStringPointerMap<NiPointer<NiSequence>>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x6e1063*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,NiPointer<NiSequence>>,NiPointer<NiSequence>>::`vftable'; /*0x6e1067*/
  if ( !v2 ) /*0x6e106d*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x6e1072*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x6e107b*/
      while ( v4 ) /*0x6e1080*/
      {
        v5 = v4[1]; /*0x6e1084*/
        v4 = (_DWORD *)*v4; /*0x6e1087*/
        FormHeapFree(v5); /*0x6e108a*/
      }
    }
  }
  NiTPointerMap<char const *,NiPointer<NiSequence>>::~NiTPointerMap<char const *,NiPointer<NiSequence>>(this); /*0x6e10a3*/
}
