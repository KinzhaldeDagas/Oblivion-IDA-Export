int __stdcall sub_9120D0(_DWORD *a1, int a2, int a3, __m128 *a4, int a5, __m128 **a6)
{
  _DWORD *v6; // edx
  int result; // eax
  __m128 v8[3]; // [esp+10h] [ebp-30h] BYREF

  v6 = (_DWORD *)(*a1 + 4);
  *a1 = v6;
  v8[2] = a4[*v6 + 2];
  v8[0] = *a4;
  v8[1] = a4[1];
  sub_8F1790(v8, a5, a6);
  result = a4[0xB].m128_i32[2] + 1;
  a4[0xB].m128_i32[2] = result;
  return result;
}
