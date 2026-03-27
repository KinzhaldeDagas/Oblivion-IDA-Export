__m128 *__thiscall sub_8BE730(__m128 *this, _WORD *a2, __m128 *a3, float a4, float a5)
{
  float v6; // xmm4_4
  __m128 v7; // xmm2
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  float v10; // xmm3_4
  __m128 v11; // xmm0

  sub_8F5750(this, a2, 0);
  v6 = *(float *)&dword_A46C30;
  this->m128_i32[0] = (__int32)&hkMotorAction::`vftable';
  *(this + 2) = *a3;
  *((float *)this + 0xC) = a4;
  *((float *)this + 0xD) = a5;
  *((_BYTE *)this + 0x38) = 1;
  v7 = *(this + 2);
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_add_ps(_mm_shuffle_ps(v8, v8, 0x4E), v8);
  v8.m128_f32[0] = _mm_shuffle_ps(v9, v9, 0xB1).m128_f32[0] + v9.m128_f32[0];
  v9.m128_f32[0] = 1.0 / fsqrt(v8.m128_f32[0]);
  v10 = v6 - (float)((float)(v8.m128_f32[0] * v9.m128_f32[0]) * v9.m128_f32[0]);
  v11 = 0;
  v11.m128_f32[0] = (float)(flt_A3D65C * v9.m128_f32[0]) * v10;
  *(this + 2) = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v7);
  return this;
}
