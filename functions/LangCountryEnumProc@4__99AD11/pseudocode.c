BOOL __stdcall LangCountryEnumProc(LPSTR a1)
{
  DWORD *v1; // esi
  int v2; // ecx
  int v3; // edi
  int v5; // edx
  BOOL v6; // eax
  size_t v7; // [esp-4h] [ebp-8Ch]
  unsigned __int8 *v8; // [esp-4h] [ebp-8Ch]
  CHAR LCData[120]; // [esp+Ch] [ebp-7Ch] BYREF

  v1 = _getptd() + 0x27;
  v3 = LcidFromHexString(v2, a1);
  if ( !GetLocaleInfoA(v3, v1[5] != 0 ? 7 : 0x1002, LCData, 0x78) )
    goto LABEL_2;
  if ( !_strcmp((unsigned __int8 *)v1[1], (unsigned __int8 *)LCData) )
  {
    if ( !GetLocaleInfoA(v3, v1[4] != 0 ? 3 : 0x1001, LCData, 0x78) )
      goto LABEL_2;
    if ( !_strcmp((unsigned __int8 *)*v1, (unsigned __int8 *)LCData) )
    {
      v1[2] |= 0x304u;
      v1[6] = v3;
LABEL_15:
      v1[7] = v3;
      goto LABEL_16;
    }
    if ( (v1[2] & 2) != 0 )
      goto LABEL_16;
    if ( v1[3] && (LODWORD(v7) = v1[3], !_strnicmp((const char *)*v1, LCData, v7)) )
    {
      v8 = (unsigned __int8 *)*v1;
      v1[2] |= 2u;
      v1[7] = v3;
      if ( (unsigned int)strlen((const char *)v8) == v1[3] )
        v1[6] = v3;
    }
    else if ( (v1[2] & 1) == 0 && TestDefaultCountry(v3) )
    {
      v1[2] = v5 | 1;
      goto LABEL_15;
    }
  }
LABEL_16:
  if ( (v1[2] & 0x300) == 0x300 )
    return (v1[2] & 4) == 0;
  if ( !GetLocaleInfoA(v3, v1[4] != 0 ? 3 : 0x1001, LCData, 0x78) )
  {
LABEL_2:
    v1[2] = 0;
    return 1;
  }
  if ( !_strcmp((unsigned __int8 *)*v1, (unsigned __int8 *)LCData) )
  {
    v1[2] |= 0x200u;
    if ( v1[4] )
    {
      v1[2] |= 0x100u;
      goto LABEL_30;
    }
    if ( !v1[3] || (unsigned int)strlen((const char *)*v1) != v1[3] )
    {
LABEL_29:
      v1[2] |= 0x100u;
LABEL_30:
      if ( !v1[6] )
        v1[6] = v3;
      return (v1[2] & 4) == 0;
    }
    v6 = TestDefaultLanguage(v3, 1);
  }
  else
  {
    if ( v1[4] || !v1[3] || _strcmp((unsigned __int8 *)*v1, (unsigned __int8 *)LCData) )
      return (v1[2] & 4) == 0;
    v6 = TestDefaultLanguage(v3, 0);
  }
  if ( v6 )
    goto LABEL_29;
  return (v1[2] & 4) == 0;
}
