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

  if ( this && this->m128_i32[2] ) /*0x8b9173*/
  {
    (*(void (__thiscall **)(__m128 *, __m128 *))(this->m128_i32[0] + 0x90))(this, &v17); /*0x8b918c*/
    v3 = dbl_A3D0C0; /*0x8b9198*/
    v4 = 0; /*0x8b919e*/
    v5 = v17.m128_f32[3] * v3; /*0x8b91a1*/
    v18 = *(this + 3); /*0x8b91a3*/
    v6 = v3; /*0x8b91a8*/
    v13 = v17.m128_f32[3] * v5 - dbl_A2F928; /*0x8b91b5*/
    v4.m128_f32[0] = v13; /*0x8b91c1*/
    v20 = v4; /*0x8b91c5*/
    v16 = v17; /*0x8b91cf*/
    v16.m128_f32[3] = 0.0; /*0x8b91d4*/
    v7 = _mm_mul_ps(v16, v18); /*0x8b91dd*/
    v8 = (float)(_mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] /*0x8b91fc*/
               + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]));
    v9 = 0; /*0x8b9202*/
    v14 = v6 * v8; /*0x8b9207*/
    v9.m128_f32[0] = v14; /*0x8b9211*/
    v15 = v5; /*0x8b9215*/
    v19 = v9; /*0x8b921f*/
    v10 = 0; /*0x8b9224*/
    v10.m128_f32[0] = v15; /*0x8b9227*/
    sub_8A2ED0(this, a2); /*0x8b9230*/
    v11 = _mm_sub_ps( /*0x8b9297*/
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
    v11 = (__m128)unk_BA7A40; /*0x8b929c*/
  }
  *a2 = (hkVector4)v11; /*0x8b92a9*/
  return a2; /*0x8b92a3*/
}
