int __thiscall sub_909490(__m128 *this, int *a2, __m128 **a3, __m128 *a4, int a5, int a6)
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
  __m128 v22[3]; // [esp+68h] [ebp-30h] BYREF

  v6 = (__m128)xmmword_A965C0; /*0x90949f*/
  v7 = a4[1]; /*0x9094a6*/
  qmemcpy(v22, a4, sizeof(v22)); /*0x9094bc*/
  v13 = a4[1].m128_u64[0]; /*0x9094c2*/
  v8 = a4[1].m128_i32[2]; /*0x9094cd*/
  v15 = a4[1].m128_i32[3]; /*0x9094d3*/
  v16 = a5; /*0x9094da*/
  v22[1] = _mm_xor_ps(v7, v6); /*0x9094eb*/
  v12[1] = 0x7F7FFFFF; /*0x9094f3*/
  v12[0] = &off_A9B4E8; /*0x9094fb*/
  v14 = v8; /*0x9094ff*/
  if ( !a6 ) /*0x909503*/
    return sub_9088D0(this, a3, a2, v22, (int)v12, 0); /*0x90954d*/
  v17[0] = &off_A9B4E8; /*0x909505*/
  v18 = a4[1].m128_u64[0]; /*0x90950b*/
  v9 = a4[1].m128_i32[2]; /*0x909516*/
  v10 = a4[1].m128_i32[3]; /*0x909519*/
  v21 = a6; /*0x90951c*/
  v17[1] = 0x7F7FFFFF; /*0x909524*/
  v19 = v9; /*0x90952c*/
  v20 = v10; /*0x909530*/
  return sub_9088D0(this, a3, a2, v22, (int)v12, (int)v17); /*0x909554*/
}
