void __cdecl sub_8F9320(int a1, int *a2, __m128 *a3, int a4, int a5)
{
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  __int32 v7; // esi
  __int32 v8; // edx
  __int32 v9; // eax
  float v10[4]; // [esp+8h] [ebp-90h] BYREF
  unsigned __int64 v11; // [esp+18h] [ebp-80h]
  __int32 v12; // [esp+20h] [ebp-78h]
  __int32 v13; // [esp+24h] [ebp-74h]
  int v14; // [esp+28h] [ebp-70h]
  _DWORD v15[4]; // [esp+38h] [ebp-60h] BYREF
  unsigned __int64 v16; // [esp+48h] [ebp-50h]
  __int32 v17; // [esp+50h] [ebp-48h]
  __int32 v18; // [esp+54h] [ebp-44h]
  int v19; // [esp+58h] [ebp-40h]
  _OWORD v20[3]; // [esp+68h] [ebp-30h] BYREF

  v5 = (__m128)xmmword_A965C0;
  v6 = a3[1];
  qmemcpy(v20, a3, sizeof(v20));
  v11 = a3[1].m128_u64[0];
  v7 = a3[1].m128_i32[2];
  v13 = a3[1].m128_i32[3];
  v14 = a4;
  v20[1] = _mm_xor_ps(v6, v5);
  v10[1] = 3.4028235e38;
  LODWORD(v10[0]) = &off_A9B4E8;
  v12 = v7;
  if ( a5 )
  {
    v15[0] = &off_A9B4E8;
    v16 = a3[1].m128_u64[0];
    v8 = a3[1].m128_i32[2];
    v9 = a3[1].m128_i32[3];
    v19 = a5;
    v17 = v8;
    v18 = v9;
    v15[1] = 0x7F7FFFFF;
    sub_935CC0(a2, a1, (int)v20, v10, (int)v15);
  }
  else
  {
    sub_935CC0(a2, a1, (int)v20, v10, 0);
  }
}
