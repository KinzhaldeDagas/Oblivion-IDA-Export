int __cdecl __get_qualified_locale(int a1, _WORD *a2, char *Dst)
{
  DWORD *v3; // eax
  int v4; // esi
  const char **v5; // edi
  _BYTE *v6; // eax
  bool v7; // zf
  const char *v8; // edi
  const char *v9; // edi
  LCID UserDefaultLCID; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // edx
  int v14; // ecx
  int v16; // [esp+0h] [ebp-10h]

  v3 = _getptd();
  v4 = (int)(v3 + 0x27);
  if ( !a1 )
  {
    v3[0x29] |= 0x104u;
LABEL_23:
    UserDefaultLCID = GetUserDefaultLCID();
    *(_DWORD *)(v4 + 0x18) = UserDefaultLCID;
    *(_DWORD *)(v4 + 0x1C) = UserDefaultLCID;
    goto LABEL_24;
  }
  v5 = (const char **)(v3 + 0x28);
  *(_DWORD *)v4 = a1;
  v3[0x28] = a1 + 0x40;
  if ( a1 != 0xFFFFFFC0 )
  {
    if ( *(_BYTE *)(a1 + 0x40) )
      TranslateName((int)&off_AB06F0, 0x16, (unsigned __int8 **)v3 + 0x28);
  }
  v6 = *(_BYTE **)v4;
  v7 = *(_DWORD *)v4 == 0;
  *(_DWORD *)(v4 + 8) = 0;
  if ( v7 || !*v6 )
  {
    v9 = *v5;
    if ( !v9 || !*v9 )
    {
      *(_DWORD *)(v4 + 8) = 0x104;
      goto LABEL_23;
    }
    *(_DWORD *)(v4 + 0x14) = strlen(v9) == 3;
    EnumSystemLocalesA((LOCALE_ENUMPROCA)CountryEnumProc, 1u);
    if ( (*(_BYTE *)(v4 + 8) & 4) == 0 )
      *(_DWORD *)(v4 + 8) = 0;
LABEL_24:
    if ( !*(_DWORD *)(v4 + 8) )
      return 0;
    goto LABEL_25;
  }
  if ( *v5 && **v5 )
    GetLcidFromLangCountry(v4);
  else
    GetLcidFromLanguage(v4);
  if ( !*(_DWORD *)(v4 + 8) )
  {
    if ( TranslateName((int)&off_AB04E8, 0x40, (unsigned __int8 **)v4) )
    {
      v8 = *v5;
      if ( v8 && *v8 )
        GetLcidFromLangCountry(v4);
      else
        GetLcidFromLanguage(v4);
    }
    goto LABEL_24;
  }
LABEL_25:
  v11 = ProcessCodePage(a1 != 0 ? (char *)(a1 + 0x80) : 0, v4);
  v12 = v11;
  if ( !v11
    || v11 == 0xFDE8
    || v11 == 0xFDE9
    || !IsValidCodePage((unsigned __int16)v11)
    || !IsValidLocale(*(_DWORD *)(v4 + 0x18), 1u) )
  {
    return 0;
  }
  if ( a2 )
  {
    *a2 = *(_WORD *)(v4 + 0x18);
    a2[1] = *(_WORD *)(v4 + 0x1C);
    a2[2] = v12;
  }
  if ( !Dst )
    return 1;
  if ( *a2 == 0x814 )
  {
    if ( strcpy_s(Dst, 0x40u, "Norwegian-Nynorsk") )
      _invoke_watson(0, v13, v14, v12, (int)Dst, v4);
  }
  else if ( !GetLocaleInfoA(*(_DWORD *)(v4 + 0x18), 0x1001u, Dst, 0x40) )
  {
    return 0;
  }
  if ( GetLocaleInfoA(*(_DWORD *)(v4 + 0x1C), 0x1002u, Dst + 0x40, 0x40) )
  {
    _itoa_s(v12, Dst + 0x80, 0xA00000010uLL, v16);
    return 1;
  }
  return 0;
}
