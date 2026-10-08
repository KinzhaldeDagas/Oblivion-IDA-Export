// TES4 authoritative: transforms a local position by a Havok transform/matrix at a2: basis columns * local vector + translation.
__m128 *__thiscall hkTransform_TransformPosition(__m128 *this, __m128 *a2, __m128 *a3)
{
  *this = _mm_add_ps( /*0x88fd05*/
            _mm_add_ps(_mm_mul_ps(*a2, _mm_shuffle_ps(*a3, *a3, 0)), _mm_mul_ps(a2[1], _mm_shuffle_ps(*a3, *a3, 0x55))),
            _mm_add_ps(_mm_mul_ps(a2[2], _mm_shuffle_ps(*a3, *a3, 0xAA)), a2[3]));
  return a2; /*0x88fd0a*/
}
