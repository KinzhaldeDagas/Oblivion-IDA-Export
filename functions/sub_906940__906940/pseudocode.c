__m128 *__cdecl sub_906940(int a1, int a2, int a3, __int32 a4)
{
  int v4; // edx
  __m128 *v5; // eax
  __m128 *result; // eax
  __m128 v7; // xmm0

  v4 = *(_DWORD *)dword_BA7D98;
  if ( *(float *)(*(_DWORD *)(a1 + 8) + 0xA0) >= (double)*(float *)(*(_DWORD *)(a2 + 8) + 0xA0) )
  {
    result = (__m128 *)(*(int (__stdcall **)(int, int))(v4 + 0x10))(0x40, 0x1C);
    result->m128_i32[2] = a4;
    result->m128_i16[2] = 0x40;
    result->m128_i16[3] = 1;
    result->m128_i32[3] = 0;
    result[1].m128_i32[0] = 0;
    result[1].m128_i32[1] = 0x80000000;
    v7 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0);
    result[3] = v7;
    result[2] = v7;
    result->m128_i32[0] = (__int32)&off_A9BEAC;
  }
  else
  {
    v5 = (__m128 *)(*(int (__stdcall **)(int, int))(v4 + 0x10))(0x40, 0x1C);
    v5->m128_i16[2] = 0x40;
    return sub_906730(v5, a4);
  }
  return result;
}
