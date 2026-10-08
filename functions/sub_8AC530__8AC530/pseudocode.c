// TES4 authoritative: after a new cast hit, computes remaining time/move fraction from the first collector hit and blends the cast endpoint toward the hit point.
double __thiscall hkpCharacterProxy_ComputeCastMoveFraction(
        float *this,
        __m128 *moveVec,
        int collector,
        __m128 *targetPos,
        __m128 *currentPos)
{
  __m128 v5; // xmm0
  __m128 *v6; // eax
  __m128 v7; // xmm1
  double v8; // st7
  __m128 v9; // xmm0
  float v11; // [esp+8h] [ebp-18h]
  unsigned int v12; // [esp+Ch] [ebp-14h]
  float v13; // [esp+10h] [ebp-10h]

  v5 = _mm_mul_ps(*moveVec, *moveVec); /*0x8ac549*/
  v13 = fsqrt(_mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] /*0x8ac56e*/
                                                               + v5.m128_f32[0]));
  v6 = *(__m128 **)(collector + 0x10); /*0x8ac588*/
  v7 = _mm_mul_ps(*moveVec, v6[1]); /*0x8ac58f*/
  v11 = v6->m128_f32[3] /*0x8ac5c4*/
      - kTerrainLODQuadRayDirectionZ
      / ((float)(_mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]))
       * (fConstant_1
        / v13))
      * *(this + 0x16)
      * (fConstant_1
       / v13);
  if ( v11 >= (double)fConstant_1 ) /*0x8ac5d9*/
  {
    v8 = fConstant_1; /*0x8ac635*/
  }
  else
  {
    v8 = v11; /*0x8ac5db*/
    if ( *(float *)&SrcStr > (double)v11 ) /*0x8ac5ee*/
      v8 = *(float *)&SrcStr; /*0x8ac5f2*/
  }
  *(float *)&v12 = v8; /*0x8ac5fb*/
  v9 = _mm_shuffle_ps((__m128)v12, (__m128)v12, 0); /*0x8ac612*/
  *currentPos = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v9), *currentPos), _mm_mul_ps(v9, *targetPos)); /*0x8ac628*/
  return v8 * moveVec[2].m128_f32[0]; /*0x8ac62e*/
}
