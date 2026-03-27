__m128 *__thiscall sub_8E90A0(__m128 *this)
{
  float v2; // edx
  __m128 v3; // xmm0

  this->m128_i16[3] = 1;
  this->m128_i32[0] = (__int32)&off_A9ACF4;
  *((_DWORD *)this + 0x14) = 0xBF800000;
  *(_QWORD *)((char *)this + 0x54) = *(_QWORD *)&flt_B2FD20;
  *((float *)this + 0x17) = flt_B2FD28;
  v2 = flt_B2FD2C;
  v3 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0);
  *(this + 1) = v3;
  *(this + 3) = v3;
  *((float *)this + 0x18) = v2;
  *((_OWORD *)this + 2) = 0;
  *((_DWORD *)this + 0xB) = 0x3F800000;
  *((_OWORD *)this + 4) = 0;
  *((_DWORD *)this + 0x13) = 0x3F800000;
  return this;
}
