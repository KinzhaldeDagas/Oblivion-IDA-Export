BOOL __stdcall LanguageEnumProc(LPSTR a1)
{
  DWORD *v1; // esi
  int v2; // ecx
  int v3; // edi
  BOOL v5; // eax
  CHAR LCData[120]; // [esp+8h] [ebp-7Ch] BYREF

  v1 = _getptd() + 0x27;
  v3 = LcidFromHexString(v2, a1);
  if ( !GetLocaleInfoA(v3, v1[4] != 0 ? 3 : 0x1001, LCData, 0x78) )
  {
    v1[2] = 0;
    return 1;
  }
  if ( !_strcmp((unsigned __int8 *)*v1, (unsigned __int8 *)LCData) )
  {
    if ( v1[4] )
    {
LABEL_11:
      v1[2] |= 4u;
      v1[6] = v3;
      v1[7] = v3;
      return (v1[2] & 4) == 0;
    }
    v5 = TestDefaultLanguage(v3, 1);
  }
  else
  {
    if ( v1[4] || !v1[3] || _strcmp((unsigned __int8 *)*v1, (unsigned __int8 *)LCData) )
      return (v1[2] & 4) == 0;
    v5 = TestDefaultLanguage(v3, 0);
  }
  if ( v5 )
    goto LABEL_11;
  return (v1[2] & 4) == 0;
}
