int __cdecl sub_90B5B0(_DWORD *a1, _DWORD *a2, __m128 *a3, int a4, int a5)
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

  v5 = (__m128)xmmword_A965C0; /*0x90b5bf*/
  v6 = a3[1]; /*0x90b5c6*/
  qmemcpy(v21, a3, sizeof(v21)); /*0x90b5da*/
  v12 = a3[1].m128_u64[0]; /*0x90b5e0*/
  v7 = a3[1].m128_i32[2]; /*0x90b5eb*/
  v14 = a3[1].m128_i32[3]; /*0x90b5f1*/
  v15 = a4; /*0x90b5f8*/
  v21[1] = _mm_xor_ps(v6, v5); /*0x90b609*/
  v11[1] = 0x7F7FFFFF; /*0x90b611*/
  v11[0] = &off_A9B4E8; /*0x90b619*/
  v13 = v7; /*0x90b61d*/
  if ( !a5 ) /*0x90b621*/
    return sub_90ADA0(a2, a1, v21, (int)v11, 0); /*0x90b687*/
  v16[0] = &off_A9B4E8; /*0x90b623*/
  v17 = a3[1].m128_u64[0]; /*0x90b629*/
  v8 = a3[1].m128_i32[2]; /*0x90b634*/
  v9 = a3[1].m128_i32[3]; /*0x90b637*/
  v20 = a5; /*0x90b63a*/
  v18 = v8; /*0x90b63e*/
  v19 = v9; /*0x90b652*/
  v16[1] = 0x7F7FFFFF; /*0x90b65d*/
  return sub_90ADA0(a2, a1, v21, (int)v11, (int)v16); /*0x90b66f*/
}
