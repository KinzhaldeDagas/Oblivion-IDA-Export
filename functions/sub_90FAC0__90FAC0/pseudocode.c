float *__thiscall sub_90FAC0(__m128 *this, __m128 *a2, __m128 *a3)
{
  int v4; // edi
  int v5; // eax
  __m128 v6; // xmm0
  __m128 v7; // xmm0
  float v8; // xmm1_4
  __m128 v9; // xmm2
  __m128 v10; // xmm0
  float v12; // [esp+0h] [ebp-24h] BYREF
  __m128 v13; // [esp+4h] [ebp-20h] BYREF
  __m128 v14; // [esp+14h] [ebp-10h] BYREF

  v4 = *((_DWORD *)this + 7); /*0x90fad7*/
  *(this + 3) = *a2; /*0x90fada*/
  v5 = *((_DWORD *)this + 6); /*0x90fae2*/
  *(this + 4) = *a3; /*0x90fae5*/
  hkTransform_TransformPosition(&v14, (__m128 *)(*(_DWORD *)(v5 + 0x50) + 0x10), a2); /*0x90faf4*/
  hkTransform_TransformPosition(&v13, (__m128 *)(*(_DWORD *)(v4 + 0x50) + 0x10), a3); /*0x90fb05*/
  v6 = _mm_sub_ps(v14, v13); /*0x90fb14*/
  v7 = _mm_mul_ps(v6, v6); /*0x90fb17*/
  v8 = _mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]; /*0x90fb24*/
  v9 = _mm_shuffle_ps(v7, v7, 0xAA); /*0x90fb28*/
  v10 = v9; /*0x90fb2c*/
  v10.m128_f32[0] = v9.m128_f32[0] + v8; /*0x90fb2f*/
  v13 = v10; /*0x90fb33*/
  v13.m128_i32[0] = fsqrt(v9.m128_f32[0] + v8); /*0x90fb3c*/
  v12 = v13.m128_f32[0]; /*0x90fb4b*/
  *((float *)this + 0x14) = v13.m128_f32[0]; /*0x90fb54*/
  return &v12; /*0x90fb59*/
}
