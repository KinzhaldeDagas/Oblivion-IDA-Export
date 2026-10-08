__m128 *__thiscall sub_8E90A0(__m128 *this)
{
  float v2; // edx
  __m128 v3; // xmm0

  this->m128_i16[3] = 1; /*0x8e90ab*/
  this->m128_i32[0] = (__int32)&off_A9ACF4; /*0x8e90b1*/
  *((_DWORD *)this + 0x14) = 0xBF800000; /*0x8e90b7*/
  *(_QWORD *)((char *)this + 0x54) = *(_QWORD *)&flt_B2FD20; /*0x8e90c4*/
  *((float *)this + 0x17) = flt_B2FD28; /*0x8e90d6*/
  v2 = flt_B2FD2C; /*0x8e90d9*/
  v3 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0); /*0x8e90ed*/
  *(this + 1) = v3; /*0x8e90f1*/
  *(this + 3) = v3; /*0x8e90f5*/
  *((float *)this + 0x18) = v2; /*0x8e90f9*/
  *((_OWORD *)this + 2) = 0; /*0x8e90ff*/
  *((_DWORD *)this + 0xB) = 0x3F800000; /*0x8e9108*/
  *((_OWORD *)this + 4) = 0; /*0x8e910b*/
  *((_DWORD *)this + 0x13) = 0x3F800000; /*0x8e910f*/
  return this; /*0x8e9112*/
}
