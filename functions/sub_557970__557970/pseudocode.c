int __cdecl sub_557970(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    *(float *)v4 = *(float *)v3;
    sub_557470((int *)(v4 + 4), (int *)(v3 + 4));
    v3 += 0x14;
    v4 += 0x14;
  }
  while ( v3 != a2 );
  return v4;
}
