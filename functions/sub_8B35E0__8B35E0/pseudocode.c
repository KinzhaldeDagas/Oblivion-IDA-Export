int __cdecl sub_8B35E0(float *a1, float a2, int a3)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+Ch] [ebp-4h]

  if ( a2 <= (double)*(float *)&SrcStr ) /*0x8b35f7*/
    return 1; /*0x8b35f9*/
  v4 = *a1; /*0x8b3605*/
  v5 = a1[1]; /*0x8b360a*/
  v6 = a1[2]; /*0x8b3612*/
  *(_OWORD *)(a3 + 0x20) = 0; /*0x8b361b*/
  v7 = a2 * flt_A7C038; /*0x8b361f*/
  *(_OWORD *)(a3 + 0x30) = 0; /*0x8b3625*/
  *(_OWORD *)(a3 + 0x40) = 0; /*0x8b362b*/
  *(_DWORD *)(a3 + 0x20) = 0x3F800000; /*0x8b3631*/
  *(_DWORD *)(a3 + 0x34) = 0x3F800000; /*0x8b3636*/
  *(_DWORD *)(a3 + 0x48) = 0x3F800000; /*0x8b363b*/
  v9 = v5 * v5; /*0x8b3641*/
  *(float *)(a3 + 0x20) = (v5 * v5 + v6 * v6) * v7; /*0x8b3649*/
  v8 = v4 * v4; /*0x8b3650*/
  *(float *)(a3 + 0x34) = (v4 * v4 + v6 * v6) * v7; /*0x8b3658*/
  *(float *)(a3 + 0x48) = (v8 + v9) * v7; /*0x8b3667*/
  *(_OWORD *)(a3 + 0x10) = 0; /*0x8b366a*/
  *(float *)(a3 + 4) = a2; /*0x8b366e*/
  *(float *)a3 = v6 * v5 * v4 * flt_A58E1C; /*0x8b367d*/
  return 0; /*0x8b35fe*/
}
