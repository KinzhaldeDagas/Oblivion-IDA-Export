int __stdcall sub_9120D0(_DWORD *a1, int a2, int a3, __m128 *a4, int a5, __m128 **a6)
{
  _DWORD *v6; // edx
  int result; // eax
  __m128 v8[3]; // [esp+10h] [ebp-30h] BYREF

  v6 = (_DWORD *)(*a1 + 4); /*0x9120e1*/
  *a1 = v6; /*0x9120e4*/
  v8[2] = a4[*v6 + 2]; /*0x9120fc*/
  v8[0] = *a4; /*0x912109*/
  v8[1] = a4[1]; /*0x912113*/
  sub_8F1790(v8, a5, a6); /*0x912118*/
  result = a4[0xB].m128_i32[2] + 1; /*0x912126*/
  a4[0xB].m128_i32[2] = result; /*0x912127*/
  return result; /*0x91212d*/
}
