int __cdecl sub_4A05E0(int a1)
{
  int v1; // esi
  int v3; // eax

  v1 = *(_DWORD *)(a1 + 0xA8); /*0x4a05e5*/
  if ( !v1 ) /*0x4a05ed*/
    return 0; /*0x4a05ef*/
  v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v1 + 4))(*(_DWORD *)(a1 + 0xA8)); /*0x4a05fa*/
  if ( !v3 ) /*0x4a05fe*/
    return 0; /*0x4a060e*/
  while ( (float *)v3 != &OB_ShaderConstantStorage_010201A0[0x1875B] ) /*0x4a0605*/
  {
    v3 = *(_DWORD *)(v3 + 4); /*0x4a0607*/
    if ( !v3 ) /*0x4a060c*/
      return 0; /*0x4a060c*/
  }
  return v1; /*0x4a05f1*/
}
