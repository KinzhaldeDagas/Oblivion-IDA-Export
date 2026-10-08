__m128 *__cdecl sub_906390(int a1, int a2, int a3, __int32 a4)
{
  int v4; // edx
  __m128 *v5; // esi

  v4 = *(_DWORD *)unk_BA7D98; /*0x9063b1*/
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 0x10) + 0x24) >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 0x10) + 0x24) ) /*0x9063b7*/
  {
    v5 = (__m128 *)(*(int (__stdcall **)(int, int))(v4 + 0x10))(0x40, 0x1C); /*0x9063dd*/
    v5->m128_i16[2] = 0x40; /*0x9063e6*/
    sub_906730(v5, a4); /*0x9063ec*/
    v5->m128_i32[0] = (__int32)&off_A9BEAC; /*0x9063f1*/
  }
  else
  {
    v5 = (__m128 *)(*(int (__stdcall **)(int, int))(v4 + 0x10))(0x40, 0x1C); /*0x9063bc*/
    v5->m128_i16[2] = 0x40; /*0x9063c5*/
    sub_906730(v5, a4); /*0x9063cb*/
    v5->m128_i32[0] = (__int32)&off_A9BE50; /*0x9063d0*/
  }
  return v5; /*0x9063d8*/
}
