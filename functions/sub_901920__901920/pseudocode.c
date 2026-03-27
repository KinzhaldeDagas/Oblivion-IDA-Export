int __stdcall sub_901920(int **a1, int **a2, __m128 *a3, int a4, int a5)
{
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  __int32 v7; // esi
  __int32 v8; // edx
  __int32 v9; // eax
  _DWORD v11[4]; // [esp+8h] [ebp-90h] BYREF
  unsigned __int64 v12; // [esp+18h] [ebp-80h]
  __int32 v13; // [esp+20h] [ebp-78h]
  __int32 v14; // [esp+24h] [ebp-74h]
  int v15; // [esp+28h] [ebp-70h]
  int v16[4]; // [esp+38h] [ebp-60h] BYREF
  unsigned __int64 v17; // [esp+48h] [ebp-50h]
  __int32 v18; // [esp+50h] [ebp-48h]
  __int32 v19; // [esp+54h] [ebp-44h]
  int v20; // [esp+58h] [ebp-40h]
  __m128 v21[3]; // [esp+68h] [ebp-30h] BYREF

  v5 = (__m128)xmmword_A965C0;
  v6 = a3[1];
  qmemcpy(v21, a3, sizeof(v21));
  v12 = a3[1].m128_u64[0];
  v7 = a3[1].m128_i32[2];
  v14 = a3[1].m128_i32[3];
  v15 = a4;
  v21[1] = _mm_xor_ps(v6, v5);
  v11[1] = 0x7F7FFFFF;
  v11[0] = &off_A9B4E8;
  v13 = v7;
  if ( !a5 )
    return sub_900CA0(a2, a1, v21, (int)v11, 0);
  v16[0] = (int)&off_A9B4E8;
  v17 = a3[1].m128_u64[0];
  v8 = a3[1].m128_i32[2];
  v9 = a3[1].m128_i32[3];
  v20 = a5;
  v18 = v8;
  v19 = v9;
  v16[1] = 0x7F7FFFFF;
  return sub_900CA0(a2, a1, v21, (int)v11, v16);
}
