int __thiscall sub_441760(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edx
  _DWORD *v4; // ecx
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // eax
  int i; // ecx

  v2 = this + 0x28;
  v3 = 0;
  if ( this == (_DWORD *)0xFFFFFF60 )
    return 0;
  while ( !v3 )
  {
    v4 = (_DWORD *)v2[1];
    if ( !v4 && !*v2 )
      return 0;
    v5 = (_DWORD *)*v2;
    if ( v5 )
    {
      if ( *v5 == a2 )
        v3 = v5;
    }
    v2 = v4;
    if ( !v4 )
    {
      if ( !v3 )
        return 0;
      break;
    }
  }
  v6 = v3[1];
  if ( !v6 )
    return 0;
  v7 = 0;
  for ( i = v3[1]; !*(_DWORD *)i || *(_DWORD *)(*(_DWORD *)i + 4) != 1; i += 4 )
  {
    if ( ++v7 >= 5 )
      return 0;
  }
  return *(_DWORD *)(v6 + 4 * v7);
}
