char __thiscall sub_8A7D50(__m128 *this, __m128 *a2)
{
  __m128 v2; // xmm1
  __m128 v3; // xmm0
  int v4; // edx
  __m128 *i; // esi
  __m128 *v7; // ecx
  float v8; // [esp+4h] [ebp-24h]
  __m128 v9; // [esp+8h] [ebp-20h] BYREF

  v2 = *a2;
  v3 = *(this + 5);
  v9 = _mm_sub_ps(*a2, v3);
  v4 = 0;
  for ( i = this + 9; ; i = (__m128 *)((char *)i + 4) )
  {
    v8 = fabs(v9.m128_f32[v4]);
    if ( i->m128_f32[0] <= (double)v8 )
      break;
    if ( (unsigned int)++v4 >= 3 )
      return 0;
  }
  v9 = v2;
  sub_8A7BA0(this->m128_f32, v9.m128_f32);
  if ( (_mm_movemask_ps(
          _mm_cmplt_ps(
            _mm_shuffle_ps((__m128)LODWORD(flt_A3D65C), (__m128)LODWORD(flt_A3D65C), 0),
            _mm_and_ps(_mm_sub_ps(v9, v3), (__m128)xmmword_A372D0)))
      & 7) == 0 )
    return 0;
  sub_88C600(v7, &v9);
  return 1;
}
