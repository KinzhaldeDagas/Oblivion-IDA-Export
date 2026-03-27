int __cdecl sub_795CA0(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a1; i != a2; i += 0x10 )
    sub_795510((_DWORD *)(i + a3 - a1), a3 - a1, i);
  return a3 + 0x10 * ((a2 - a1) >> 4);
}
