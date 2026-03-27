hkVector4 *__thiscall sub_8B9150(__m128 *this, hkVector4 *a2)
{
  double v3; // st5
  __m128 v4; // xmm0
  double v5; // st6
  double v6; // rt0
  __m128 v7; // xmm0
  double v8; // st5
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  float v13; // [esp+Ch] [ebp-74h]
  float v14; // [esp+Ch] [ebp-74h]
  float v15; // [esp+Ch] [ebp-74h]
  __m128 v16; // [esp+20h] [ebp-60h]
  __m128 v17; // [esp+30h] [ebp-50h] BYREF
  __m128 v18; // [esp+40h] [ebp-40h]
  __m128 v19; // [esp+50h] [ebp-30h]
  __m128 v20; // [esp+60h] [ebp-20h]

  if ( this && this->m128_i32[2] )
  {
    (*(void (__thiscall **)(__m128 *, __m128 *))(this->m128_i32[0] + 0x90))(this, &v17);
    v3 = dbl_A3D0C0;
    v4 = 0;
    v5 = v17.m128_f32[3] * v3;
    v18 = *(this + 3);
    v6 = v3;
    v13 = v17.m128_f32[3] * v5 - dbl_A2F928;
    v4.m128_f32[0] = v13;
    v20 = v4;
    v16 = v17;
    v16.m128_f32[3] = 0.0;
    v7 = _mm_mul_ps(v16, v18);
    v8 = (float)(_mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]));
    v9 = 0;
    v14 = v6 * v8;
    v9.m128_f32[0] = v14;
    v15 = v5;
    v19 = v9;
    v10 = 0;
    v10.m128_f32[0] = v15;
    sub_8A2ED0(this, a2);
    v11 = _mm_sub_ps(
            *(__m128 *)a2,
            _mm_add_ps(
              _mm_mul_ps(
                _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0xC9), _mm_shuffle_ps(v18, v18, 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0xD2), _mm_shuffle_ps(v18, v18, 0xC9))),
                _mm_shuffle_ps(v10, v10, 0)),
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v16), _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v18))));
  }
  else
  {
    v11 = (__m128)stru_BA7A40;
  }
  *a2 = (hkVector4)v11;
  return a2;
}
