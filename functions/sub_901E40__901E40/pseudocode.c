int __cdecl sub_901E40(_DWORD *a1, int *a2, __m128 *a3, int a4, int a5)
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
  _DWORD v16[4]; // [esp+38h] [ebp-60h] BYREF
  unsigned __int64 v17; // [esp+48h] [ebp-50h]
  __int32 v18; // [esp+50h] [ebp-48h]
  __int32 v19; // [esp+54h] [ebp-44h]
  int v20; // [esp+58h] [ebp-40h]
  _OWORD v21[3]; // [esp+68h] [ebp-30h] BYREF

  v5 = (__m128)xmmword_A965C0; /*0x901e4f*/
  v6 = a3[1]; /*0x901e56*/
  qmemcpy(v21, a3, sizeof(v21)); /*0x901e6a*/
  v12 = a3[1].m128_u64[0]; /*0x901e70*/
  v7 = a3[1].m128_i32[2]; /*0x901e7b*/
  v14 = a3[1].m128_i32[3]; /*0x901e81*/
  v15 = a4; /*0x901e88*/
  v21[1] = _mm_xor_ps(v6, v5); /*0x901e99*/
  v11[1] = 0x7F7FFFFF; /*0x901ea1*/
  v11[0] = &off_A9B4E8; /*0x901ea9*/
  v13 = v7; /*0x901ead*/
  if ( !a5 ) /*0x901eb1*/
    return sub_905370(a2, a1, (int)v21, (int)v11, 0); /*0x901f17*/
  v16[0] = &off_A9B4E8; /*0x901eb3*/
  v17 = a3[1].m128_u64[0]; /*0x901eb9*/
  v8 = a3[1].m128_i32[2]; /*0x901ec4*/
  v9 = a3[1].m128_i32[3]; /*0x901ec7*/
  v20 = a5; /*0x901eca*/
  v18 = v8; /*0x901ece*/
  v19 = v9; /*0x901ee2*/
  v16[1] = 0x7F7FFFFF; /*0x901eed*/
  return sub_905370(a2, a1, (int)v21, (int)v11, (int)v16); /*0x901eff*/
}
