char *__cdecl sub_7B4160(char *a1, const char *a2, int a3)
{
  char *v3; // edi
  char *v4; // esi
  char *result; // eax
  size_t v6; // [esp-4h] [ebp-128h]
  char v7[12]; // [esp+10h] [ebp-114h] BYREF
  char Str[260]; // [esp+1Ch] [ebp-108h] BYREF

  strcpy(Str, a2);
  *a1 = 0;
  v3 = strrchr(Str, 0x2E);
  v4 = strrchr(Str, 0x5C);
  result = strrchr(Str, 0x5F);
  if ( v4 )
  {
    if ( result )
    {
      if ( result < v4 )
        result = 0;
    }
  }
  if ( v3 )
  {
    strcpy(v7, v3);
    if ( result )
      *result = 0;
    *v3 = 0;
    if ( Str[0] == 0x5C )
      return (char *)_sprintf(a1, "%s%s%s", Str, a3, v7);
    if ( Str[1] == 0x3A )
      return (char *)_sprintf(a1, "%s%s%s", Str, a3, v7);
    LODWORD(v6) = 4;
    if ( !_strnicmp(Str, "data", v6) )
      return (char *)_sprintf(a1, "%s%s%s", Str, a3, v7);
    else
      return (char *)_sprintf(a1, "Data\\%s%s%s", Str, a3, v7);
  }
  return result;
}
