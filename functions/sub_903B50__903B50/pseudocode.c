int __thiscall sub_903B50(int *this, int a2, int *a3, __m128 *a4, int a5, int a6)
{
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __int32 v8; // edi
  __int32 v9; // esi
  __int32 v10; // eax
  _DWORD v12[4]; // [esp+8h] [ebp-90h] BYREF
  unsigned __int64 v13; // [esp+18h] [ebp-80h]
  __int32 v14; // [esp+20h] [ebp-78h]
  __int32 v15; // [esp+24h] [ebp-74h]
  int v16; // [esp+28h] [ebp-70h]
  _DWORD v17[4]; // [esp+38h] [ebp-60h] BYREF
  unsigned __int64 v18; // [esp+48h] [ebp-50h]
  __int32 v19; // [esp+50h] [ebp-48h]
  __int32 v20; // [esp+54h] [ebp-44h]
  int v21; // [esp+58h] [ebp-40h]
  _OWORD v22[3]; // [esp+68h] [ebp-30h] BYREF

  v6 = (__m128)xmmword_A965C0; /*0x903b5f*/
  v7 = a4[1]; /*0x903b66*/
  qmemcpy(v22, a4, sizeof(v22)); /*0x903b7c*/
  v13 = a4[1].m128_u64[0]; /*0x903b82*/
  v8 = a4[1].m128_i32[2]; /*0x903b8d*/
  v15 = a4[1].m128_i32[3]; /*0x903b93*/
  v16 = a5; /*0x903b9a*/
  v22[1] = _mm_xor_ps(v7, v6); /*0x903bab*/
  v12[1] = 0x7F7FFFFF; /*0x903bb3*/
  v12[0] = &off_A9B4E8; /*0x903bbb*/
  v14 = v8; /*0x903bbf*/
  if ( !a6 ) /*0x903bc3*/
    return sub_903450(this, a3, a2, (int)v22, (int)v12, 0); /*0x903c0d*/
  v17[0] = &off_A9B4E8; /*0x903bc5*/
  v18 = a4[1].m128_u64[0]; /*0x903bcb*/
  v9 = a4[1].m128_i32[2]; /*0x903bd6*/
  v10 = a4[1].m128_i32[3]; /*0x903bd9*/
  v21 = a6; /*0x903bdc*/
  v17[1] = 0x7F7FFFFF; /*0x903be4*/
  v19 = v9; /*0x903bec*/
  v20 = v10; /*0x903bf0*/
  return sub_903450(this, a3, a2, (int)v22, (int)v12, (int)v17); /*0x903c14*/
}
