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

  v3 = v2; /*0x99acc6*/
  result = 0; /*0x99acd2*/
  if ( GetLocaleInfoA(a1 & 0x3FF | 0x400, 1u, LCData, 0x78) ) /*0x99acc8*/
  {
    if ( a1 == LcidFromHexString(v4, LCData) ) /*0x99ace1*/
      return 1; /*0x99ace1*/
    if ( !a2 ) /*0x99ace7*/
      return 1; /*0x99ace7*/
    v7 = *v3; /*0x99ace9*/
    PrimaryLen = GetPrimaryLen(v6, v7); /*0x99acf4*/
    if ( PrimaryLen != (unsigned int)strlen(v7) ) /*0x99acff*/
      return 1; /*0x99acd0*/
  }
  return result; /*0x99ad04*/
}
