int __thiscall sub_958750(int **this, __m128 *a2, __m128 *a3, __m128 *a4, int a5, unsigned int a6, int a7)
{
  int *v8; // ecx
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  __m128 v11; // xmm3
  __m128 v12; // xmm0
  __m128 v13; // xmm5
  int *v14; // ecx
  int v15; // edx
  __m128 v16; // xmm0
  __m128 v17; // xmm3
  __m128 v18; // xmm0
  int *v19; // esi
  unsigned int v21; // [esp+20h] [ebp-74h]
  float v22; // [esp+20h] [ebp-74h]
  unsigned int v23; // [esp+20h] [ebp-74h]
  unsigned int v24; // [esp+20h] [ebp-74h]
  unsigned int v25; // [esp+20h] [ebp-74h]
  unsigned int v26; // [esp+20h] [ebp-74h]
  float v27; // [esp+20h] [ebp-74h]
  unsigned int v28; // [esp+20h] [ebp-74h]
  unsigned int v29; // [esp+20h] [ebp-74h]
  __m128 v30; // [esp+24h] [ebp-70h] BYREF
  __m128 v31; // [esp+34h] [ebp-60h] BYREF
  __m128 v32; // [esp+44h] [ebp-50h] BYREF
  __m128 v33; // [esp+54h] [ebp-40h] BYREF
  __m128 v34; // [esp+64h] [ebp-30h]
  __m128 v35; // [esp+74h] [ebp-20h]
  __m128 v36; // [esp+84h] [ebp-10h]

  v8 = *this;
  v30 = _mm_add_ps(*a2, _mm_mul_ps(_mm_shuffle_ps((__m128)a6, (__m128)a6, 0), *a3));
  (*(void (__thiscall **)(int *, __m128 *, __m128 *, int, int))(*v8 + 0x1C))(v8, a2, &v30, a5, a7);
  sub_8B1B00(&v31, a4, 0.78539819);
  sub_8B1B00(&v32, a4, -1.5707964);
  v9 = *a3;
  v34 = v31;
  v34.m128_i32[3] = 0;
  v10 = _mm_mul_ps(v34, v9);
  *(float *)&v21 = v31.m128_f32[3] * v31.m128_f32[3] + v31.m128_f32[3] * v31.m128_f32[3] - fConstant_1;
  v11 = (__m128)v21;
  v22 = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
  *(float *)&v23 = v22 + v22;
  v12 = (__m128)v23;
  *(float *)&v24 = v31.m128_f32[3] + v31.m128_f32[3];
  v13 = _mm_mul_ps(
          _mm_shuffle_ps((__m128)v24, (__m128)v24, 0),
          _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xC9), _mm_shuffle_ps(v9, v9, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xD2), _mm_shuffle_ps(v9, v9, 0xC9))));
  v14 = *this;
  *(float *)&v25 = *(float *)&a6 * flt_AA3730;
  v35 = _mm_add_ps(
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v9), _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v34)),
          v13);
  v33 = _mm_add_ps(v30, _mm_mul_ps(_mm_shuffle_ps((__m128)v25, (__m128)v25, 0), v35));
  v15 = *v14;
  v36 = (__m128)v25;
  (*(void (__thiscall **)(int *, __m128 *, __m128 *, int, int))(v15 + 0x1C))(v14, &v30, &v33, a5, a7);
  v34 = v32;
  v34.m128_i32[3] = 0;
  v16 = _mm_mul_ps(v34, v35);
  *(float *)&v26 = v32.m128_f32[3] * v32.m128_f32[3] + v32.m128_f32[3] * v32.m128_f32[3] - fConstant_1;
  v17 = (__m128)v26;
  v27 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
  *(float *)&v28 = v27 + v27;
  v18 = (__m128)v28;
  *(float *)&v29 = v32.m128_f32[3] + v32.m128_f32[3];
  v19 = *this;
  v33 = _mm_add_ps(
          v30,
          _mm_mul_ps(
            _mm_shuffle_ps(v36, v36, 0),
            _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v35), _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v34)),
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)v29, (__m128)v29, 0),
                _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xC9), _mm_shuffle_ps(v35, v35, 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0xD2), _mm_shuffle_ps(v35, v35, 0xC9)))))));
  return (*(int (__thiscall **)(int *, __m128 *, __m128 *, int, int))(*v19 + 0x1C))(v19, &v30, &v33, a5, a7);
}
