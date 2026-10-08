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

  v3 = 0; /*0x480f06*/
  if ( !a1 ) /*0x480f0a*/
    return 0; /*0x480fcb*/
  if ( (*((int (__thiscall **)(const char **))*a1 + 4))(a1) ) /*0x480f17*/
  {
    if ( !(_BYTE)a2 || (v4 = a1[2]) != 0 && (LODWORD(v11) = 5, strncmp(v4, "Decal", v11)) ) /*0x480f36*/
    {
      if ( !(_BYTE)a3 ) /*0x480f4a*/
        return 1; /*0x480f4a*/
      LODWORD(v11) = 7; /*0x480f4f*/
      if ( !strncmp(a1[2], "Block (", v11) ) /*0x480f57*/
        return 1; /*0x480f6a*/
    }
    return 0; /*0x480f61*/
  }
  v6 = (*((int (__thiscall **)(const char **))*a1 + 2))(a1); /*0x480f73*/
  v7 = v6; /*0x480f75*/
  if ( !v6 ) /*0x480f79*/
    return 0; /*0x480f79*/
  v8 = *(unsigned __int16 *)(v6 + 0xB6); /*0x480f7b*/
  v9 = 0; /*0x480f82*/
  if ( !*(_WORD *)(v7 + 0xB6) ) /*0x480f7b*/
    return 0; /*0x480fc6*/
  if ( v8 ) /*0x480f8f*/
    goto LABEL_13; /*0x480f8f*/
  for ( i = 0; ; i = *(const char ***)(*(_DWORD *)(v7 + 0xB0) + 4 * v9) ) /*0x480f91*/
  {
    v3 += sub_480F00(i, a2, a3); /*0x480faa*/
    if ( *(unsigned __int16 *)(v7 + 0xB6) <= (unsigned int)++v9 ) /*0x480fbb*/
      break; /*0x480fbb*/
LABEL_13:
    ; /*0x480f95*/
  }
  return v3; /*0x480f63*/
}
