BOOL __stdcall LanguageEnumProc(LPSTR a1)
{
  DWORD *v1; // esi
  int v2; // ecx
  int v3; // edi
  BOOL v5; // eax
  CHAR LCData[120]; // [esp+8h] [ebp-7Ch] BYREF
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  v1 = _getptd((int)&savedregs) + 0x27; /*0x99aeff*/
  v3 = LcidFromHexString(v2, a1); /*0x99af0a*/
  if ( !GetLocaleInfoA(v3, v1[4] != 0 ? 3 : 0x1001, LCData, 0x78) )
  {
    v1[2] = 0; /*0x99af2f*/
    return 1; /*0x99af33*/
  }
  if ( CRT_StricmpLocaleDispatch((const char *)*v1, LCData) ) /*0x99af3b*/
  {
    if ( v1[4] || !v1[3] || CRT_StricmpLocaleDispatch((const char *)*v1, LCData) ) /*0x99af61*/
      return (v1[2] & 4) == 0; /*0x99af6a*/
    v5 = TestDefaultLanguage(v3, 0); /*0x99af70*/
  }
  else
  {
    if ( v1[4] ) /*0x99af46*/
    {
LABEL_11:
      v1[2] |= 4u; /*0x99af7b*/
      v1[6] = v3; /*0x99af7f*/
      v1[7] = v3; /*0x99af82*/
      return (v1[2] & 4) == 0; /*0x99af82*/
    }
    v5 = TestDefaultLanguage(v3, 1); /*0x99af4d*/
  }
  if ( v5 ) /*0x99af79*/
    goto LABEL_11; /*0x99af79*/
  return (v1[2] & 4) == 0; /*0x99af90*/
}
