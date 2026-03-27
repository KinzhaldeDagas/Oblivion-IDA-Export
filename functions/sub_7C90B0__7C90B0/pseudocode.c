NiD3DPass *__thiscall sub_7C90B0(NiD3DShader *this)
{
  unsigned int i; // esi
  int v3; // ecx
  unsigned int j; // esi
  int v5; // ecx

  if ( this->member.ShaderDeclaration )
  {
    for ( i = 0; i < 0x81; ++i )
    {
      v3 = dword_B45290[i];
      if ( v3 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x5C))(v3);
    }
  }
  for ( j = 0; j < 0x81; ++j )
  {
    v5 = dword_B45088[j];
    if ( v5 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 0x44))(v5);
  }
  return sub_77A4A0(this);
}
