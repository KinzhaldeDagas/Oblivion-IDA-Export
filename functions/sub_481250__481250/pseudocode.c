const char **__usercall sub_481250@<eax>(int a1@<ebp>, const char **a2, _DWORD *a3, int a4, int a5)
{
  const char **result; // eax
  const char *v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // esi
  const char **i; // eax
  size_t v12; // [esp-Ch] [ebp-10h]

  if ( !a2 )
    return 0;
  HIDWORD(v12) = a1;
  if ( (*((int (__thiscall **)(const char **))*a2 + 4))(a2) )
  {
    if ( !(_BYTE)a4 || (v6 = a2[2]) != 0 && (LODWORD(v12) = 5, strncmp(v6, "Decal", v12)) )
    {
      if ( !(_BYTE)a5 || (LODWORD(v12) = 7, !strncmp(a2[2], "Block (", v12)) )
      {
        if ( !*a3 )
          return a2;
        --*a3;
      }
    }
  }
  v7 = (*((int (__thiscall **)(const char **))*a2 + 2))(a2);
  v8 = v7;
  if ( !v7 )
    return 0;
  v9 = *(unsigned __int16 *)(v7 + 0xB6);
  v10 = 0;
  if ( !*(_WORD *)(v8 + 0xB6) )
    return 0;
  if ( v9 )
    goto LABEL_16;
  for ( i = 0; ; i = *(const char ***)(*(_DWORD *)(v8 + 0xB0) + 4 * v10) )
  {
    result = sub_481250(i, a3, a4, a5);
    if ( result )
      break;
    if ( *(unsigned __int16 *)(v8 + 0xB6) <= (unsigned int)++v10 )
      return 0;
LABEL_16:
    ;
  }
  return result;
}
