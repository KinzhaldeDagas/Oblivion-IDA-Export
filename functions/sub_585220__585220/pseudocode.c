TESForm *__cdecl sub_585220(char *Str, char a2)
{
  const char *v2; // edi
  char *v3; // esi
  char *i; // eax
  TESForm *result; // eax
  TESForm *v6; // eax
  TESForm *v7; // edi

  v2 = Str; /*0x585222*/
  v3 = Str; /*0x58522c*/
  for ( i = strstr(Str, SubStr); i; i = strstr(i + 1, SubStr) ) /*0x585238*/
    v3 = i + 1; /*0x585249*/
  Str = 0; /*0x585262*/
  NiTMap_GetAt(&off_B13948, (int)v3, &Str); /*0x58526a*/
  result = (TESForm *)Str; /*0x58526f*/
  if ( !Str ) /*0x585275*/
  {
    v6 = (TESForm *)sub_584F10(v2, 0); /*0x585279*/
    v7 = v6; /*0x585286*/
    if ( a2 ) /*0x585288*/
      sub_412D30(&off_B13948, (int)v3, v6); /*0x585291*/
    return v7; /*0x585296*/
  }
  return result; /*0x585298*/
}
