int __cdecl sub_7A3B80(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a1; i != a2; i += 0x54 )
    sub_7A3470((float *)(i + a3 - a1), i);
  return a3 + 0x54 * ((a2 - a1) / 0x54);
}
