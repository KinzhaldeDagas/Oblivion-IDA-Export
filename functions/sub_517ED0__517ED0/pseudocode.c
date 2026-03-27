int __cdecl sub_517ED0(char *Str2)
{
  _DWORD *v1; // esi
  int v2; // edi
  char *v3; // eax

  if ( !Str2 )
    return 0;
  v1 = (_DWORD *)(TESDataHandler + 0x6C);
  if ( TESDataHandler == 0xFFFFFF94 )
    return 0;
  while ( 1 )
  {
    if ( !v1[1] && !*v1 )
      return 0;
    v2 = *v1;
    v3 = *(char **)(*v1 + 0x28);
    if ( !v3 )
      v3 = EmptyString;
    if ( !_strcmp(v3, Str2) )
      break;
    v1 = (_DWORD *)v1[1];
    if ( !v1 )
      return 0;
  }
  return v2;
}
