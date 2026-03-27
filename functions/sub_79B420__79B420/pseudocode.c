int __cdecl sub_79B420(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    sub_414420(v4, (_DWORD *)v3, 0, 0xFFFFFFFF);
    *(float *)(v4 + 0x1C) = *(float *)(v3 + 0x1C);
    v3 += 0x2C;
    v4 += 0x2C;
    *(float *)(v4 - 0xC) = *(float *)(v3 - 0xC);
    *(float *)(v4 - 8) = *(float *)(v3 - 8);
    *(float *)(v4 - 4) = *(float *)(v3 - 4);
  }
  while ( v3 != a2 );
  return v4;
}
