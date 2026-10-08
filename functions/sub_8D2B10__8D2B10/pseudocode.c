__m128 *__thiscall sub_8D2B10(_BYTE *this, __m128 *a2, int *a3)
{
  int v3; // eax
  __m128 v4; // xmm1
  __m128 v5; // xmm2
  __m128 v6; // xmm3
  __m128 *result; // eax
  int v8; // ecx
  int v9; // edx
  _DWORD v10[12]; // [esp+0h] [ebp-30h] BYREF

  v10[0] = *a3; /*0x8d2b1e*/
  v10[5] = a3[5]; /*0x8d2b24*/
  v10[0xA] = a3[0xA]; /*0x8d2b2b*/
  v10[1] = a3[4]; /*0x8d2b32*/
  v10[4] = a3[1]; /*0x8d2b39*/
  v10[2] = a3[8]; /*0x8d2b40*/
  v10[8] = a3[2]; /*0x8d2b47*/
  v3 = a3[6]; /*0x8d2b4e*/
  v10[6] = a3[9]; /*0x8d2b51*/
  v4 = *a2; /*0x8d2b58*/
  v5 = a2[1]; /*0x8d2b5b*/
  v6 = a2[2]; /*0x8d2b5f*/
  v10[9] = v3; /*0x8d2b63*/
  result = (__m128 *)v10; /*0x8d2b67*/
  v8 = this - (_BYTE *)v10; /*0x8d2b6c*/
  v10[3] = 0; /*0x8d2b6e*/
  v10[7] = 0; /*0x8d2b76*/
  v10[0xB] = 0; /*0x8d2b7e*/
  v9 = 3; /*0x8d2b86*/
  do /*0x8d2bc8*/
  {
    *(__m128 *)((char *)result + v8) = _mm_add_ps( /*0x8d2bc0*/
                                         _mm_add_ps(
                                           _mm_mul_ps(v4, _mm_shuffle_ps(*result, *result, 0)),
                                           _mm_mul_ps(v5, _mm_shuffle_ps(*result, *result, 0x55))),
                                         _mm_mul_ps(v6, _mm_shuffle_ps(*result, *result, 0xAA)));
    ++result; /*0x8d2bc4*/
    --v9; /*0x8d2bc7*/
  }
  while ( v9 ); /*0x8d2bc8*/
  return result; /*0x8d2bca*/
}
