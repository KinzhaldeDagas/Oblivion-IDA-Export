int __cdecl sub_5577C0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  double v5; // st7

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v5 = *(float *)(v3 - 0x14);
    v3 -= 0x14;
    v4 -= 0x14;
    *(float *)v4 = v5;
    sub_557470((int *)(v4 + 4), (int *)(v3 + 4));
  }
  while ( v3 != a1 );
  return v4;
}
