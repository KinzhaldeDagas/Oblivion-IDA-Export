NiD3DPass *__thiscall sub_7FB390(NiD3DShader *this)
{
  unsigned int i; // esi
  int v3; // ecx
  unsigned int j; // esi
  int v5; // ecx
  int v6; // ecx

  if ( this->member.ShaderDeclaration ) /*0x7fb394*/
  {
    for ( i = 0; i < 0x20; ++i ) /*0x7fb39a*/
    {
      v3 = unk_B47288[i]; /*0x7fb3a0*/
      if ( v3 ) /*0x7fb3a8*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x5C))(v3); /*0x7fb3af*/
    }
  }
  for ( j = 0; j < 0x27; ++j ) /*0x7fb3bc*/
  {
    v5 = unk_B46ED8[j]; /*0x7fb3c0*/
    if ( v5 ) /*0x7fb3c8*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 0x44))(v5); /*0x7fb3cf*/
    v6 = unk_B46C20[j]; /*0x7fb3d1*/
    if ( v6 ) /*0x7fb3d9*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x44))(v6); /*0x7fb3e0*/
  }
  return sub_77A4A0(this); /*0x7fb3ef*/
}
