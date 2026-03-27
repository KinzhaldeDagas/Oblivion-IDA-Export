int __stdcall sub_890020(char *a1, char *a2, __m128 *a3)
{
  __m128 *v3; // eax
  hkVector4 v4; // xmm0
  int result; // eax
  float v6; // xmm4_4
  __m128 v7; // xmm0
  float v8; // xmm1_4
  float v9; // xmm3_4
  __m128 v10; // xmm0
  __m128 v11; // [esp+10h] [ebp-30h]
  __m128 v12; // [esp+20h] [ebp-20h] BYREF

  v3 = (__m128 *)sub_8AC0A0(a1);
  v4 = stru_BA7A40;
  v12 = *v3;
  result = _mm_movemask_ps(
             _mm_cmplt_ps(
               _mm_shuffle_ps((__m128)LODWORD(flt_A34BA0), (__m128)LODWORD(flt_A34BA0), 0),
               _mm_and_ps(_mm_sub_ps(v12, (__m128)v4), (__m128)xmmword_A372D0)));
  if ( (result & 7) != 0 )
  {
    v6 = *(float *)&dword_A46C30;
    v11 = a3[1];
    v11.m128_f32[2] = 0.0;
    v12.m128_f32[2] = 0.0;
    v7 = _mm_mul_ps(v11, v11);
    v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0]
                   + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]);
    v8 = 1.0 / fsqrt(v7.m128_f32[0]);
    v9 = v6 - (float)((float)(v7.m128_f32[0] * v8) * v8);
    v10 = 0;
    v10.m128_f32[0] = (float)(flt_A3D65C * v8) * v9;
    v12 = _mm_add_ps(*(__m128 *)sub_8AC0A0(a2), _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v11), v12));
    return (int)sub_8AC0B0(a2, (hkVector4 *)&v12);
  }
  return result;
}
