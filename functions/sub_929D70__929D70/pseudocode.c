__m128 *__thiscall sub_929D70(__m128 *this, __int32 a2, __int32 a3)
{
  sub_9156C0(this); /*0x929d7c*/
  this->m128_i32[0] = (__int32)&off_AA1A84; /*0x929d86*/
  *((_DWORD *)this + 9) = 0; /*0x929d8c*/
  *((_DWORD *)this + 0xA) = 0; /*0x929d8f*/
  *((_DWORD *)this + 0xB) = 0x80000000; /*0x929d95*/
  *((_DWORD *)this + 0xC) = a2; /*0x929daa*/
  *(this + 1) = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0); /*0x929db1*/
  *((_DWORD *)this + 8) = a3; /*0x929db5*/
  return this; /*0x929dba*/
}
