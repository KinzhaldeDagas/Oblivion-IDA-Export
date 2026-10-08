int __cdecl sub_8B3550(float a1, float a2, int a3)
{
  double v4; // st7
  double v5; // st6

  if ( a2 <= (double)*(float *)&SrcStr || a1 <= (double)*(float *)&SrcStr ) /*0x8b3574*/
    return 1; /*0x8b3576*/
  v4 = a1 * a1; /*0x8b3585*/
  *(_OWORD *)(a3 + 0x20) = 0; /*0x8b358e*/
  *(_OWORD *)(a3 + 0x30) = 0; /*0x8b3592*/
  *(_OWORD *)(a3 + 0x40) = 0; /*0x8b3596*/
  *(_DWORD *)(a3 + 0x20) = 0x3F800000; /*0x8b35a1*/
  v5 = a2 * v4 * flt_A47E6C; /*0x8b35a4*/
  *(_DWORD *)(a3 + 0x34) = 0x3F800000; /*0x8b35aa*/
  *(_DWORD *)(a3 + 0x48) = 0x3F800000; /*0x8b35ad*/
  *(float *)(a3 + 0x20) = v5; /*0x8b35b3*/
  *(float *)(a3 + 0x34) = v5; /*0x8b35b6*/
  *(float *)(a3 + 0x48) = v5; /*0x8b35b9*/
  *(_OWORD *)(a3 + 0x10) = 0; /*0x8b35bc*/
  *(float *)(a3 + 4) = a2; /*0x8b35c0*/
  *(float *)a3 = v4 * a1 * flt_A97F2C; /*0x8b35cc*/
  return 0; /*0x8b357d*/
}
