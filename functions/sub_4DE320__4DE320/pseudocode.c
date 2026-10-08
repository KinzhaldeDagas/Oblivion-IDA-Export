bool __usercall sub_4DE320@<al>(int a1@<edi>, int a2)
{
  const char *v3; // eax
  bool v4; // bl
  unsigned int i; // edi
  int v6; // esi
  size_t v7; // [esp-Ch] [ebp-10h]

  if ( !a2 ) /*0x4de327*/
    return 0; /*0x4de329*/
  v3 = *(const char **)(a2 + 8); /*0x4de32d*/
  v4 = 0; /*0x4de331*/
  HIDWORD(v7) = a1; /*0x4de335*/
  if ( v3 ) /*0x4de336*/
  {
    LODWORD(v7) = 9; /*0x4de338*/
    if ( !_strnicmp(v3, "FlameNode", v7) ) /*0x4de340*/
      v4 = *(_WORD *)(a2 + 0xB8) != 0; /*0x4de355*/
  }
  for ( i = 0; *(unsigned __int16 *)(a2 + 0xB6) > i; ++i ) /*0x4de357*/
  {
    v6 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * i); /*0x4de36f*/
    if ( v6 ) /*0x4de374*/
    {
      if ( (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6) == &parent && !v4 ) /*0x4de38d*/
        v4 = sub_4DE320(i, v6); /*0x4de39c*/
    }
  }
  return v4; /*0x4de32b*/
}
