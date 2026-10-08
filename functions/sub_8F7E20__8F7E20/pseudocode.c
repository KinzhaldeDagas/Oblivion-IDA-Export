void __thiscall sub_8F7E20(int *this, int a2, _DWORD *a3, __m128 *a4, int a5, int a6)
{
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __int32 v8; // edi
  __int32 v9; // esi
  __int32 v10; // eax
  float v11[4]; // [esp+8h] [ebp-90h] BYREF
  unsigned __int64 v12; // [esp+18h] [ebp-80h]
  __int32 v13; // [esp+20h] [ebp-78h]
  __int32 v14; // [esp+24h] [ebp-74h]
  int v15; // [esp+28h] [ebp-70h]
  _DWORD v16[4]; // [esp+38h] [ebp-60h] BYREF
  unsigned __int64 v17; // [esp+48h] [ebp-50h]
  __int32 v18; // [esp+50h] [ebp-48h]
  __int32 v19; // [esp+54h] [ebp-44h]
  int v20; // [esp+58h] [ebp-40h]
  __m128 v21[3]; // [esp+68h] [ebp-30h] BYREF

  v6 = (__m128)xmmword_A965C0; /*0x8f7e2f*/
  v7 = a4[1]; /*0x8f7e36*/
  qmemcpy(v21, a4, sizeof(v21)); /*0x8f7e4c*/
  v12 = a4[1].m128_u64[0]; /*0x8f7e52*/
  v8 = a4[1].m128_i32[2]; /*0x8f7e5d*/
  v14 = a4[1].m128_i32[3]; /*0x8f7e63*/
  v15 = a5; /*0x8f7e6a*/
  v21[1] = _mm_xor_ps(v7, v6); /*0x8f7e7b*/
  v11[1] = 3.4028235e38; /*0x8f7e83*/
  LODWORD(v11[0]) = &off_A9B4E8; /*0x8f7e8b*/
  v13 = v8; /*0x8f7e8f*/
  if ( a6 ) /*0x8f7e93*/
  {
    v16[0] = &off_A9B4E8; /*0x8f7e95*/
    v17 = a4[1].m128_u64[0]; /*0x8f7e9b*/
    v9 = a4[1].m128_i32[2]; /*0x8f7ea6*/
    v10 = a4[1].m128_i32[3]; /*0x8f7ea9*/
    v20 = a6; /*0x8f7eac*/
    v16[1] = 0x7F7FFFFF; /*0x8f7eb4*/
    v18 = v9; /*0x8f7ebc*/
    v19 = v10; /*0x8f7ec0*/
    sub_936050(this, a3, a2, v21, v11, (int)v16); /*0x8f7ec5*/
  }
  else
  {
    sub_936050(this, a3, a2, v21, v11, 0); /*0x8f7edd*/
  }
}
