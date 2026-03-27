int __cdecl sub_8B43E0(__m128 **a1, float a2, int a3)
{
  float v4; // [esp+0h] [ebp-FCh]
  __m128 v5; // [esp+1Ch] [ebp-E0h] BYREF
  __m128 v6; // [esp+2Ch] [ebp-D0h] BYREF
  _OWORD v7[3]; // [esp+3Ch] [ebp-C0h] BYREF
  float v8[25]; // [esp+6Ch] [ebp-90h] BYREF
  float v9; // [esp+D0h] [ebp-2Ch]

  if ( a2 <= (double)*(float *)&SrcStr )
    return 1;
  sub_8B4350(&v5, a1);
  v5.m128_i32[3] = 0;
  sub_8B4020((int)v8, (int *)a1, &v5);
  *(float *)a3 = v9;
  v4 = a2 / v9;
  sub_8B3D50(v8, a2, v4, v6.m128_f32, (float *)v7);
  *(__m128 *)(a3 + 0x10) = _mm_sub_ps(v6, v5);
  *(_OWORD *)(a3 + 0x20) = v7[0];
  *(_OWORD *)(a3 + 0x30) = v7[1];
  *(_OWORD *)(a3 + 0x40) = v7[2];
  *(float *)(a3 + 4) = a2;
  return 0;
}
