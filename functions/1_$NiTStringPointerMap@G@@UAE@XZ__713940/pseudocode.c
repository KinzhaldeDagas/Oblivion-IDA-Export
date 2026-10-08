void __thiscall NiTStringPointerMap<unsigned short>::~NiTStringPointerMap<unsigned short>(_DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x713943*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short>::`vftable'; /*0x713947*/
  if ( !v2 ) /*0x71394d*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x713952*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x71395b*/
      while ( v4 ) /*0x713960*/
      {
        v5 = v4[1]; /*0x713964*/
        v4 = (_DWORD *)*v4; /*0x713967*/
        FormHeapFree(v5); /*0x71396a*/
      }
    }
  }
  NiTPointerMap<char const *,unsigned short>::~NiTPointerMap<char const *,unsigned short>(this); /*0x713983*/
}
