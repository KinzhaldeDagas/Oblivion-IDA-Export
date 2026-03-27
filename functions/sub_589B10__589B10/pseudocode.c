int __cdecl sub_589B10(int a1, unsigned __int8 *a2)
{
  int result; // eax
  const unsigned __int8 *v3; // eax
  _DWORD *v4; // esi
  int v5; // eax

  if ( !a1 )
    return 0;
  v3 = *(const unsigned __int8 **)(a1 + 8);
  if ( v3 && !_mbsicmp(v3, a2) )
    return a1;
  v4 = *(_DWORD **)(a1 + 0x34);
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    v5 = v4[2];
    v4 = (_DWORD *)*v4;
    result = sub_589B10(v5, a2);
    if ( result )
      break;
    if ( !v4 )
      return 0;
  }
  return result;
}
