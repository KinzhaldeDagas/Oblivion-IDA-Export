int __stdcall sub_890020(char *a1, char *a2, __m128 *a3)
{
  __m128 *LinearVelocityPtr; // eax
  hkVector4 v4; // xmm0
  int result; // eax
  float v6; // xmm4_4
  __m128 v7; // xmm0
  float v8; // xmm1_4
  float v9; // xmm3_4
  __m128 v10; // xmm0
  __m128 v11; // [esp+10h] [ebp-30h]
  __m128 v12; // [esp+20h] [ebp-20h] BYREF

  LinearVelocityPtr = (__m128 *)bhkWorldObject_GetLinearVelocityPtr(a1); /*0x89003f*/
  v4 = unk_BA7A40; /*0x890047*/
  v12 = *LinearVelocityPtr; /*0x89004e*/
  result = _mm_movemask_ps( /*0x890070*/
             _mm_cmplt_ps(
               _mm_shuffle_ps((__m128)LODWORD(flt_A34BA0), (__m128)LODWORD(flt_A34BA0), 0),
               _mm_and_ps(_mm_sub_ps(v12, (__m128)v4), (__m128)xmmword_A372D0)));
  if ( (result & 7) != 0 ) /*0x890075*/
  {
    v6 = *(float *)&dword_A46C30; /*0x890081*/
    v11 = a3[1]; /*0x890089*/
    v11.m128_f32[2] = 0.0; /*0x89008e*/
    v12.m128_f32[2] = 0.0; /*0x890097*/
    v7 = _mm_mul_ps(v11, v11); /*0x89009e*/
    v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] /*0x8900b0*/
                   + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]);
    v8 = 1.0 / fsqrt(v7.m128_f32[0]); /*0x8900b7*/
    v9 = v6 - (float)((float)(v7.m128_f32[0] * v8) * v8); /*0x8900d2*/
    v10 = 0; /*0x8900d6*/
    v10.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v8) * v9; /*0x8900e6*/
    v12 = _mm_add_ps( /*0x89010f*/
            *(__m128 *)bhkWorldObject_GetLinearVelocityPtr(a2),
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v11), v12));
    return (int)sub_8AC0B0(a2, (hkVector4 *)&v12); /*0x890114*/
  }
  return result; /*0x890119*/
}
