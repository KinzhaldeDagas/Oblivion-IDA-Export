unsigned int __cdecl sub_72DFB0(_DWORD *a1, int a2, int a3, int a4, char a5)
{
  int v5; // esi

  v5 = 0;
  if ( !a1[2] )
    return 0xFFFFFFFF;
  while ( *(_BYTE *)(v5 + a4) != a5 || !sub_72D3E0(*(const void ***)(*a1 + 4 * v5), a2, a3) )
  {
    if ( (unsigned int)++v5 >= a1[2] )
      return 0xFFFFFFFF;
  }
  *(_BYTE *)(v5 + a4) = 1;
  return v5;
}
