__m128 *__cdecl sub_9067E0(__m128 **a1, int a2, __m128 *a3, __m128 *a4)
{
  __m128 *result; // eax
  __m128 v5; // xmm1
  _DWORD v6[7]; // [esp+4h] [ebp-5Ch] BYREF
  __m128 v7[4]; // [esp+20h] [ebp-40h] BYREF

  sub_8B1FF0(v7, *(__m128 **)(a2 + 8), a1[2]); /*0x9067fe*/
  (*(void (__thiscall **)(_DWORD, __m128 *, __int32, __m128 *))((*a1)->m128_i32[0] + 0xC))(*a1, v7, a3->m128_i32[2], a4); /*0x906817*/
  result = hkBasis_ProjectVector((__m128 *)&v6[3], *(__m128 **)(a2 + 8), a3 + 1); /*0x906826*/
  v5 = *(__m128 *)&v6[3]; /*0x90682b*/
  *a4 = _mm_add_ps(*a4, _mm_min_ps((__m128)0LL, *(__m128 *)&v6[3])); /*0x90683f*/
  a4[1] = _mm_add_ps(a4[1], _mm_max_ps((__m128)0LL, v5)); /*0x90684d*/
  return result; /*0x906851*/
}
