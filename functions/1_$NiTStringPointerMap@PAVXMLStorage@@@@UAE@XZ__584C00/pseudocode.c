void __thiscall NiTStringPointerMap<XMLStorage *>::~NiTStringPointerMap<XMLStorage *>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x584c03*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,XMLStorage *>,XMLStorage *>::`vftable'; /*0x584c07*/
  if ( !v2 ) /*0x584c0d*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x584c12*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x584c1b*/
      while ( v4 ) /*0x584c20*/
      {
        v5 = v4[1]; /*0x584c24*/
        v4 = (_DWORD *)*v4; /*0x584c27*/
        FormHeapFree(v5); /*0x584c2a*/
      }
    }
  }
  NiTPointerMap<char const *,XMLStorage *>::~NiTPointerMap<char const *,XMLStorage *>(this); /*0x584c43*/
}
