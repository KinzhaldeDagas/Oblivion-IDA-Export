int sub_76F900()
{
  int v0; // ecx
  unsigned int i; // edi
  unsigned int v2; // esi
  int j; // eax
  int v4; // ecx
  _WORD *v5; // edx
  int result; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  int v9; // edi
  unsigned int v10; // [esp-4h] [ebp-14h]

  v0 = unk_B42700; /*0x76f900*/
  for ( i = 0; i < *(unsigned __int16 *)(v0 + 0xA); ++i ) /*0x76f90e*/
  {
    v2 = *(_DWORD *)(*(_DWORD *)(v0 + 4) + 4 * i); /*0x76f923*/
    if ( v2 ) /*0x76f928*/
    {
      for ( j = 0; (unsigned __int16)j < *(_WORD *)(v2 + 0xE); *(_DWORD *)(*(_DWORD *)(v2 + 8) + 4 * v4) = 0 ) /*0x76f92c*/
        v4 = (unsigned __int16)j++; /*0x76f935*/
      *(_WORD *)(v2 + 0xE) = 0; /*0x76f944*/
      *(_WORD *)(v2 + 0x10) = 0; /*0x76f948*/
      v10 = *(_DWORD *)(v2 + 8); /*0x76f94f*/
      *(_DWORD *)(v2 + 4) = &NiTArray<unsigned int (__cdecl *)(NiD3DShaderDeclaration::PackingParameters &)>::`vftable'; /*0x76f950*/
      FormHeapFree(v10); /*0x76f953*/
      FormHeapFree(v2); /*0x76f959*/
      v0 = unk_B42700; /*0x76f95e*/
    }
  }
  v5 = (_WORD *)(v0 + 0xA); /*0x76f972*/
  result = 0; /*0x76f975*/
  v7 = v0; /*0x76f97a*/
  if ( *(_WORD *)(v0 + 0xA) ) /*0x76f977*/
  {
    v8 = (_DWORD *)(v0 + 4); /*0x76f97e*/
    do /*0x76f990*/
    {
      v9 = (unsigned __int16)result++; /*0x76f983*/
      *(_DWORD *)(*v8 + 4 * v9) = 0; /*0x76f989*/
    }
    while ( (unsigned __int16)result < *v5 ); /*0x76f990*/
  }
  *(_WORD *)(v7 + 0xC) = 0; /*0x76f993*/
  *v5 = 0; /*0x76f997*/
  if ( unk_B42700 ) /*0x76f99a*/
    return (**(int (__thiscall ***)(int, int))unk_B42700)(unk_B42700, 1); /*0x76f9ad*/
  return result; /*0x76f992*/
}
