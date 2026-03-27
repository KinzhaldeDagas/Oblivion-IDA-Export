void __cdecl sub_790560(int a1, int a2)
{
  int i; // esi
  int v3; // eax

  for ( i = ((a2 - a1) >> 2) / 2; i > 0; sub_7903B0(a1, i, (a2 - a1) >> 2, v3) )
    v3 = *(_DWORD *)(a1 + 4 * i-- - 4);
}
