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

  v4 = *(__m128 **)(a2 + 0xC);
  v5 = this;
  sub_958600((_DWORD *)this + 0x30, (int)a3);
  sub_94D100(v5, a2, v17, v18);
  sub_88FCC0(v5 + 5, v17, v4 + 2);
  v15 = v5 + 4;
  sub_88FCC0(v5 + 4, v18, v4 + 1);
  sub_94CF30((int *)v5, a4);
  sub_94CF80(v5, a4);
  v5 += 5;
  v6 = v4->m128_i32[3];
  v7 = *a3;
  v8 = _mm_sub_ps(*v5, *v15);
  v9 = _mm_mul_ps(v8, v8);
  v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
  v10 = 1.0 / fsqrt(v9.m128_f32[0]);
  v11 = 3.0 - (float)((float)(v9.m128_f32[0] * v10) * v10);
  v12 = (__m128)0x3F000000u;
  v12.m128_f32[0] = (float)(0.5 * v10) * v11;
  v16 = _mm_add_ps(
          _mm_mul_ps(
            _mm_shuffle_ps((__m128)(unsigned int)v6, (__m128)(unsigned int)v6, 0),
            _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v8)),
          *v15);
  v13 = sub_8AEBB0(0.0, 0.5, 1.0, 1.0);
  (*(void (__thiscall **)(int *, __m128 *, __m128 *, int, int))(v7 + 0x1C))(a3, v15, &v16, v13, a4);
  return (*(int (__thiscall **)(int *, __m128 *, __m128 *, unsigned int, int))(*a3 + 0x1C))(
           a3,
           &v16,
           v5,
           0xFFFF0000,
           a4);
}
