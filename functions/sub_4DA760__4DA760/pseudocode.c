signed __int16 __cdecl sub_4DA760(int a1)
{
  unsigned int v1; // edi
  __int16 v2; // bp
  int v3; // ecx
  __int16 v4; // kr00_2

  if ( !a1 || (*(_BYTE *)(a1 + 8) & 8) == 0 )
    return 2;
  v1 = 0;
  if ( !*(_WORD *)(a1 + 0x46) )
    return 2;
  v2 = 2;
  do
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0x40) + 4 * v1);
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 0x44) )
      {
        v4 = strlen(*(const char **)(v3 + 8));
        v2 += v4 + sub_49F550() + 1;
      }
    }
    ++v1;
  }
  while ( v1 < *(unsigned __int16 *)(a1 + 0x46) );
  return v2;
}
