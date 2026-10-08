NiD3DPass *__thiscall sub_7C90B0(NiD3DShader *this)
{
  unsigned int i; // esi
  int v3; // ecx
  unsigned int j; // esi
  int v5; // ecx

  if ( this->member.ShaderDeclaration ) /*0x7c90b4*/
  {
    for ( i = 0; i < 0x81; ++i ) /*0x7c90ba*/
    {
      v3 = unk_B45290[i]; /*0x7c90c0*/
      if ( v3 ) /*0x7c90c8*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x5C))(v3); /*0x7c90cf*/
    }
  }
  for ( j = 0; j < 0x81; ++j ) /*0x7c90dc*/
  {
    v5 = unk_B45088[j]; /*0x7c90e0*/
    if ( v5 ) /*0x7c90e8*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 0x44))(v5); /*0x7c90ef*/
  }
  return sub_77A4A0(this); /*0x7c90fe*/
}
