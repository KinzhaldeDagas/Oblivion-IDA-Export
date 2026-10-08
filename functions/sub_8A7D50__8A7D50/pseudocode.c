char __thiscall sub_8A7D50(__m128 *this, __m128 *a2)
{
  __m128 v2; // xmm1
  __m128 v3; // xmm0
  int v4; // edx
  __m128 *i; // esi
  __m128 *v7; // ecx
  float v8; // [esp+4h] [ebp-24h]
  __m128 v9; // [esp+8h] [ebp-20h] BYREF

  v2 = *a2; /*0x8a7d67*/
  v3 = *(this + 5); /*0x8a7d6a*/
  v9 = _mm_sub_ps(*a2, v3); /*0x8a7d78*/
  v4 = 0; /*0x8a7d7d*/
  for ( i = this + 9; ; i = (__m128 *)((char *)i + 4) ) /*0x8a7d7f*/
  {
    v8 = fabs(v9.m128_f32[v4]); /*0x8a7d8b*/
    if ( i->m128_f32[0] <= (double)v8 ) /*0x8a7d9c*/
      break; /*0x8a7d9c*/
    if ( (unsigned int)++v4 >= 3 ) /*0x8a7da7*/
      return 0; /*0x8a7dbb*/
  }
  v9 = v2; /*0x8a7dc5*/
  sub_8A7BA0(this->m128_f32, v9.m128_f32); /*0x8a7dca*/
  if ( (_mm_movemask_ps( /*0x8a7df7*/
          _mm_cmplt_ps(
            _mm_shuffle_ps((__m128)LODWORD(kHeadBodyNormalMatchRadius), (__m128)LODWORD(kHeadBodyNormalMatchRadius), 0),
            _mm_and_ps(_mm_sub_ps(v9, v3), (__m128)xmmword_A372D0)))
      & 7) == 0 )
    return 0; /*0x8a7df9*/
  sub_88C600(v7, &v9); /*0x8a7e13*/
  return 1; /*0x8a7dad*/
}
