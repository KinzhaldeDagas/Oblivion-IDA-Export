int __cdecl sub_7A5A50(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a2; i != a1; sub_7A3470((float *)(i + a3 - a2), i) )
    i -= 0x54;
  return a3 - 0x54 * ((a2 - a1) / 0x54);
}
