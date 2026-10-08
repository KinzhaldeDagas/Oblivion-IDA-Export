_DWORD *__stdcall sub_912940(int **a1, int *a2, int a3, int a4, int a5, __m128 **a6)
{
  int *v6; // esi
  int v7; // edx
  int v8; // ebx
  int v9; // esi
  int v10; // ecx
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  float v13; // xmm2_4
  float v14; // xmm3_4
  __m128 v15; // xmm0
  __m128 *v16; // ebx
  long double v17; // st7
  long double v18; // st6
  double v19; // st6
  _DWORD *result; // eax
  int v21; // ecx
  double v22; // st7
  int v23; // eax
  int v24; // edx
  float v25; // [esp+0h] [ebp-68h]
  __m128 *v26; // [esp+0h] [ebp-68h]
  float v27; // [esp+4h] [ebp-64h]
  float v28; // [esp+18h] [ebp-50h]
  _DWORD *v29; // [esp+1Ch] [ebp-4Ch]
  float v30; // [esp+24h] [ebp-44h]
  float v31; // [esp+28h] [ebp-40h]
  int v32; // [esp+2Ch] [ebp-3Ch]
  float v33[4]; // [esp+30h] [ebp-38h] BYREF
  int v34; // [esp+40h] [ebp-28h]
  int v35; // [esp+44h] [ebp-24h]
  _BYTE v36[28]; // [esp+4Ch] [ebp-1Ch] BYREF

  v6 = *a1 + 1; /*0x912953*/
  *a1 = v6; /*0x912956*/
  v7 = *(_DWORD *)(a5 + 0x28); /*0x912958*/
  v8 = *v6; /*0x91295d*/
  v9 = *a2; /*0x912962*/
  *a2 += 0x10; /*0x912967*/
  v32 = v7; /*0x91296e*/
  v31 = *(float *)(v9 + 4); /*0x91297a*/
  v28 = *(float *)(v9 + 8); /*0x91297e*/
  v10 = *(_DWORD *)(4 * v8 + 0xB2FF9C); /*0x912994*/
  v29 = *(_DWORD **)(*(_DWORD *)(a3 + 0x34) + 4 * (unsigned __int64)*(float *)v9); /*0x9129a5*/
  v11 = *(__m128 *)(0x10 * (v10 + 5) + a4); /*0x9129af*/
  v12 = _mm_mul_ps(*(__m128 *)(0x10 * (*(_DWORD *)(4 * v8 + 0xB2FFA0) + 8) + a4), v11); /*0x9129bf*/
  v13 = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]; /*0x9129c9*/
  v14 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]; /*0x9129d3*/
  v15 = _mm_mul_ps(*(__m128 *)(0x10 * (v10 + 8) + a4), v11); /*0x9129de*/
  v27 = -(float)(_mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0] /*0x912a0c*/
               + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]));
  v25 = -(float)(v14 + v13); /*0x912a24*/
  v16 = (__m128 *)(a4 + 0x10 * (v8 + 5)); /*0x912a27*/
  v17 = sub_8ECBB0(v25, v27) + flt_A9CD64; /*0x912a2e*/
  v30 = v17; /*0x912a37*/
  v18 = v17 - v31; /*0x912a3f*/
  if ( v18 >= flt_A9CD68 ) /*0x912a4c*/
  {
    if ( v18 <= flt_A9CD64 ) /*0x912a67*/
      goto LABEL_6; /*0x912a67*/
    v19 = v28 - fConstant_1; /*0x912a6d*/
  }
  else
  {
    v19 = v28 + fConstant_1; /*0x912a54*/
  }
  v28 = v19; /*0x912a73*/
LABEL_6:
  *(float *)(v9 + 4) = v17; /*0x912a77*/
  result = v29; /*0x912a7e*/
  *(float *)(v9 + 8) = v28; /*0x912a84*/
  *(_DWORD *)(v9 + 0xC) = 0; /*0x912a87*/
  if ( v29 ) /*0x912a8e*/
  {
    v26 = *a6; /*0x912aa1*/
    v34 = 0; /*0x912aa4*/
    v35 = 0; /*0x912aac*/
    sub_8F1070(v16, a5, v26, v33); /*0x912ab4*/
    v21 = *(_DWORD *)(a4 + 0xB8); /*0x912abd*/
    v22 = v28 * flt_A46B14; /*0x912ac3*/
    LODWORD(v33[3]) = a5; /*0x912acd*/
    v34 = *(_DWORD *)(v32 + 8 * v21); /*0x912ad8*/
    v23 = *(_DWORD *)(v32 + 8 * v21 + 4); /*0x912adc*/
    v33[1] = v22 + v30; /*0x912ae4*/
    v24 = *v29; /*0x912ae8*/
    v35 = v23; /*0x912aea*/
    v33[2] = 0.0; /*0x912afb*/
    (*(void (__thiscall **)(_DWORD *, float *, _BYTE *))(v24 + 8))(v29, v33, v36); /*0x912b03*/
    result = (_DWORD *)sub_8F0FB0((int)v36, (float *)a5, (int *)a6); /*0x912b10*/
  }
  ++*(_DWORD *)(a4 + 0xB8); /*0x912b18*/
  return result; /*0x912b1e*/
}
