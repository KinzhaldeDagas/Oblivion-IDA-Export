__m128 *__cdecl sub_906780(int a1, int a2, int a3, int a4)
{
  __m128 *result; // eax
  __m128 v5; // xmm0

  result = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x40, 0x1C); /*0x906795*/
  result->m128_i32[2] = a4; /*0x90679b*/
  result->m128_i16[2] = 0x40; /*0x90679e*/
  result->m128_i16[3] = 1; /*0x9067a4*/
  result->m128_i32[0] = (__int32)&off_A9BE50; /*0x9067aa*/
  result->m128_i32[3] = 0; /*0x9067c0*/
  result[1].m128_i32[0] = 0; /*0x9067c3*/
  result[1].m128_i32[1] = 0x80000000; /*0x9067c6*/
  v5 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0); /*0x9067cd*/
  result[3] = v5; /*0x9067d1*/
  result[2] = v5; /*0x9067d5*/
  return result; /*0x9067d9*/
}
