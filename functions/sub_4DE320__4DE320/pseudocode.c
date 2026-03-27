bool __usercall sub_4DE320@<al>(int a1@<edi>, int a2)
{
  const char *v3; // eax
  bool v4; // bl
  unsigned int i; // edi
  int v6; // esi
  size_t v7; // [esp-Ch] [ebp-10h]

  if ( !a2 )
    return 0;
  v3 = *(const char **)(a2 + 8);
  v4 = 0;
  HIDWORD(v7) = a1;
  if ( v3 )
  {
    LODWORD(v7) = 9;
    if ( !_strnicmp(v3, "FlameNode", v7) )
      v4 = *(_WORD *)(a2 + 0xB8) != 0;
  }
  for ( i = 0; *(unsigned __int16 *)(a2 + 0xB6) > i; ++i )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * i);
    if ( v6 )
    {
      if ( (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6) == dword_B3FAB0 && !v4 )
        v4 = sub_4DE320(v6) != 0;
    }
  }
  return v4;
}
