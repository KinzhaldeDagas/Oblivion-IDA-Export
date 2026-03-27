int __thiscall sub_8B92C0(__m128 *this, __m128 *a2)
{
  __m128 v3; // xmm1
  double v4; // st5
  __m128 v5; // xmm3
  double v6; // st6
  __m128 v7; // xmm0
  __m128 v8; // xmm4
  __m128 v9; // xmm0
  int result; // eax
  float v11; // [esp+Ch] [ebp-44h]
  float v12; // [esp+Ch] [ebp-44h]
  float v13; // [esp+Ch] [ebp-44h]
  __m128 v14; // [esp+10h] [ebp-40h]
  __m128 v15; // [esp+20h] [ebp-30h] BYREF
  __m128 v16; // [esp+30h] [ebp-20h] BYREF

  if ( this )
  {
    if ( this->m128_i32[2] )
    {
      (*(void (__thiscall **)(__m128 *, __m128 *))(this->m128_i32[0] + 0x90))(this, &v15);
      v3 = *(this + 3);
      v4 = dbl_A3D0C0;
      v5 = 0;
      v6 = v15.m128_f32[3] * v4;
      v11 = v15.m128_f32[3] * v6 - dbl_A2F928;
      v5.m128_f32[0] = v11;
      v14 = v15;
      v14.m128_f32[3] = 0.0;
      v7 = _mm_mul_ps(v14, v3);
      v8 = 0;
      v12 = v4
          * (float)(_mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]));
      v8.m128_f32[0] = v12;
      v13 = v6;
      v9 = 0;
      v9.m128_f32[0] = v13;
      v16 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), _mm_shuffle_ps(v3, v3, 0xD2)),
                    _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), _mm_shuffle_ps(v3, v3, 0xC9))),
                  _mm_shuffle_ps(v9, v9, 0)),
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v14), _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v3))),
              *a2);
      return sub_8A2F50(this, (int)&v16);
    }
  }
  return result;
}
