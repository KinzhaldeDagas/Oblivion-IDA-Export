int __cdecl sub_9366B0(__m128 *a1, unsigned int *a2, int *a3)
{
  int result; // eax

  result = _mm_movemask_ps(_mm_cmplt_ps(_mm_shuffle_ps((__m128)*a2, (__m128)*a2, 0), *a1)) & 7; /*0x9366df*/
  *a3 = result; /*0x9366e2*/
  return result; /*0x9366e4*/
}
