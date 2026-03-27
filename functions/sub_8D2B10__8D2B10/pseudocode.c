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

  v10[0] = *a3;
  v10[5] = a3[5];
  v10[0xA] = a3[0xA];
  v10[1] = a3[4];
  v10[4] = a3[1];
  v10[2] = a3[8];
  v10[8] = a3[2];
  v3 = a3[6];
  v10[6] = a3[9];
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v10[9] = v3;
  result = (__m128 *)v10;
  v8 = this - (_BYTE *)v10;
  v10[3] = 0;
  v10[7] = 0;
  v10[0xB] = 0;
  v9 = 3;
  do
  {
    *(__m128 *)((char *)result + v8) = _mm_add_ps(
                                         _mm_add_ps(
                                           _mm_mul_ps(v4, _mm_shuffle_ps(*result, *result, 0)),
                                           _mm_mul_ps(v5, _mm_shuffle_ps(*result, *result, 0x55))),
                                         _mm_mul_ps(v6, _mm_shuffle_ps(*result, *result, 0xAA)));
    ++result;
    --v9;
  }
  while ( v9 );
  return result;
}
