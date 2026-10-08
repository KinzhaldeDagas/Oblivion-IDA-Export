__m128 *__cdecl sub_9068E0(int a1, int a2, int a3, int a4)
{
  __m128 *result; // eax
  __m128 v5; // xmm0

  result = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x40, 0x1C); /*0x9068f5*/
  result->m128_i32[2] = a4; /*0x9068fb*/
  result->m128_i16[2] = 0x40; /*0x9068fe*/
  result->m128_i16[3] = 1; /*0x906904*/
  result->m128_i32[3] = 0; /*0x90691a*/
  result[1].m128_i32[0] = 0; /*0x90691d*/
  result[1].m128_i32[1] = 0x80000000; /*0x906920*/
  v5 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0); /*0x906927*/
  result[3] = v5; /*0x90692b*/
  result[2] = v5; /*0x90692f*/
  result->m128_i32[0] = (__int32)&off_A9BEAC; /*0x906933*/
  return result; /*0x906939*/
}
