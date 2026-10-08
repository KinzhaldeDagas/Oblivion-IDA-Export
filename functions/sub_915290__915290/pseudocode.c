void __thiscall sub_915290(__m128 *this, __m128 *a2, int a3, void (__stdcall ***a4)(int, __int128 *))
{
  double v4; // st7
  __m128 v5; // xmm0
  float v6; // xmm3_4
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v9; // xmm3
  __m128 v10; // xmm0
  double v11; // st7
  double v12; // st7
  __m128 v13; // xmm0
  __int128 v14; // xmm0
  void (__stdcall **v15)(int, __int128 *); // eax
  float v16; // [esp+8h] [ebp-28h]
  float v17; // [esp+Ch] [ebp-24h]
  float v18; // [esp+Ch] [ebp-24h]
  unsigned int v19; // [esp+Ch] [ebp-24h]
  __int128 v20; // [esp+10h] [ebp-20h] BYREF
  unsigned int v21; // [esp+20h] [ebp-10h]
  float v22; // [esp+24h] [ebp-Ch]

  v4 = a2[3].m128_f32[0]; /*0x9152a0*/
  v5 = *(this + 1); /*0x9152a6*/
  v6 = _mm_shuffle_ps(v5, v5, 0xFF).m128_f32[0]; /*0x9152ac*/
  v7 = _mm_mul_ps(v5, *a2); /*0x9152b0*/
  v8 = *(this + 1); /*0x9152cc*/
  v17 = (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]) /*0x9152d4*/
      + (float)(_mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] + v6);
  v9 = a2[1]; /*0x9152dc*/
  v10 = _mm_mul_ps(v8, v9); /*0x9152e5*/
  v16 = v17 - v4; /*0x9152eb*/
  v11 = (float)((float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]) /*0x915314*/
              + (float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0] + _mm_shuffle_ps(v8, v8, 0xFF).m128_f32[0]))
      - v4;
  if ( v11 < *(float *)&SrcStr ) /*0x915323*/
  {
    v18 = v16 - v11; /*0x91532f*/
    if ( v18 >= (double)a2[3].m128_f32[1] ) /*0x915341*/
    {
      if ( v16 > (double)*(float *)&SrcStr ) /*0x915356*/
        v12 = v16 / v18; /*0x915364*/
      else
        v12 = *(float *)&SrcStr; /*0x915358*/
      *(float *)&v19 = v12; /*0x91536c*/
      v13 = _mm_shuffle_ps((__m128)v19, (__m128)v19, 0); /*0x915381*/
      if ( (_mm_movemask_ps( /*0x9153ae*/
              _mm_cmple_ps(
                _mm_and_ps(
                  _mm_sub_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v13), *a2), _mm_mul_ps(v13, v9)),
                    *(this + 2)),
                  (__m128)xmmword_A372D0),
                *(this + 3)))
          & 7) == 7 )
      {
        v14 = *((_OWORD *)this + 1); /*0x9153b0*/
        v22 = v12; /*0x9153b4*/
        v15 = *a4; /*0x9153bb*/
        v20 = v14; /*0x9153c6*/
        v21 = 0xFFFFFFFF; /*0x9153cb*/
        ((void (__thiscall *)(void (__stdcall ***)(int, __int128 *), int, __int128 *))*v15)(a4, a3, &v20); /*0x9153d3*/
      }
    }
  }
}
