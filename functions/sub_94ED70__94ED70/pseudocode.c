int __thiscall sub_94ED70(__m128 *this, int a2, int *a3, int a4)
{
  __m128 *v4; // ebx
  __m128 *v5; // esi
  __int32 v6; // ecx
  int v7; // ebx
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  float v10; // xmm2_4
  float v11; // xmm4_4
  __m128 v12; // xmm0
  int v13; // eax
  __m128 *v15; // [esp+1Ch] [ebp-94h]
  __m128 v16; // [esp+20h] [ebp-90h] BYREF
  __m128 v17[4]; // [esp+30h] [ebp-80h] BYREF
  __m128 v18[4]; // [esp+70h] [ebp-40h] BYREF

  v4 = *(__m128 **)(a2 + 0xC); /*0x94ed80*/
  v5 = this; /*0x94ed88*/
  sub_958600((_DWORD *)this + 0x30, (int)a3); /*0x94ed91*/
  sub_94D100(v5, a2, v17, v18); /*0x94eda6*/
  hkTransform_TransformPosition(v5 + 5, v17, v4 + 2); /*0x94edbb*/
  v15 = v5 + 4; /*0x94edcc*/
  hkTransform_TransformPosition(v5 + 4, v18, v4 + 1); /*0x94edd0*/
  sub_94CF30((int *)v5, a4); /*0x94eddb*/
  sub_94CF80(v5, a4); /*0x94ede6*/
  v5 += 5; /*0x94edeb*/
  v6 = v4->m128_i32[3]; /*0x94edf9*/
  v7 = *a3; /*0x94edff*/
  v8 = _mm_sub_ps(*v5, *v15); /*0x94ee01*/
  v9 = _mm_mul_ps(v8, v8); /*0x94ee07*/
  v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] /*0x94ee1f*/
                 + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
  v10 = 1.0 / fsqrt(v9.m128_f32[0]); /*0x94ee32*/
  v11 = 3.0 - (float)((float)(v9.m128_f32[0] * v10) * v10); /*0x94ee4d*/
  v12 = (__m128)0x3F000000u; /*0x94ee59*/
  v12.m128_f32[0] = (float)(0.5 * v10) * v11; /*0x94ee63*/
  v16 = _mm_add_ps( /*0x94ee88*/
          _mm_mul_ps(
            _mm_shuffle_ps((__m128)(unsigned int)v6, (__m128)(unsigned int)v6, 0),
            _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v8)),
          *v15);
  v13 = sub_8AEBB0(0.0, 0.5, 1.0, 1.0); /*0x94ee9f*/
  (*(void (__thiscall **)(int *, __m128 *, __m128 *, int, int))(v7 + 0x1C))(a3, v15, &v16, v13, a4); /*0x94eeb4*/
  return (*(int (__thiscall **)(int *, __m128 *, __m128 *, unsigned int, int))(*a3 + 0x1C))( /*0x94eecd*/
           a3,
           &v16,
           v5,
           0xFFFF0000,
           a4);
}
