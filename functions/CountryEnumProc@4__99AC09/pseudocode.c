BOOL __stdcall CountryEnumProc(LPSTR a1)
{
  DWORD *v1; // esi
  int v2; // ecx
  int v3; // edi
  CHAR LCData[120]; // [esp+8h] [ebp-7Ch] BYREF
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  v1 = _getptd((int)&savedregs) + 0x27; /*0x99ac27*/
  v3 = LcidFromHexString(v2, a1); /*0x99ac32*/
  if ( GetLocaleInfoA(v3, v1[5] != 0 ? 7 : 0x1002, LCData, 0x78) )
  {
    if ( !CRT_StricmpLocaleDispatch((const char *)v1[1], LCData) ) /*0x99ac64*/
    {
      if ( TestDefaultCountry(v3) ) /*0x99ac70*/
      {
        v1[2] |= 4u; /*0x99ac7a*/
        v1[7] = v3; /*0x99ac7e*/
        v1[6] = v3; /*0x99ac81*/
      }
    }
    return (v1[2] & 4) == 0; /*0x99ac8c*/
  }
  else
  {
    v1[2] = 0; /*0x99ac57*/
    return 1; /*0x99ac5a*/
  }
}
