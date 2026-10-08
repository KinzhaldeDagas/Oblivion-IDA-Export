int __cdecl sub_6FA080(char *a1, char *Str2, int a3)
{
  char v3; // bl
  char v4; // al
  int v5; // ecx
  unsigned __int8 v6; // al
  char v7; // al
  int result; // eax
  const char *v9; // ebp
  unsigned int v10; // edi

  v3 = 0; /*0x6fa08c*/
  *(_BYTE *)(a3 + 2) = strlen(a1); /*0x6fa09f*/
  v4 = tolower(*a1); /*0x6fa0a6*/
  v5 = *(unsigned __int8 *)(a3 + 2); /*0x6fa0ab*/
  *(_BYTE *)(a3 + 3) = v4; /*0x6fa0af*/
  *(_BYTE *)a3 = tolower(a1[v5 - 1]); /*0x6fa0bd*/
  v6 = *(_BYTE *)(a3 + 2); /*0x6fa0bf*/
  if ( v6 <= 2u ) /*0x6fa0c7*/
    v7 = 0; /*0x6fa0dc*/
  else
    v7 = tolower(a1[v6 - 2]); /*0x6fa0d2*/
  *(_BYTE *)(a3 + 1) = v7; /*0x6fa0de*/
  result = *(unsigned __int8 *)(a3 + 2); /*0x6fa0e1*/
  *(_DWORD *)(a3 + 4) = 0; /*0x6fa0e7*/
  if ( (unsigned __int8)result > 3u ) /*0x6fa0ea*/
  {
    result = sub_6FA040(a1 + 1, result - 3); /*0x6fa0f3*/
    *(_DWORD *)(a3 + 4) = result; /*0x6fa0fb*/
  }
  if ( Str2 ) /*0x6fa104*/
  {
    *(_DWORD *)(a3 + 4) += sub_6FA040(Str2, strlen(Str2)); /*0x6fa12b*/
    v9 = left; /*0x6fa131*/
    v10 = 0; /*0x6fa136*/
    while ( 1 ) /*0x6fa13e*/
    {
      result = CRT_StricmpLocaleDispatch(v9, Str2); /*0x6fa13e*/
      if ( !result ) /*0x6fa148*/
        break; /*0x6fa148*/
      v10 += 0xA; /*0x6fa14a*/
      ++v3; /*0x6fa14d*/
      v9 += 0xA; /*0x6fa150*/
      if ( v10 >= 0x32 ) /*0x6fa156*/
        return result; /*0x6fa156*/
    }
    *(_BYTE *)(a3 + 3) += 0x20 * (v3 & 0xFC); /*0x6fa169*/
    result = (unsigned __int8)((v3 & 0xFE) << 6); /*0x6fa16c*/
    *(_BYTE *)a3 += result; /*0x6fa16f*/
    *(_BYTE *)(a3 + 1) += v3 << 7; /*0x6fa174*/
  }
  return result; /*0x6fa159*/
}
