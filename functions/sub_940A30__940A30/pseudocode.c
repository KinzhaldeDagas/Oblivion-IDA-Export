void __userpurge sub_940A30(int a1@<ecx>, int a2@<ebx>, int a3, int a4, int a5)
{
  char v6; // al
  int v7; // eax
  double v8; // st7
  int v9; // eax
  unsigned __int8 *v10; // ecx
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  float v15; // xmm3_4
  __m128 v16; // xmm1
  float v17; // xmm3_4
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  __m128 v20[2]; // [esp+10h] [ebp-60h] BYREF
  __m128 v21[2]; // [esp+30h] [ebp-40h] BYREF
  float v22; // [esp+50h] [ebp-20h]
  int v23; // [esp+54h] [ebp-1Ch]
  unsigned int v24; // [esp+58h] [ebp-18h]
  int v25; // [esp+5Ch] [ebp-14h]
  int v26; // [esp+60h] [ebp-10h]

  if ( unk_BA9429 || (v6 = sub_9246E0(a2, 4), (unk_BA9429 = v6) != 0) ) /*0x940a57*/
  {
    *(_DWORD *)(a1 + 0x2C) = a3; /*0x940a60*/
    *(_DWORD *)(a1 + 0x10) = *(_DWORD *)(**(_DWORD **)(a3 + 0x38) + 0x10); /*0x940a71*/
    *(_DWORD *)(a1 + 0x24) = a4; /*0x940a74*/
    *(_DWORD *)(a1 + 0x28) = a5; /*0x940a77*/
    v7 = (*(int (__thiscall **)(_DWORD))(***(_DWORD ***)(a3 + 0x34) + 8))(**(_DWORD **)(a3 + 0x34)); /*0x940a81*/
    v8 = fConstant_1; /*0x940a84*/
    *(_DWORD *)(a1 + 0x18) = v7; /*0x940a8a*/
    *(_DWORD *)(a1 + 0x1C) = 0x3F800000; /*0x940a92*/
    *(_DWORD *)(a1 + 0x20) = 0x3F800000; /*0x940a95*/
    v9 = *(_DWORD *)(a1 + 0x10); /*0x940a98*/
    v10 = *(unsigned __int8 **)(v9 + 0x20); /*0x940a9b*/
    v21[0] = 0; /*0x940aa1*/
    *(float *)(a1 + 0x14) = v8 / *(float *)(v9 + 0x1C); /*0x940aad*/
    v11 = *(__m128 *)(a3 + 0x20); /*0x940ab9*/
    *(float *)&v24 = *(float *)(v9 + 0x1C) * flt_AA1EC0; /*0x940abd*/
    v12 = (__m128)v24; /*0x940ac5*/
    v13 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v11); /*0x940ad2*/
    v14 = *(__m128 *)(a3 + 0x20); /*0x940ad5*/
    v21[1] = v13; /*0x940ad9*/
    v13.m128_f32[0] = _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]; /*0x940ae5*/
    v15 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]; /*0x940aec*/
    v16 = *(__m128 *)a3; /*0x940af0*/
    v17 = v15 + v13.m128_f32[0]; /*0x940af3*/
    v18 = *(__m128 *)(a3 + 0x10); /*0x940af7*/
    v22 = v17 * *(float *)&dword_A46C30; /*0x940b09*/
    v19 = *(__m128 *)(v9 + 0x10); /*0x940b0d*/
    v20[0] = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), _mm_sub_ps(v16, v19)); /*0x940b38*/
    v20[1] = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), _mm_sub_ps(v18, v19)); /*0x940b3d*/
    v25 = 0; /*0x940b42*/
    v23 = 0; /*0x940b4a*/
    v26 = 0; /*0x940b52*/
    sub_93FB80((float *)a1, v21, v10, v20); /*0x940b5a*/
  }
}
