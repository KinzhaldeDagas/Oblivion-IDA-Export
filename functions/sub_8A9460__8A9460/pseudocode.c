void __thiscall sub_8A9460(__m128 *this, float a2)
{
  double v2; // st7
  unsigned int v3; // [esp+Ch] [ebp-4h]
  unsigned int v4; // [esp+Ch] [ebp-4h]

  *(float *)&v3 = a2 * flt_A45E4C; /*0x8a9472*/
  v2 = a2 * kHeadBodyNormalMatchRadius; /*0x8a947f*/
  *(this + 3) = _mm_shuffle_ps((__m128)v3, (__m128)v3, 0); /*0x8a9489*/
  *(float *)&v4 = v2; /*0x8a948d*/
  *(this + 4) = _mm_shuffle_ps((__m128)v4, (__m128)v4, 0); /*0x8a949b*/
}
