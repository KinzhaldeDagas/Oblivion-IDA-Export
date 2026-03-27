__m128 *__thiscall sub_929310(__m128 *this, int a2, __m128 *a3)
{
  __m128 v4; // xmm0
  __m128 *result; // eax
  int v6; // ecx
  long double v7; // st7
  int v8; // edx
  long double v9; // st6
  int v10; // esi
  __int32 v11; // ecx
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  float v14; // xmm2_4
  float v15; // xmm3_4
  __m128 v16; // xmm0
  float v17; // [esp+8h] [ebp-18h]
  float v18; // [esp+Ch] [ebp-14h]
  __m128 v19; // [esp+10h] [ebp-10h] BYREF

  (*(void (__thiscall **)(__m128 *, int, __m128 *))(this->m128_i32[0] + 0x10))(this, a2, &v19);
  v4 = _mm_mul_ps(v19, (__m128)xmmword_B2F0A0);
  if ( (float)(_mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0])) >= (double)flt_A52A74 )
  {
    v6 = 0;
    v7 = fabs(v19.m128_f32[0]);
    v8 = 1;
    v9 = fabs(v19.m128_f32[1]);
    v10 = 2;
    v18 = fabs(v19.m128_f32[2]);
    if ( v9 < v7 )
    {
      v8 = 0;
      v17 = v9;
      v7 = v17;
      v6 = 1;
    }
    if ( v18 < v7 )
    {
      v10 = v6;
      v6 = 2;
    }
    result = a3;
    a3->m128_i32[v6] = 0;
    v11 = v19.m128_i32[v10];
    a3->m128_i32[3] = 0;
    a3->m128_i32[v8] = v11;
    a3->m128_f32[v10] = -v19.m128_f32[v8];
  }
  else
  {
    result = a3;
    *a3 = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0xC9), _mm_shuffle_ps(*(this + 1), *(this + 1), 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0xD2), _mm_shuffle_ps(*(this + 1), *(this + 1), 0xC9)));
  }
  v12 = *result;
  v13 = _mm_mul_ps(v12, v12);
  v14 = _mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0];
  v15 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0];
  v19.m128_f32[0] = 1.0 / fsqrt(v15 + v14);
  v16 = (__m128)0x3F000000u;
  v16.m128_f32[0] = (float)(0.5 * v19.m128_f32[0])
                  * (float)(3.0 - (float)((float)((float)(v15 + v14) * v19.m128_f32[0]) * v19.m128_f32[0]));
  *result = _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v12);
  return result;
}
