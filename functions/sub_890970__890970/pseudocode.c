void __thiscall sub_890970(__m128 *this)
{
  __m128 v1; // xmm0

  if ( *((float *)this + 0xC0) <= 0.0 )
  {
    *(this + 0x2F) = (__m128)stru_BA7A40;
  }
  else
  {
    v1 = 0;
    if ( (*((_DWORD *)this + 0x7D) & 0x1800) == 0 )
    {
      v1.m128_f32[0] = *((float *)this + 0xC0);
      *(this + 0x2E) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v1, v1, 0), *(this + 0x2F)), *(this + 0x2E));
    }
  }
}
