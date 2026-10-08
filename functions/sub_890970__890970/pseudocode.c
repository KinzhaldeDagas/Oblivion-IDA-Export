// Transient velocity-add channel: when proxy+0x300 timer is positive, adds timer * proxy+0x2F0 vector to velocity unless gravity-suppress flags 0x1800 are set. Setter not confirmed in current movement slice.
void __thiscall sub_890970(__m128 *this)
{
  __m128 v1; // xmm0

  if ( *((float *)this + 0xC0) <= 0.0 ) /*0x89097d*/
  {
    *(this + 0x2F) = (__m128)unk_BA7A40; /*0x8909c4*/
  }
  else
  {
    v1 = 0; /*0x890991*/
    if ( (*((_DWORD *)this + 0x7D) & 0x1800) == 0 ) /*0x890998*/
    {
      v1.m128_f32[0] = *((float *)this + 0xC0); /*0x890994*/
      *(this + 0x2E) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v1, v1, 0), *(this + 0x2F)), *(this + 0x2E)); /*0x8909b5*/
    }
  }
}
