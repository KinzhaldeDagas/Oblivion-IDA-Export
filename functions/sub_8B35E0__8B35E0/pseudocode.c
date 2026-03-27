int __cdecl sub_8B35E0(float *a1, float a2, int a3)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+Ch] [ebp-4h]

  if ( a2 <= (double)*(float *)&SrcStr )
    return 1;
  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  *(_OWORD *)(a3 + 0x20) = 0;
  v7 = a2 * flt_A7C038;
  *(_OWORD *)(a3 + 0x30) = 0;
  *(_OWORD *)(a3 + 0x40) = 0;
  *(_DWORD *)(a3 + 0x20) = 0x3F800000;
  *(_DWORD *)(a3 + 0x34) = 0x3F800000;
  *(_DWORD *)(a3 + 0x48) = 0x3F800000;
  v9 = v5 * v5;
  *(float *)(a3 + 0x20) = (v5 * v5 + v6 * v6) * v7;
  v8 = v4 * v4;
  *(float *)(a3 + 0x34) = (v4 * v4 + v6 * v6) * v7;
  *(float *)(a3 + 0x48) = (v8 + v9) * v7;
  *(_OWORD *)(a3 + 0x10) = 0;
  *(float *)(a3 + 4) = a2;
  *(float *)a3 = v6 * v5 * v4 * flt_A58E1C;
  return 0;
}
