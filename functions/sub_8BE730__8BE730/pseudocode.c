__m128 *__thiscall sub_8BE730(__m128 *this, _WORD *a2, __m128 *a3, float a4, float a5)
{
  float v6; // xmm4_4
  __m128 v7; // xmm2
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  float v10; // xmm3_4
  __m128 v11; // xmm0

  sub_8F5750(this, a2, 0); /*0x8be742*/
  v6 = *(float *)&dword_A46C30; /*0x8be74d*/
  this->m128_i32[0] = (__int32)&hkMotorAction::`vftable'; /*0x8be755*/
  *(this + 2) = *a3; /*0x8be75e*/
  *((float *)this + 0xC) = a4; /*0x8be762*/
  *((float *)this + 0xD) = a5; /*0x8be76b*/
  *((_BYTE *)this + 0x38) = 1; /*0x8be76e*/
  v7 = *(this + 2); /*0x8be772*/
  v8 = _mm_mul_ps(v7, v7); /*0x8be779*/
  v9 = _mm_add_ps(_mm_shuffle_ps(v8, v8, 0x4E), v8); /*0x8be783*/
  v8.m128_f32[0] = _mm_shuffle_ps(v9, v9, 0xB1).m128_f32[0] + v9.m128_f32[0]; /*0x8be78d*/
  v9.m128_f32[0] = 1.0 / fsqrt(v8.m128_f32[0]); /*0x8be793*/
  v10 = v6 - (float)((float)(v8.m128_f32[0] * v9.m128_f32[0]) * v9.m128_f32[0]); /*0x8be7ab*/
  v11 = 0; /*0x8be7af*/
  v11.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v9.m128_f32[0]) * v10; /*0x8be7ba*/
  *(this + 2) = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v7); /*0x8be7c8*/
  return this; /*0x8be7ce*/
}
