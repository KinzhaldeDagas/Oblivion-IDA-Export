int __cdecl sub_8B3550(float a1, float a2, int a3)
{
  double v4; // st7
  double v5; // st6

  if ( a2 <= (double)*(float *)&SrcStr || a1 <= (double)*(float *)&SrcStr )
    return 1;
  v4 = a1 * a1;
  *(_OWORD *)(a3 + 0x20) = 0;
  *(_OWORD *)(a3 + 0x30) = 0;
  *(_OWORD *)(a3 + 0x40) = 0;
  *(_DWORD *)(a3 + 0x20) = 0x3F800000;
  v5 = a2 * v4 * flt_A47E6C;
  *(_DWORD *)(a3 + 0x34) = 0x3F800000;
  *(_DWORD *)(a3 + 0x48) = 0x3F800000;
  *(float *)(a3 + 0x20) = v5;
  *(float *)(a3 + 0x34) = v5;
  *(float *)(a3 + 0x48) = v5;
  *(_OWORD *)(a3 + 0x10) = 0;
  *(float *)(a3 + 4) = a2;
  *(float *)a3 = v4 * a1 * flt_A97F2C;
  return 0;
}
