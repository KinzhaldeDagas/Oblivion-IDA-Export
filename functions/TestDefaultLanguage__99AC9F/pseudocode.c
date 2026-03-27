BOOL __cdecl TestDefaultLanguage(int a1, int a2)
{
  char **v2; // ecx
  char **v3; // esi
  int v4; // ecx
  BOOL result; // eax
  int v6; // ecx
  char *v7; // esi
  int PrimaryLen; // edi
  CHAR LCData[120]; // [esp+4h] [ebp-7Ch] BYREF

  v3 = v2;
  result = 0;
  if ( GetLocaleInfoA(a1 & 0x3FF | 0x400, 1u, LCData, 0x78) )
  {
    if ( a1 == LcidFromHexString(v4, LCData) )
      return 1;
    if ( !a2 )
      return 1;
    v7 = *v3;
    PrimaryLen = GetPrimaryLen(v6, v7);
    if ( PrimaryLen != (unsigned int)strlen(v7) )
      return 1;
  }
  return result;
}
