BOOL __stdcall CountryEnumProc(LPSTR a1)
{
  DWORD *v1; // esi
  int v2; // ecx
  int v3; // edi
  CHAR LCData[120]; // [esp+8h] [ebp-7Ch] BYREF

  v1 = _getptd() + 0x27;
  v3 = LcidFromHexString(v2, a1);
  if ( GetLocaleInfoA(v3, v1[5] != 0 ? 7 : 0x1002, LCData, 0x78) )
  {
    if ( !_strcmp((unsigned __int8 *)v1[1], (unsigned __int8 *)LCData) )
    {
      if ( TestDefaultCountry(v3) )
      {
        v1[2] |= 4u;
        v1[7] = v3;
        v1[6] = v3;
      }
    }
    return (v1[2] & 4) == 0;
  }
  else
  {
    v1[2] = 0;
    return 1;
  }
}
