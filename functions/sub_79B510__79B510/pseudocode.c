float *__cdecl sub_79B510(int a1, int a2, float *a3)
{
  int v3; // esi
  float *v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 0x2C;
    v4 += 0xFFFFFFF5;
    sub_414420((int)v4, (_DWORD *)v3, 0, 0xFFFFFFFF);
    v4[7] = *(float *)(v3 + 0x1C);
    v4[8] = *(float *)(v3 + 0x20);
    v4[9] = *(float *)(v3 + 0x24);
    v4[0xA] = *(float *)(v3 + 0x28);
  }
  while ( v3 != a1 );
  return v4;
}
