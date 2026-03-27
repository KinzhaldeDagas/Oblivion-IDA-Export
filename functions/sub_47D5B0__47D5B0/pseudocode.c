signed int __cdecl sub_47D5B0(const char *a1)
{
  signed int v1; // eax
  char v2; // bl
  char v3; // cl
  int i; // edx
  char v6; // cl

  v1 = strlen(a1);
  v2 = 0;
  if ( !v1 )
    return 0;
  v3 = *a1;
  if ( (*a1 < 0x30 || v3 > 0x39) && v3 != 0x2D && v3 != 0x2E )
    return 0;
  if ( v1 == 1 )
  {
    if ( v3 == 0x2D || v3 == 0x2E )
      return 0;
  }
  else if ( v3 == 0x2E )
  {
    v2 = 1;
  }
  for ( i = 1; i < v1; ++i )
  {
    v6 = a1[i];
    if ( v6 < 0x30 || v6 > 0x39 )
    {
      if ( v6 != 0x2E || v2 )
        return 0;
      v2 = 1;
    }
  }
  return 1;
}
