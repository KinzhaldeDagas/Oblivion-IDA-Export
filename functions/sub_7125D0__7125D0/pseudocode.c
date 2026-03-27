unsigned int __cdecl sub_7125D0(int a1)
{
  int v1; // esi
  unsigned int result; // eax
  _DWORD *i; // ecx
  _DWORD *v4; // ecx
  bool v5; // zf
  unsigned __int16 v6; // cx

  v1 = dword_B3FB84;
  result = 0;
  if ( *(_WORD *)(dword_B3FB84 + 0xA) )
  {
    for ( i = *(_DWORD **)(v1 + 4); *i != a1; ++i )
    {
      if ( ++result >= *(unsigned __int16 *)(dword_B3FB84 + 0xA) )
        return result;
    }
    if ( result < *(unsigned __int16 *)(v1 + 0xA) )
    {
      v4 = (_DWORD *)(*(_DWORD *)(v1 + 4) + 4 * result);
      v5 = *v4 == 0;
      *v4 = 0;
      if ( !v5 )
        --*(_WORD *)(v1 + 0xC);
      v6 = *(_WORD *)(v1 + 0xA);
      if ( result == v6 - 1 )
        *(_WORD *)(v1 + 0xA) = v6 - 1;
    }
  }
  return result;
}
