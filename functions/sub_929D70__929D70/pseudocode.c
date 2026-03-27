__m128 *__thiscall sub_929D70(__m128 *this, __int32 a2, __int32 a3)
{
  sub_9156C0(this);
  this->m128_i32[0] = (__int32)&off_AA1A84;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0x80000000;
  *((_DWORD *)this + 0xC) = a2;
  *(this + 1) = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0);
  *((_DWORD *)this + 8) = a3;
  return this;
}
