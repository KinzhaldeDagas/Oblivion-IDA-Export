int __thiscall sub_8B9400(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm3
  __m128 v5; // xmm1
  double v6; // st5
  double v7; // st6
  __m128 v8; // xmm2
  __m128 v9; // xmm0
  __m128 v10; // xmm4
  __m128 v11; // xmm0
  float v13; // [esp+8h] [ebp-34h]
  float v14; // [esp+8h] [ebp-34h]
  float v15; // [esp+8h] [ebp-34h]
  float v16; // [esp+8h] [ebp-34h]
  __m128 v17; // [esp+Ch] [ebp-30h] BYREF
  __m128 v18; // [esp+1Ch] [ebp-20h] BYREF

  v3 = 0;
  v13 = a3->m128_f32[3];
  v5 = *(this + 3);
  v6 = dbl_A3D0C0;
  v7 = v13 * v6;
  v14 = v13 * v7 - dbl_A2F928;
  v3.m128_f32[0] = v14;
  v17 = *a3;
  v17.m128_f32[3] = 0.0;
  v8 = v17;
  v9 = _mm_mul_ps(v17, v5);
  v17.m128_f32[0] = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
  v10 = 0;
  v15 = v6 * v17.m128_f32[0];
  v10.m128_f32[0] = v15;
  v16 = v7;
  v11 = 0;
  v11.m128_f32[0] = v16;
  v18 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0xC9), _mm_shuffle_ps(v5, v5, 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0xD2), _mm_shuffle_ps(v5, v5, 0xC9))),
              _mm_shuffle_ps(v11, v11, 0)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v8), _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), v5))),
          *a2);
  sub_889470(&v17, a3, this + 2);
  return sub_8A2FB0(this, (int)&v18, (int)&v17);
}
