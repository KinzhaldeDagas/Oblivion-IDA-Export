signed int __thiscall sub_958A30(int this, __m128 *a2, float *a3, float *a4)
{
  __m128 v4; // xmm0
  double v6; // st7
  int v7; // edx
  unsigned __int8 v8; // c0
  unsigned __int8 v9; // c3
  double v10; // st7
  signed int result; // eax
  float v12; // [esp+8h] [ebp-4h]

  v4 = _mm_mul_ps(*(__m128 *)this, _mm_sub_ps(*a2, *(__m128 *)*(_DWORD *)(this + 0x14)));
  v12 = _mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]);
  v6 = v12;
  v7 = 1;
  if ( v8 | v9 )
  {
    v10 = v6 + flt_AA3864;
    if ( v10 > *a3 )
      *a3 = v10;
    v7 = 2;
  }
  else if ( v6 < *a4 )
  {
    *a4 = v12;
  }
  result = 4;
  if ( *a3 < (double)*a4 )
    return v7;
  return result;
}
