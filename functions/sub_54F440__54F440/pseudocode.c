int __cdecl sub_54F440(char *Str2)
{
  int v1; // esi
  char *v2; // eax

  if ( !Str2 )
    return 0xFFFFFFFF;
  v1 = 0;
  while ( 1 )
  {
    v2 = *(char **)(4 * v1 + 0xB11FE0);
    if ( v2 )
    {
      if ( _strcmp(v2, Str2) )
        break;
    }
    if ( ++v1 >= 4 )
      return 0xFFFFFFFF;
  }
  return v1;
}
