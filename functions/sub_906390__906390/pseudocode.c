__m128 *__cdecl sub_906390(int a1, int a2, int a3, __int32 a4)
{
  int v4; // edx
  __m128 *v5; // esi

  v4 = *(_DWORD *)dword_BA7D98;
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 0x10) + 0x24) >= *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 0x10) + 0x24) )
  {
    v5 = (__m128 *)(*(int (__stdcall **)(int, int))(v4 + 0x10))(0x40, 0x1C);
    v5->m128_i16[2] = 0x40;
    sub_906730(v5, a4);
    v5->m128_i32[0] = (__int32)&off_A9BEAC;
  }
  else
  {
    v5 = (__m128 *)(*(int (__stdcall **)(int, int))(v4 + 0x10))(0x40, 0x1C);
    v5->m128_i16[2] = 0x40;
    sub_906730(v5, a4);
    v5->m128_i32[0] = (__int32)&off_A9BE50;
  }
  return v5;
}
