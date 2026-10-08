void __thiscall NiTStringPointerMap<NiControllerSequence *>::~NiTStringPointerMap<NiControllerSequence *>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x6c5053*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,NiControllerSequence *>,NiControllerSequence *>::`vftable'; /*0x6c5057*/
  if ( !v2 ) /*0x6c505d*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x6c5062*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x6c506b*/
      while ( v4 ) /*0x6c5070*/
      {
        v5 = v4[1]; /*0x6c5074*/
        v4 = (_DWORD *)*v4; /*0x6c5077*/
        FormHeapFree(v5); /*0x6c507a*/
      }
    }
  }
  NiTPointerMap<char const *,NiControllerSequence *>::~NiTPointerMap<char const *,NiControllerSequence *>(this); /*0x6c5093*/
}
