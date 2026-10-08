void __thiscall NiTStringPointerMap<NiObject * (__cdecl *)(void)>::~NiTStringPointerMap<NiObject * (__cdecl *)(void)>(
        _DWORD *this)
{
  bool v2; // zf
  unsigned int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx

  v2 = *((_BYTE *)this + 0x10) == 0; /*0x713883*/
  *this = &NiTStringTemplateMap<NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>,NiObject * (__cdecl *)(void)>::`vftable'; /*0x713887*/
  if ( !v2 ) /*0x71388d*/
  {
    for ( i = 0; i < *(this + 1); ++i ) /*0x713892*/
    {
      v4 = *(_DWORD **)(*(this + 2) + 4 * i); /*0x71389b*/
      while ( v4 ) /*0x7138a0*/
      {
        v5 = v4[1]; /*0x7138a4*/
        v4 = (_DWORD *)*v4; /*0x7138a7*/
        FormHeapFree(v5); /*0x7138aa*/
      }
    }
  }
  NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>::~NiTPointerMap<char const *,NiObject * (__cdecl *)(void)>(this); /*0x7138c3*/
}
