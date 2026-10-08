int __stdcall sub_8F7020(_DWORD *a1, __m128 **a2, __m128 *a3, int a4, int a5)
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

  v5 = (__m128)xmmword_A965C0; /*0x8f702f*/
  v6 = a3[1]; /*0x8f7036*/
  qmemcpy(v21, a3, sizeof(v21)); /*0x8f704a*/
  v12 = a3[1].m128_u64[0]; /*0x8f7050*/
  v7 = a3[1].m128_i32[2]; /*0x8f705b*/
  v14 = a3[1].m128_i32[3]; /*0x8f7061*/
  v15 = a4; /*0x8f7068*/
  v21[1] = _mm_xor_ps(v6, v5); /*0x8f7079*/
  v11[1] = 0x7F7FFFFF; /*0x8f7081*/
  v11[0] = &off_A9B4E8; /*0x8f7089*/
  v13 = v7; /*0x8f708d*/
  if ( !a5 ) /*0x8f7091*/
    return sub_908A40(a2, a1, (int)v21, (int)v11, 0); /*0x8f70f9*/
  v16[0] = &off_A9B4E8; /*0x8f7093*/
  v17 = a3[1].m128_u64[0]; /*0x8f7099*/
  v8 = a3[1].m128_i32[2]; /*0x8f70a4*/
  v9 = a3[1].m128_i32[3]; /*0x8f70a7*/
  v20 = a5; /*0x8f70aa*/
  v18 = v8; /*0x8f70ae*/
  v19 = v9; /*0x8f70c2*/
  v16[1] = 0x7F7FFFFF; /*0x8f70cd*/
  return sub_908A40(a2, a1, (int)v21, (int)v11, (int)v16); /*0x8f70df*/
}
