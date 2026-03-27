int __stdcall sub_912710(_DWORD *a1, int **a2, int a3, __m128 *a4, int a5, __m128 **a6)
{
  int v6; // edx
  _DWORD *v7; // ebx
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  int *v10; // eax
  int *v11; // ebx
  __m128 v12; // xmm0
  int result; // eax
  __m128 v14[2]; // [esp+Ch] [ebp-30h] BYREF
  int v15; // [esp+2Ch] [ebp-10h]
  int v16; // [esp+30h] [ebp-Ch]

  v6 = *(_DWORD *)(a5 + 0x28);
  v7 = (_DWORD *)(*a1 + 4);
  *a1 = v7;
  v8 = *a4;
  v9 = a4[*v7 + 2];
  v10 = *a2;
  v11 = *a2 + 4;
  v14[1] = v9;
  v12 = a4[1];
  *a2 = v11;
  v14[0] = _mm_sub_ps(v8, v12);
  v15 = *v10;
  v16 = v6 + 8 * a4[0xB].m128_i32[2];
  sub_8F15F0(v14, a5, a6);
  result = a4[0xB].m128_i32[2] + 1;
  a4[0xB].m128_i32[2] = result;
  return result;
}
