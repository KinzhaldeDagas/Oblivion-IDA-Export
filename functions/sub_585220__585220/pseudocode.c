TESForm *__cdecl sub_585220(char *Str, char a2)
{
  const char *v2; // edi
  char *v3; // esi
  char *i; // eax
  TESForm *result; // eax
  TESForm *v6; // eax
  TESForm *v7; // edi

  v2 = Str;
  v3 = Str;
  for ( i = strstr(Str, SubStr); i; i = strstr(i + 1, SubStr) )
    v3 = i + 1;
  Str = 0;
  NiTMap_GetAt(&off_B13948, (int)v3, &Str);
  result = (TESForm *)Str;
  if ( !Str )
  {
    v6 = (TESForm *)sub_584F10(v2, 0);
    v7 = v6;
    if ( a2 )
      sub_412D30(&off_B13948, (int)v3, v6);
    return v7;
  }
  return result;
}
