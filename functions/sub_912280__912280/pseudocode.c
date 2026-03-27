int __stdcall sub_912280(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax
  __m128 v7; // [esp+Ch] [ebp-60h] BYREF
  __m128 v8; // [esp+1Ch] [ebp-50h]
  __int128 v9; // [esp+2Ch] [ebp-40h]
  __m128 v10; // [esp+3Ch] [ebp-30h] BYREF
  __m128 v11; // [esp+4Ch] [ebp-20h]
  __int128 v12; // [esp+5Ch] [ebp-10h]

  v10 = *(__m128 *)(a4 + 0x50);
  v12 = *(_OWORD *)(a4 + 0x90);
  v11 = *(__m128 *)(a4 + 0x70);
  sub_8F1310(&v10, a5, a6);
  v7 = *(__m128 *)(a4 + 0x60);
  v9 = *(_OWORD *)(a4 + 0xA0);
  v8 = v10;
  sub_8F1310(&v7, a5, a6);
  v9 = *(_OWORD *)(a4 + 0x80);
  v8 = v7;
  v7 = v11;
  sub_8F1310(&v7, a5, a6);
  result = *(_DWORD *)(a4 + 0xB8) + 3;
  *(_DWORD *)(a4 + 0xB8) = result;
  return result;
}
