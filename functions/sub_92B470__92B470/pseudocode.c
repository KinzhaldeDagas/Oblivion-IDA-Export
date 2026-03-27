unsigned int sub_92B470()
{
  float v0; // xmm1_4
  int v1; // ecx
  double v2; // st7
  unsigned int result; // eax
  float v4; // [esp+4h] [ebp-2Ch]
  unsigned int v5; // [esp+8h] [ebp-28h]
  float v6; // [esp+Ch] [ebp-24h]

  v4 = 10.0;
  v6 = 11.0;
  v0 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0).m128_f32[0];
  v1 = 0x17;
  do
  {
    v2 = (v6 + v4) * flt_A3D65C;
    *(float *)&v5 = v2;
    result = COERCE_UNSIGNED_INT(
               (float)((float)(_mm_shuffle_ps((__m128)v5, (__m128)v5, 0).m128_f32[0] + stru_BA7A40.x) * v0)
             + *(float *)&xmmword_A97DD0) >> 6;
    if ( (unsigned __int16)result >= 0xBu )
      v6 = v2;
    else
      v4 = v2;
    --v1;
  }
  while ( v1 );
  return result;
}
