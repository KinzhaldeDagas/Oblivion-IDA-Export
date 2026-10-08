__m128 *__cdecl sub_906940(int a1, int a2, int a3, __int32 a4)
{
  int v4; // edx
  __m128 *v5; // eax
  __m128 *result; // eax
  __m128 v7; // xmm0

  v4 = *(_DWORD *)unk_BA7D98; /*0x906967*/
  if ( *(float *)(*(_DWORD *)(a1 + 8) + 0xA0) >= (double)*(float *)(*(_DWORD *)(a2 + 8) + 0xA0) ) /*0x906972*/
  {
    result = (__m128 *)(*(int (__stdcall **)(int, int))(v4 + 0x10))(0x40, 0x1C); /*0x90698c*/
    result->m128_i32[2] = a4; /*0x906992*/
    result->m128_i16[2] = 0x40; /*0x906995*/
    result->m128_i16[3] = 1; /*0x90699b*/
    result->m128_i32[3] = 0; /*0x9069b1*/
    result[1].m128_i32[0] = 0; /*0x9069b4*/
    result[1].m128_i32[1] = 0x80000000; /*0x9069b7*/
    v7 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0); /*0x9069be*/
    result[3] = v7; /*0x9069c2*/
    result[2] = v7; /*0x9069c6*/
    result->m128_i32[0] = (__int32)&off_A9BEAC; /*0x9069ca*/
  }
  else
  {
    v5 = (__m128 *)(*(int (__stdcall **)(int, int))(v4 + 0x10))(0x40, 0x1C); /*0x906974*/
    v5->m128_i16[2] = 0x40; /*0x90697d*/
    return sub_906730(v5, a4); /*0x906983*/
  }
  return result; /*0x906988*/
}
