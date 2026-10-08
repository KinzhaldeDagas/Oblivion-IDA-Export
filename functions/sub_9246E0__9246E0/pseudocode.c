char __usercall sub_9246E0@<al>(int a1@<ebx>, int a2)
{
  int v2; // eax
  int v3; // ebp
  char *v4; // edi
  char v5; // al
  unsigned int v6; // eax
  unsigned int v7; // eax
  char v8; // al
  char *v9; // ecx
  _BYTE *v10; // edx
  int v11; // esi
  int v12; // eax
  int v14; // eax
  char v15; // cl
  size_t v16; // [esp-4h] [ebp-118h]
  size_t v17; // [esp-4h] [ebp-118h]
  bool v18; // [esp+Fh] [ebp-105h]
  int v19; // [esp+10h] [ebp-104h]
  char Dest[256]; // [esp+14h] [ebp-100h] BYREF

  v18 = dword_A95BF8 < 0; /*0x9246f1*/
  v2 = 0; /*0x9246f5*/
  v19 = 0; /*0x9246f8*/
  while ( 1 ) /*0x924700*/
  {
    v3 = *(_DWORD *)(4 * v2 + 0xA9DE44); /*0x924700*/
    v4 = off_B2E2D0; /*0x92470c*/
    v5 = *off_B2E2D0; /*0x92470e*/
    if ( v5 != 0x2E ) /*0x924712*/
    {
      while ( v5 ) /*0x924716*/
      {
        v5 = *++v4; /*0x92471c*/
        if ( v5 == 0x2E ) /*0x924722*/
          goto LABEL_5; /*0x924722*/
      }
      goto LABEL_27; /*0x924716*/
    }
LABEL_5:
    if ( strstr(v4, "Prime") ) /*0x92472a*/
    {
      if ( a2 ) /*0x924743*/
      {
        Dest[0] = 0; /*0x92474e*/
        if ( strlen("The following component is not enabled in Havok Prime:\n\n\t\t") >= 0xFE - strlen(Dest) ) /*0x92477a*/
          v6 = 0xFE - strlen(Dest); /*0x9247a6*/
        else
          v6 = strlen("The following component is not enabled in Havok Prime:\n\n\t\t"); /*0x924781*/
        LODWORD(v16) = v6; /*0x9247a8*/
        strncat(Dest, "The following component is not enabled in Havok Prime:\n\n\t\t", v16); /*0x9247b3*/
        if ( strlen("The following component is not enabled in Havok Prime:\n\n\t\t") >= 0xFE - strlen(Dest) ) /*0x9247e7*/
          v7 = 0xFE - strlen(Dest); /*0x924813*/
        else
          v7 = strlen("The following component is not enabled in Havok Prime:\n\n\t\t"); /*0x9247ee*/
        LODWORD(v17) = v7; /*0x92481c*/
        strncat(Dest, *(const char **)(4 * a2 + 0xB30124), v17); /*0x92482a*/
        sub_8B16A0(a1, Dest); /*0x924834*/
      }
    }
    v8 = v4[1]; /*0x92483c*/
    v9 = v4 + 1; /*0x924841*/
    if ( v8 != 0x2E ) /*0x924844*/
    {
      while ( v8 ) /*0x924848*/
      {
        v8 = *++v9; /*0x92484e*/
        if ( v8 == 0x2E ) /*0x924854*/
          goto LABEL_17; /*0x924854*/
      }
LABEL_27:
      sub_8B16A0( /*0x9248e8*/
        a1,
        "Havok Physics evaluation key has expired or is invalid.\n"
        "Please contact Havok.com for an extension.\n"
        "No simulation possible.");
      return 0; /*0x924900*/
    }
LABEL_17:
    v10 = v9 + 1; /*0x92485c*/
    if ( !v18 ) /*0x92485f*/
      break; /*0x92485f*/
    v11 = v3 ^ dword_A95BF8 & 0x7FFFFFFF; /*0x92486d*/
    v12 = sub_94FEE0(); /*0x92486f*/
    if ( v11 > v12 && v11 - v12 < 0xED4E00 ) /*0x924880*/
      goto LABEL_20; /*0x924880*/
LABEL_26:
    v2 = ++v19; /*0x9248d6*/
    if ( v19 >= 3 ) /*0x9248e2*/
      goto LABEL_27; /*0x9248e2*/
  }
  v14 = 0; /*0x9248af*/
  if ( *v10 ) /*0x9248ad*/
  {
    do /*0x9248c3*/
    {
      v15 = *++v10; /*0x9248b5*/
      v14 = v15 + 0x17 * v14; /*0x9248bf*/
    }
    while ( v15 ); /*0x9248c3*/
  }
  if ( dword_A95BF8 != ((v3 ^ v14) & 0x7FFFFFFF) ) /*0x9248d4*/
    goto LABEL_26; /*0x9248d4*/
LABEL_20:
  if ( !a2 || v19 != 2 ) /*0x924892*/
    return 1; /*0x924903*/
  sub_8B16A0(
    a1,
    "Product mismatch: Prime keyvalue detected in non prime keycode.\n"
    "Please check your keycode or contact your Havok Account Manager.");
  return 0; /*0x9248a1*/
}
