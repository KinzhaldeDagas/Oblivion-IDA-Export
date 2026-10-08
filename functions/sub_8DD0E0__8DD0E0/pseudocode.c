__m128 *__cdecl sub_8DD0E0(__m128 *a1, __m128 *a2)
{
  __m128 v2; // xmm0
  __m128 *result; // eax
  __m128 v4; // xmm0
  __m128 v5; // [esp+Ch] [ebp-20h] BYREF
  __m128 v6; // [esp+1Ch] [ebp-10h] BYREF

  v2 = *a1; /*0x8dd0ec*/
  v5 = _mm_sub_ps(*a1, a2[8]); /*0x8dd10a*/
  a2[8] = v2; /*0x8dd10f*/
  result = hkBasis_TransformVector(&v6, a2, &v5); /*0x8dd116*/
  v4 = _mm_and_ps(v6, (__m128)xmmword_A9A470); /*0x8dd127*/
  a2[4] = _mm_add_ps(a2[4], v4); /*0x8dd131*/
  a2[5] = _mm_add_ps(a2[5], v4); /*0x8dd13c*/
  return result; /*0x8dd141*/
}
