signed int __cdecl sub_480F00(const char **a1, int a2, int a3)
{
  int v3; // ebx
  const char *v4; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // esi
  const char **i; // eax
  size_t v11; // [esp-4h] [ebp-Ch]

  v3 = 0;
  if ( !a1 )
    return 0;
  if ( (*((int (__thiscall **)(const char **))*a1 + 4))(a1) )
  {
    if ( !(_BYTE)a2 || (v4 = a1[2]) != 0 && (LODWORD(v11) = 5, strncmp(v4, "Decal", v11)) )
    {
      if ( !(_BYTE)a3 )
        return 1;
      LODWORD(v11) = 7;
      if ( !strncmp(a1[2], "Block (", v11) )
        return 1;
    }
    return 0;
  }
  v6 = (*((int (__thiscall **)(const char **))*a1 + 2))(a1);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = *(unsigned __int16 *)(v6 + 0xB6);
  v9 = 0;
  if ( !*(_WORD *)(v7 + 0xB6) )
    return 0;
  if ( v8 )
    goto LABEL_13;
  for ( i = 0; ; i = *(const char ***)(*(_DWORD *)(v7 + 0xB0) + 4 * v9) )
  {
    v3 += sub_480F00(i, a2, a3);
    if ( *(unsigned __int16 *)(v7 + 0xB6) <= (unsigned int)++v9 )
      break;
LABEL_13:
    ;
  }
  return v3;
}
