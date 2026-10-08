void __thiscall sub_88FF20(float *this, int a2, __m128 *a3)
{
  __m128 v3; // xmm1
  __m128 *v5; // eax
  int v6; // edx
  __m128 v7; // xmm0
  float v8; // xmm2_4
  float v9; // xmm3_4
  __m128 v10; // xmm0
  BOOL v11; // ecx
  double v12; // st7
  float v13; // [esp+8h] [ebp-44h]
  float v14; // [esp+Ch] [ebp-40h]
  __m128 v15; // [esp+1Ch] [ebp-30h] BYREF
  __m128 v16; // [esp+2Ch] [ebp-20h]

  v3 = *a3; /*0x88ff39*/
  v5 = &v15; /*0x88ff42*/
  v6 = 2; /*0x88ff4a*/
  do /*0x88ff65*/
  {
    *v5 = _mm_sub_ps(v3, *(__m128 *)((char *)v5 + a2 - (_DWORD)&v15)); /*0x88ff59*/
    v5->m128_f32[2] = 0.0; /*0x88ff5c*/
    ++v5; /*0x88ff5f*/
    --v6; /*0x88ff62*/
  }
  while ( v6 ); /*0x88ff65*/
  v7 = _mm_mul_ps(v15, v15); /*0x88ff6e*/
  v8 = _mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]; /*0x88ff78*/
  v9 = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0]; /*0x88ff7f*/
  v10 = _mm_mul_ps(v16, v16); /*0x88ff8c*/
  v15.m128_f32[0] = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0] /*0x88ffaf*/
                  + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
  v11 = v15.m128_f32[0] <= (double)(float)(v9 + v8); /*0x88ffc0*/
  LODWORD(v14) = _mm_shuffle_ps(v3, v3, 0xAA).m128_u32[0]; /*0x88ffd9*/
  if ( flt_A96588 == *(this + v11 + 0x14) ) /*0x88ffe4*/
  {
    v12 = v14; /*0x88ffe6*/
  }
  else
  {
    v13 = v14 + *(this + v11 + 0x14); /*0x88fff4*/
    v12 = v13 * dbl_A2FAA0; /*0x88fffc*/
  }
  *(this + v11 + 0x14) = v12; /*0x890002*/
}
