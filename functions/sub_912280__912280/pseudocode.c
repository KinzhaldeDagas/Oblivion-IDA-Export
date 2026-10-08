int __stdcall sub_912280(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  __m128 v7; // [esp+Ch] [ebp-60h] BYREF
  __m128 v8; // [esp+1Ch] [ebp-50h]
  __int128 v9; // [esp+2Ch] [ebp-40h]
  __m128 v10; // [esp+3Ch] [ebp-30h] BYREF
  __m128 v11; // [esp+4Ch] [ebp-20h]
  __int128 v12; // [esp+5Ch] [ebp-10h]

  v10 = *(__m128 *)(a4 + 0x50); /*0x912299*/
  v12 = *(_OWORD *)(a4 + 0x90); /*0x9122aa*/
  v11 = *(__m128 *)(a4 + 0x70); /*0x9122b5*/
  sub_8F1310(&v10, a5, a6); /*0x9122ba*/
  v7 = *(__m128 *)(a4 + 0x60); /*0x9122c3*/
  v9 = *(_OWORD *)(a4 + 0xA0); /*0x9122d4*/
  v8 = v10; /*0x9122e0*/
  sub_8F1310(&v7, a5, a6); /*0x9122e5*/
  v9 = *(_OWORD *)(a4 + 0x80); /*0x9122f1*/
  v8 = v7; /*0x912300*/
  v7 = v11; /*0x91230c*/
  sub_8F1310(&v7, a5, a6); /*0x912311*/
  result = *(_DWORD *)(a4 + 0xB8) + 3; /*0x91231f*/
  *(_DWORD *)(a4 + 0xB8) = result; /*0x912323*/
  return result; /*0x912329*/
}
