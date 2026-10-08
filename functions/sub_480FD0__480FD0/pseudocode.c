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

  if ( a2 == a3 ) /*0x480fd9*/
    return 1; /*0x480fdb*/
  if ( !a2 ) /*0x480fe1*/
    return 0; /*0x480fe3*/
  HIDWORD(v13) = a1; /*0x480fed*/
  if ( (*((int (__thiscall **)(const char **))*a2 + 4))(a2) ) /*0x480ff0*/
  {
    if ( !(_BYTE)a5 || (v7 = a2[2]) != 0 && (LODWORD(v13) = 5, strncmp(v7, "Decal", v13)) ) /*0x481014*/
    {
      if ( !(_BYTE)a6 || (LODWORD(v13) = 7, !strncmp(a2[2], "Block (", v13)) ) /*0x48102f*/
        ++*a4; /*0x48103b*/
    }
  }
  v8 = (*((int (__thiscall **)(const char **))*a2 + 2))(a2); /*0x481047*/
  v9 = v8; /*0x481049*/
  if ( !v8 ) /*0x48104d*/
    return 0; /*0x48104d*/
  v10 = *(unsigned __int16 *)(v8 + 0xB6); /*0x48104f*/
  v11 = 0; /*0x481056*/
  if ( !*(_WORD *)(v9 + 0xB6) ) /*0x48104f*/
    return 0; /*0x481094*/
  if ( v10 ) /*0x48105e*/
    goto LABEL_16; /*0x48105e*/
  for ( i = 0; ; i = *(const char ***)(*(_DWORD *)(v9 + 0xB0) + 4 * v11) ) /*0x481060*/
  {
    result = sub_480FD0((int)a4, i, a3, a4, a5, a6); /*0x48107a*/
    if ( result ) /*0x481084*/
      break; /*0x481084*/
    if ( *(unsigned __int16 *)(v9 + 0xB6) <= (unsigned int)++v11 ) /*0x481092*/
      return 0; /*0x481092*/
LABEL_16:
    ; /*0x481064*/
  }
  return result; /*0x480fdd*/
}
