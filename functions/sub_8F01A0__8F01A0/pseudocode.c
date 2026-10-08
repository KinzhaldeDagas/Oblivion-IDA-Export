__m128 *__thiscall sub_8F01A0(__m128 *this, __m128 *a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st7
  double v7; // st6
  unsigned int v9; // [esp+Ch] [ebp-14h]
  __m128 v10; // [esp+10h] [ebp-10h]

  this->m128_i16[3] = 1; /*0x8f01b1*/
  this->m128_i32[2] = 0; /*0x8f01b7*/
  this->m128_i32[0] = (__int32)&off_A9B0EC; /*0x8f01ba*/
  *(unsigned __int64 *)((char *)&this->m128_u64[1] + 4) = a2[1].m128_u64[0]; /*0x8f01c3*/
  v3 = (double)a2[1].m128_i32[1] - fConstant_1; /*0x8f01cf*/
  v4 = a2[1].m128_f32[3] - a2[1].m128_f32[2]; /*0x8f01d8*/
  *((float *)this + 0x14) = (double)a2[1].m128_i32[0] - fConstant_1; /*0x8f01e4*/
  *((float *)this + 0x15) = v4; /*0x8f01e7*/
  *((float *)this + 0x16) = v3; /*0x8f01ea*/
  *((_DWORD *)this + 0x17) = 0; /*0x8f01ed*/
  *(this + 5) = _mm_mul_ps(*(this + 5), *a2); /*0x8f01fa*/
  if ( a2[1].m128_f32[2] <= (double)a2[1].m128_f32[3] ) /*0x8f0209*/
  {
    *((float *)this + 5) = (a2[1].m128_f32[2] + a2[1].m128_f32[3]) * a2->m128_f32[1] * kHeadBodyNormalMatchRadius; /*0x8f0227*/
  }
  else
  {
    *((_DWORD *)this + 5) = 0xBF800000; /*0x8f0210*/
    *((_DWORD *)this + 0x15) = 0xBF800000; /*0x8f0213*/
  }
  v5 = fConstant_1; /*0x8f022d*/
  *(this + 2) = *a2; /*0x8f0233*/
  v6 = v5 / a2->m128_f32[2]; /*0x8f0237*/
  v7 = fConstant_1 / a2->m128_f32[1]; /*0x8f0240*/
  *((float *)this + 0xC) = fConstant_1 / a2->m128_f32[0]; /*0x8f024b*/
  *((float *)this + 0xD) = v7; /*0x8f024e*/
  *((float *)this + 0xE) = v6; /*0x8f0251*/
  *((_DWORD *)this + 0xF) = 0; /*0x8f0254*/
  sub_92B470(); /*0x8f0257*/
  *(float *)&v9 = v6; /*0x8f025c*/
  v10 = _mm_mul_ps(_mm_shuffle_ps((__m128)v9, (__m128)v9, 0), *(this + 2)); /*0x8f0274*/
  v10.m128_i32[1] = 0; /*0x8f0279*/
  *(this + 4) = v10; /*0x8f0286*/
  return this; /*0x8f028c*/
}
