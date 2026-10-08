int __usercall __get_qualified_locale@<eax>(int a1@<ebp>, int a2, _WORD *a3, char *Dst)
{
  DWORD *v4; // eax
  int v5; // esi
  const char **v6; // edi
  _BYTE *v7; // eax
  bool v8; // zf
  const char *v9; // edi
  const char *v10; // edi
  LCID UserDefaultLCID; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // edx
  int v15; // ecx
  int v17; // [esp+0h] [ebp-10h]

  v4 = _getptd(a1); /*0x99b045*/
  v5 = (int)(v4 + 0x27); /*0x99b052*/
  if ( !a2 ) /*0x99b05a*/
  {
    v4[0x29] |= 0x104u; /*0x99b05c*/
LABEL_23:
    UserDefaultLCID = GetUserDefaultLCID(); /*0x99b119*/
    *(_DWORD *)(v5 + 0x18) = UserDefaultLCID; /*0x99b11f*/
    *(_DWORD *)(v5 + 0x1C) = UserDefaultLCID; /*0x99b122*/
    goto LABEL_24; /*0x99b122*/
  }
  v6 = (const char **)(v4 + 0x28); /*0x99b06d*/
  *(_DWORD *)v5 = a2; /*0x99b070*/
  v4[0x28] = a2 + 0x40; /*0x99b072*/
  if ( a2 != 0xFFFFFFC0 ) /*0x99b074*/
  {
    if ( *(_BYTE *)(a2 + 0x40) ) /*0x99b076*/
      TranslateName((int)&off_AB06F0, 0x16, (const char **)v4 + 0x28); /*0x99b082*/
  }
  v7 = *(_BYTE **)v5; /*0x99b08a*/
  v8 = *(_DWORD *)v5 == 0; /*0x99b08c*/
  *(_DWORD *)(v5 + 8) = 0; /*0x99b08e*/
  if ( v8 || !*v7 ) /*0x99b093*/
  {
    v10 = *v6; /*0x99b0de*/
    if ( !v10 || !*v10 ) /*0x99b0e4*/
    {
      *(_DWORD *)(v5 + 8) = 0x104; /*0x99b112*/
      goto LABEL_23; /*0x99b112*/
    }
    *(_DWORD *)(v5 + 0x14) = strlen(v10) == 3; /*0x99b0fe*/
    EnumSystemLocalesA((LOCALE_ENUMPROCA)CountryEnumProc, 1u); /*0x99b101*/
    if ( (*(_BYTE *)(v5 + 8) & 4) == 0 ) /*0x99b10b*/
      *(_DWORD *)(v5 + 8) = 0; /*0x99b10d*/
LABEL_24:
    if ( !*(_DWORD *)(v5 + 8) ) /*0x99b128*/
      return 0; /*0x99b128*/
    goto LABEL_25; /*0x99b128*/
  }
  if ( *v6 && **v6 ) /*0x99b09d*/
    GetLcidFromLangCountry(v5); /*0x99b0a1*/
  else
    GetLcidFromLanguage(v5); /*0x99b0a8*/
  if ( !*(_DWORD *)(v5 + 8) ) /*0x99b0ad*/
  {
    if ( TranslateName((int)&off_AB04E8, 0x40, (const char **)v5) ) /*0x99b0ba*/
    {
      v9 = *v6; /*0x99b0c6*/
      if ( v9 && *v9 ) /*0x99b0cc*/
        GetLcidFromLangCountry(v5); /*0x99b0d0*/
      else
        GetLcidFromLanguage(v5); /*0x99b0d7*/
    }
    goto LABEL_24; /*0x99b0d5*/
  }
LABEL_25:
  v12 = ProcessCodePage(a2 != 0 ? (char *)(a2 + 0x80) : 0, v5);
  v13 = v12; /*0x99b143*/
  if ( !v12 /*0x99b17c*/
    || v12 == 0xFDE8
    || v12 == 0xFDE9
    || !IsValidCodePage((unsigned __int16)v12)
    || !IsValidLocale(*(_DWORD *)(v5 + 0x18), 1u) )
  {
    return 0; /*0x99b184*/
  }
  if ( a3 ) /*0x99b190*/
  {
    *a3 = *(_WORD *)(v5 + 0x18); /*0x99b196*/
    a3[1] = *(_WORD *)(v5 + 0x1C); /*0x99b19d*/
    a3[2] = v13; /*0x99b1a1*/
  }
  if ( !Dst ) /*0x99b1ab*/
    return 1; /*0x99b1ab*/
  if ( *a3 == 0x814 ) /*0x99b1b8*/
  {
    if ( strcpy_s(Dst, 0x40u, "Norwegian-Nynorsk") ) /*0x99b1c2*/
      _invoke_watson(0, v14, v15, v13, (int)Dst, v5); /*0x99b1d5*/
  }
  else if ( !GetLocaleInfoA(*(_DWORD *)(v5 + 0x18), 0x1001u, Dst, 0x40) ) /*0x99b1ee*/
  {
    return 0; /*0x99b1ee*/
  }
  if ( GetLocaleInfoA(*(_DWORD *)(v5 + 0x1C), 0x1002u, Dst + 0x40, 0x40) ) /*0x99b1fe*/
  {
    _itoa_s(v13, Dst + 0x80, 0xA00000010uLL, v17); /*0x99b210*/
    return 1; /*0x99b21b*/
  }
  return 0; /*0x99b21f*/
}
