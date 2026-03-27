void __thiscall sub_8FDAF0(int this)
{
  __m128 v1; // xmm3
  __m128 v2; // xmm5
  __m128 v3; // xmm4
  __m128 v4; // xmm0

  *(_OWORD *)(this + 0xC0) = *(_OWORD *)(this + 0x50);
  v1 = *(__m128 *)(this + 0x40);
  v2 = *(__m128 *)(this + 0x30);
  v3 = _mm_shuffle_ps(v1, v1, 0x44);
  v4 = _mm_shuffle_ps(*(__m128 *)(this + 0x20), v2, 0x44);
  *(__m128 *)(this + 0xD0) = _mm_add_ps(
                               _mm_add_ps(
                                 _mm_mul_ps(
                                   _mm_shuffle_ps(v4, v3, 0x88),
                                   _mm_shuffle_ps(*(__m128 *)(this + 0xC0), *(__m128 *)(this + 0xC0), 0)),
                                 _mm_mul_ps(
                                   _mm_shuffle_ps(v4, v3, 0xDD),
                                   _mm_shuffle_ps(*(__m128 *)(this + 0xC0), *(__m128 *)(this + 0xC0), 0x55))),
                               _mm_mul_ps(
                                 _mm_shuffle_ps(
                                   _mm_shuffle_ps(*(__m128 *)(this + 0x20), v2, 0xEE),
                                   _mm_shuffle_ps(v1, v1, 0xEE),
                                   0x88),
                                 _mm_shuffle_ps(*(__m128 *)(this + 0xC0), *(__m128 *)(this + 0xC0), 0xAA)));
}
