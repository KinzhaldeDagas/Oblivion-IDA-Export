int __cdecl sub_54F490(char *Str2, _DWORD *a2)
{
  int i; // esi
  char *v4; // eax
  int j; // esi
  char *v6; // eax
  int k; // esi
  char *v8; // eax
  int v9; // esi
  char *v10; // eax

  *a2 = 0xFFFFFFFF;
  if ( !Str2 )
    return 0xFFFFFFFF;
  for ( i = 0; i < 0xD; ++i )
  {
    v4 = *(char **)(4 * i + 0xB11FF0);
    if ( v4 && !_strcmp(v4, Str2) )
    {
      *a2 = 1;
      return i;
    }
  }
  for ( j = 0; j < 0x11; ++j )
  {
    v6 = *(char **)(4 * j + 0xB12028);
    if ( v6 && !_strcmp(v6, Str2) )
    {
      *a2 = 2;
      return j;
    }
  }
  for ( k = 0; k < 0x10; ++k )
  {
    v8 = *(char **)(4 * k + 0xB12070);
    if ( v8 && !_strcmp(v8, Str2) )
    {
      *a2 = 0;
      return k;
    }
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = *(char **)(4 * v9 + 0xB12024);
    if ( v10 )
    {
      if ( !_strcmp(v10, Str2) )
        break;
    }
    if ( ++v9 >= 1 )
      return 0xFFFFFFFF;
  }
  *a2 = 3;
  return v9;
}
