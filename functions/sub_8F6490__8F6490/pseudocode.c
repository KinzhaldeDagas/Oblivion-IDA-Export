int __cdecl sub_8F6490(_DWORD *a1, __m128 **a2, __m128 *a3, int a4, int a5)
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

  v5 = (__m128)xmmword_A965C0; /*0x8f649f*/
  v6 = a3[1]; /*0x8f64a6*/
  qmemcpy(v21, a3, sizeof(v21)); /*0x8f64ba*/
  v12 = a3[1].m128_u64[0]; /*0x8f64c0*/
  v7 = a3[1].m128_i32[2]; /*0x8f64cb*/
  v14 = a3[1].m128_i32[3]; /*0x8f64d1*/
  v15 = a4; /*0x8f64d8*/
  v21[1] = _mm_xor_ps(v6, v5); /*0x8f64e9*/
  v11[1] = 0x7F7FFFFF; /*0x8f64f1*/
  v11[0] = &off_A9B4E8; /*0x8f64f9*/
  v13 = v7; /*0x8f64fd*/
  if ( !a5 ) /*0x8f6501*/
    return sub_908A40(a2, a1, (int)v21, (int)v11, 0); /*0x8f6567*/
  v16[0] = &off_A9B4E8; /*0x8f6503*/
  v17 = a3[1].m128_u64[0]; /*0x8f6509*/
  v8 = a3[1].m128_i32[2]; /*0x8f6514*/
  v9 = a3[1].m128_i32[3]; /*0x8f6517*/
  v20 = a5; /*0x8f651a*/
  v18 = v8; /*0x8f651e*/
  v19 = v9; /*0x8f6532*/
  v16[1] = 0x7F7FFFFF; /*0x8f653d*/
  return sub_908A40(a2, a1, (int)v21, (int)v11, (int)v16); /*0x8f654f*/
}
