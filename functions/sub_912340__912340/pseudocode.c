int __stdcall sub_912340(_DWORD *a1, int **a2, int a3, __m128 *a4, int a5, int *a6)
{
  _DWORD *v6; // ecx
  int *v7; // eax
  __m128 v8; // xmm0
  int result; // eax
  __m128 v10[3]; // [esp+10h] [ebp-40h] BYREF
  int v11; // [esp+40h] [ebp-10h]
  int v12; // [esp+44h] [ebp-Ch]

  v6 = (_DWORD *)(*a1 + 4);
  *a1 = v6;
  v7 = *a2;
  v10[2] = a4[*v6 + 2];
  v10[0] = *a4;
  v8 = a4[1];
  *a2 = v7 + 4;
  v10[1] = v8;
  v11 = *v7;
  v12 = v7[1];
  sub_8F1970(v10, a5, a6);
  result = a4[0xB].m128_i32[2] + 1;
  a4[0xB].m128_i32[2] = result;
  return result;
}
