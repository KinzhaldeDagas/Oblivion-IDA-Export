int __stdcall sub_912030(int a1, int a2, int a3, __m128 *a4, int a5, __m128 **a6)
{
  int result; // eax
  __m128 v7[2]; // [esp+Ch] [ebp-30h] BYREF
  __int128 v8; // [esp+2Ch] [ebp-10h]

  v7[0] = *a4;
  v7[1] = a4[1];
  v8 = 0;
  LODWORD(v8) = 0x3F800000;
  sub_8F1790(v7, a5, a6);
  *(_QWORD *)&v8 = 0x3F80000000000000LL;
  sub_8F1790(v7, a5, a6);
  *(_QWORD *)((char *)&v8 + 4) = 0x3F80000000000000LL;
  sub_8F1790(v7, a5, a6);
  result = a4[0xB].m128_i32[2] + 3;
  a4[0xB].m128_i32[2] = result;
  return result;
}
