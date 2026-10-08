void __cdecl sub_8F9320(_DWORD *a1, int *a2, __m128 *a3, int a4, int a5)
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
  __m128 v20[3]; // [esp+68h] [ebp-30h] BYREF

  v5 = (__m128)xmmword_A965C0; /*0x8f932f*/
  v6 = a3[1]; /*0x8f9336*/
  qmemcpy(v20, a3, sizeof(v20)); /*0x8f934a*/
  v11 = a3[1].m128_u64[0]; /*0x8f9350*/
  v7 = a3[1].m128_i32[2]; /*0x8f935b*/
  v13 = a3[1].m128_i32[3]; /*0x8f9361*/
  v14 = a4; /*0x8f9368*/
  v20[1] = _mm_xor_ps(v6, v5); /*0x8f9379*/
  v10[1] = 3.4028235e38; /*0x8f9381*/
  LODWORD(v10[0]) = &off_A9B4E8; /*0x8f9389*/
  v12 = v7; /*0x8f938d*/
  if ( a5 ) /*0x8f9391*/
  {
    v15[0] = &off_A9B4E8; /*0x8f9393*/
    v16 = a3[1].m128_u64[0]; /*0x8f9399*/
    v8 = a3[1].m128_i32[2]; /*0x8f93a4*/
    v9 = a3[1].m128_i32[3]; /*0x8f93a7*/
    v19 = a5; /*0x8f93aa*/
    v17 = v8; /*0x8f93ae*/
    v18 = v9; /*0x8f93c2*/
    v15[1] = 0x7F7FFFFF; /*0x8f93cd*/
    sub_935CC0(a2, a1, v20, v10, (int)v15); /*0x8f93d5*/
  }
  else
  {
    sub_935CC0(a2, a1, v20, v10, 0); /*0x8f93f7*/
  }
}
