__m128 *__thiscall sub_906730(__m128 *this, __int32 a2)
{
  __m128 v3; // xmm0

  this->m128_i32[2] = a2;
  this->m128_i16[3] = 1;
  this->m128_i32[0] = (__int32)&off_A9BE50;
  *(unsigned __int64 *)((char *)&this->m128_u64[1] + 4) = 0;
  *((_DWORD *)this + 5) = 0x80000000;
  v3 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0);
  *(this + 3) = v3;
  *(this + 2) = v3;
  return this;
}
