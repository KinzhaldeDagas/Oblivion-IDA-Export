char __usercall sub_480FD0@<al>(int a1@<ebp>, const char **a2, const char **a3, _DWORD *a4, int a5, int a6)
{
  char result; // al
  const char *v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // esi
  const char **i; // eax
  size_t v13; // [esp-Ch] [ebp-10h]

  if ( a2 == a3 )
    return 1;
  if ( !a2 )
    return 0;
  HIDWORD(v13) = a1;
  if ( (*((int (__thiscall **)(const char **))*a2 + 4))(a2) )
  {
    if ( !(_BYTE)a5 || (v7 = a2[2]) != 0 && (LODWORD(v13) = 5, strncmp(v7, "Decal", v13)) )
    {
      if ( !(_BYTE)a6 || (LODWORD(v13) = 7, !strncmp(a2[2], "Block (", v13)) )
        ++*a4;
    }
  }
  v8 = (*((int (__thiscall **)(const char **))*a2 + 2))(a2);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = *(unsigned __int16 *)(v8 + 0xB6);
  v11 = 0;
  if ( !*(_WORD *)(v9 + 0xB6) )
    return 0;
  if ( v10 )
    goto LABEL_16;
  for ( i = 0; ; i = *(const char ***)(*(_DWORD *)(v9 + 0xB0) + 4 * v11) )
  {
    result = sub_480FD0(i, a3, a4, a5, a6);
    if ( result )
      break;
    if ( *(unsigned __int16 *)(v9 + 0xB6) <= (unsigned int)++v11 )
      return 0;
LABEL_16:
    ;
  }
  return result;
}
