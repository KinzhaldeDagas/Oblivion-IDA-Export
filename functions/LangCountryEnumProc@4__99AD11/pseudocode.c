BOOL __stdcall LangCountryEnumProc(LPSTR a1)
{
  DWORD *v1; // esi
  int v2; // ecx
  int v3; // edi
  int v5; // edx
  BOOL v6; // eax
  size_t v7; // [esp-4h] [ebp-8Ch]
  const char *v8; // [esp-4h] [ebp-8Ch]
  CHAR LCData[120]; // [esp+Ch] [ebp-7Ch] BYREF
  int savedregs; // [esp+88h] [ebp+0h] BYREF

  v1 = _getptd((int)&savedregs) + 0x27; /*0x99ad30*/
  v3 = LcidFromHexString(v2, a1); /*0x99ad41*/
  if ( !GetLocaleInfoA(v3, v1[5] != 0 ? 7 : 0x1002, LCData, 0x78) )
    goto LABEL_2; /*0x99ad60*/
  if ( !CRT_StricmpLocaleDispatch((const char *)v1[1], LCData) )
  {
    if ( !GetLocaleInfoA(v3, v1[4] != 0 ? 3 : 0x1001, LCData, 0x78) )
      goto LABEL_2; /*0x99ada1*/
    if ( !CRT_StricmpLocaleDispatch((const char *)*v1, LCData) ) /*0x99ada9*/
    {
      v1[2] |= 0x304u; /*0x99adb4*/
      v1[6] = v3; /*0x99adbb*/
LABEL_15:
      v1[7] = v3; /*0x99ae12*/
      goto LABEL_16; /*0x99ae12*/
    }
    if ( (v1[2] & 2) != 0 ) /*0x99adc4*/
      goto LABEL_16; /*0x99adc4*/
    if ( v1[3] && (LODWORD(v7) = v1[3], !_strnicmp((const char *)*v1, LCData, v7)) ) /*0x99add4*/
    {
      v8 = (const char *)*v1; /*0x99ade0*/
      v1[2] |= 2u; /*0x99ade2*/
      v1[7] = v3; /*0x99ade6*/
      if ( (unsigned int)strlen(v8) == v1[3] ) /*0x99adf2*/
        v1[6] = v3; /*0x99adf4*/
    }
    else if ( (v1[2] & 1) == 0 && TestDefaultCountry(v3) ) /*0x99ae02*/
    {
      v1[2] = v5 | 1; /*0x99ae0f*/
      goto LABEL_15; /*0x99ae0f*/
    }
  }
LABEL_16:
  if ( (v1[2] & 0x300) == 0x300 ) /*0x99ae21*/
    return (v1[2] & 4) == 0; /*0x99ae21*/
  if ( !GetLocaleInfoA(v3, v1[4] != 0 ? 3 : 0x1001, LCData, 0x78) )
  {
LABEL_2:
    v1[2] = 0; /*0x99ad62*/
    return 1; /*0x99ad69*/
  }
  if ( CRT_StricmpLocaleDispatch((const char *)*v1, LCData) ) /*0x99ae50*/
  {
    if ( v1[4] || !v1[3] || CRT_StricmpLocaleDispatch((const char *)*v1, LCData) ) /*0x99ae9c*/
      return (v1[2] & 4) == 0; /*0x99aea5*/
    v6 = TestDefaultLanguage(v3, 0); /*0x99aeab*/
  }
  else
  {
    v1[2] |= 0x200u; /*0x99ae5d*/
    if ( v1[4] ) /*0x99ae64*/
    {
      v1[2] |= 0x100u; /*0x99ae71*/
      goto LABEL_30; /*0x99ae74*/
    }
    if ( !v1[3] || (unsigned int)strlen((const char *)*v1) != v1[3] ) /*0x99ae86*/
    {
LABEL_29:
      v1[2] |= 0x100u; /*0x99aeb6*/
LABEL_30:
      if ( !v1[6] ) /*0x99aebd*/
        v1[6] = v3; /*0x99aec2*/
      return (v1[2] & 4) == 0; /*0x99aec2*/
    }
    v6 = TestDefaultLanguage(v3, 1); /*0x99ae8a*/
  }
  if ( v6 ) /*0x99aeb4*/
    goto LABEL_29; /*0x99aeb4*/
  return (v1[2] & 4) == 0; /*0x99aed0*/
}
