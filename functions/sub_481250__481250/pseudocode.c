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

  if ( !a2 ) /*0x481257*/
    return 0; /*0x48125c*/
  HIDWORD(v12) = a1; /*0x481263*/
  if ( (*((int (__thiscall **)(const char **))*a2 + 4))(a2) ) /*0x481266*/
  {
    if ( !(_BYTE)a4 || (v6 = a2[2]) != 0 && (LODWORD(v12) = 5, strncmp(v6, "Decal", v12)) ) /*0x48128a*/
    {
      if ( !(_BYTE)a5 || (LODWORD(v12) = 7, !strncmp(a2[2], "Block (", v12)) ) /*0x4812a5*/
      {
        if ( !*a3 ) /*0x4812b1*/
          return a2; /*0x4812bd*/
        --*a3; /*0x4812c1*/
      }
    }
  }
  v7 = (*((int (__thiscall **)(const char **))*a2 + 2))(a2); /*0x4812cc*/
  v8 = v7; /*0x4812ce*/
  if ( !v7 ) /*0x4812d2*/
    return 0; /*0x4812d2*/
  v9 = *(unsigned __int16 *)(v7 + 0xB6); /*0x4812d4*/
  v10 = 0; /*0x4812db*/
  if ( !*(_WORD *)(v8 + 0xB6) ) /*0x4812d4*/
    return 0; /*0x481314*/
  if ( v9 ) /*0x4812e3*/
    goto LABEL_16; /*0x4812e3*/
  for ( i = 0; ; i = *(const char ***)(*(_DWORD *)(v8 + 0xB0) + 4 * v10) ) /*0x4812e5*/
  {
    result = sub_481250((int)a3, i, a3, a4, a5); /*0x4812fa*/
    if ( result ) /*0x481304*/
      break; /*0x481304*/
    if ( *(unsigned __int16 *)(v8 + 0xB6) <= (unsigned int)++v10 ) /*0x481312*/
      return 0; /*0x481312*/
LABEL_16:
    ; /*0x4812e9*/
  }
  return result; /*0x48125b*/
}
