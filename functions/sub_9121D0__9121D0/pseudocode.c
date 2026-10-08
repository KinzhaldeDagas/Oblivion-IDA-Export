int __stdcall sub_9121D0(int **a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v6; // edi
  int v7; // eax
  int v8; // edx
  __m128 v9; // xmm0
  int result; // eax
  __m128 v11; // [esp+10h] [ebp-30h] BYREF
  __m128 v12; // [esp+20h] [ebp-20h]
  __int128 v13; // [esp+30h] [ebp-10h]

  v6 = *a1 + 1; /*0x9121e7*/
  *a1 = v6; /*0x9121ea*/
  v7 = *v6; /*0x9121ee*/
  v8 = *(_DWORD *)(4 * *v6 + 0xB2FFA0); /*0x9121f7*/
  v12 = *(__m128 *)(0x10 * (*(_DWORD *)(4 * *v6 + 0xB2FF9C) + 5) + a4); /*0x912211*/
  v11 = *(__m128 *)(0x10 * (v8 + 5) + a4); /*0x912220*/
  v13 = *(_OWORD *)(0x10 * (v7 + 8) + a4); /*0x912230*/
  sub_8F1310(&v11, a5, a6); /*0x912235*/
  v9 = _mm_xor_ps(v12, (__m128)xmmword_A965C0); /*0x912247*/
  v12 = v11; /*0x912255*/
  v11 = v9; /*0x91225a*/
  sub_8F1310(&v11, a5, a6); /*0x91225f*/
  result = *(_DWORD *)(a4 + 0xB8) + 2; /*0x91226d*/
  *(_DWORD *)(a4 + 0xB8) = result; /*0x912271*/
  return result; /*0x912270*/
}
