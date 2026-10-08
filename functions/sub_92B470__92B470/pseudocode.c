unsigned int sub_92B470()
{
  float v0; // xmm1_4
  int v1; // ecx
  double v2; // st7
  unsigned int result; // eax
  float v4; // [esp+4h] [ebp-2Ch]
  unsigned int v5; // [esp+8h] [ebp-28h]
  float v6; // [esp+Ch] [ebp-24h]

  v4 = 10.0; /*0x92b49e*/
  v6 = 11.0; /*0x92b4a6*/
  v0 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0).m128_f32[0]; /*0x92b4ae*/
  v1 = 0x17; /*0x92b4b2*/
  do /*0x92b502*/
  {
    v2 = (v6 + v4) * kHeadBodyNormalMatchRadius; /*0x92b4c8*/
    *(float *)&v5 = v2; /*0x92b4ce*/
    result = COERCE_UNSIGNED_INT( /*0x92b4ee*/
               (float)((float)(_mm_shuffle_ps((__m128)v5, (__m128)v5, 0).m128_f32[0] + unk_BA7A40.x) * v0)
             + *(float *)&xmmword_A97DD0) >> 6;
    if ( (unsigned __int16)result >= 0xBu ) /*0x92b4f5*/
      v6 = v2; /*0x92b4fd*/
    else
      v4 = v2; /*0x92b4f7*/
    --v1; /*0x92b501*/
  }
  while ( v1 ); /*0x92b502*/
  return result; /*0x92b51c*/
}
