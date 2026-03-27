NiD3DPass *__thiscall sub_7FB390(NiD3DShader *this)
{
  unsigned int i; // esi
  int v3; // ecx
  unsigned int j; // esi
  int v5; // ecx
  int v6; // ecx

  if ( this->member.ShaderDeclaration )
  {
    for ( i = 0; i < 0x20; ++i )
    {
      v3 = dword_B47288[i];
      if ( v3 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x5C))(v3);
    }
  }
  for ( j = 0; j < 0x27; ++j )
  {
    v5 = dword_B46ED8[j];
    if ( v5 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 0x44))(v5);
    v6 = dword_B46C20[j];
    if ( v6 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x44))(v6);
  }
  return sub_77A4A0(this);
}
