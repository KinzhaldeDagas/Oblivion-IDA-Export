_BYTE *__thiscall sub_928640(int this, int a2, int *a3)
{
  long double v4; // st7
  unsigned __int64 v5; // rcx
  long double v6; // st6
  int v7; // edx
  int v8; // eax
  double v9; // st7
  __m128 v10; // xmm0
  float v11; // xmm1_4
  __m128 v12; // xmm3
  int v13; // eax
  __m128 v14; // xmm0
  int v15; // edx
  float v16; // xmm1_4
  __m128 v17; // xmm0
  double v18; // st7
  bool v19; // c0
  bool v20; // c3
  __m128 v21; // xmm0
  _BYTE *result; // eax
  int *v23; // ecx
  int v24; // ebx
  int v25; // ebx
  float v26; // [esp+28h] [ebp-174h]
  float v27; // [esp+28h] [ebp-174h]
  unsigned int v28; // [esp+44h] [ebp-158h]
  char v29; // [esp+4Bh] [ebp-151h] BYREF
  __m128 v30; // [esp+4Ch] [ebp-150h] BYREF
  __m128 v31; // [esp+5Ch] [ebp-140h] BYREF
  __m128 v32; // [esp+6Ch] [ebp-130h] BYREF
  float v33; // [esp+84h] [ebp-118h]
  float v34; // [esp+88h] [ebp-114h]
  __m128 v35; // [esp+8Ch] [ebp-110h] BYREF
  __m128 v36; // [esp+9Ch] [ebp-100h]
  __m128 v37; // [esp+ACh] [ebp-F0h]
  float v38; // [esp+BCh] [ebp-E0h]
  float v39; // [esp+C0h] [ebp-DCh]
  __m128 v40; // [esp+CCh] [ebp-D0h] BYREF
  __m128 v41; // [esp+DCh] [ebp-C0h]
  __m128 v42; // [esp+ECh] [ebp-B0h]
  __m128 v43; // [esp+FCh] [ebp-A0h] BYREF
  __m128 v44; // [esp+10Ch] [ebp-90h]
  __m128 v45; // [esp+11Ch] [ebp-80h] BYREF
  __m128 v46[2]; // [esp+12Ch] [ebp-70h] BYREF
  __m128 v47; // [esp+14Ch] [ebp-50h]
  __m128 v48[4]; // [esp+15Ch] [ebp-40h] BYREF

  sub_8F0F70(a2, a3, *(_DWORD *)(a2 + 0x28), 8); /*0x92865f*/
  sub_8B1F70(v48, *(__m128 **)(a2 + 0x20), (__m128 *)(this + 0x60)); /*0x928676*/
  sub_8B1F70(&v40, *(__m128 **)(a2 + 0x1C), (__m128 *)(this + 0x20)); /*0x92868a*/
  HIDWORD(v5) = *(_DWORD *)(a2 + 0x28); /*0x92868f*/
  sub_88FD10(&v30, v48, &v43); /*0x9286a6*/
  *(float *)(HIDWORD(v5) + 0x38) = ((double (__thiscall *)(_DWORD, _DWORD, __m128 *, __m128 *))*(_DWORD *)(**(_DWORD **)(this + 0xC) + 0xC))( /*0x9286bd*/
                                     *(_DWORD *)(this + 0xC),
                                     *(_DWORD *)(HIDWORD(v5) + 0x38),
                                     &v30,
                                     &v30);
  hkTransform_TransformPosition(&v45, v48, &v30); /*0x9286d4*/
  (*(void (__thiscall **)(_DWORD, _DWORD, __m128 *))(**(_DWORD **)(this + 0xC) + 0x10))( /*0x9286e7*/
    *(_DWORD *)(this + 0xC),
    *(_DWORD *)(HIDWORD(v5) + 0x38),
    &v32);
  hkBasis_TransformVector(&v31, v48, &v32); /*0x9286fb*/
  v4 = fabs(v31.m128_f32[0]); /*0x928704*/
  LODWORD(v5) = 0; /*0x928706*/
  v6 = fabs(v31.m128_f32[1]); /*0x92870c*/
  v7 = 1; /*0x92870e*/
  v34 = v6; /*0x928713*/
  v33 = fabs(v31.m128_f32[2]); /*0x928725*/
  if ( v6 < v4 ) /*0x928730*/
  {
    v7 = 0; /*0x928734*/
    v4 = v34; /*0x928736*/
    LODWORD(v5) = 1; /*0x92873a*/
  }
  if ( v33 >= v4 ) /*0x92874c*/
  {
    v8 = 2; /*0x928757*/
  }
  else
  {
    v8 = v5; /*0x92874e*/
    LODWORD(v5) = 2; /*0x928750*/
  }
  v9 = v31.m128_f32[v7]; /*0x92875b*/
  v30.m128_i32[v5] = 0; /*0x92875f*/
  LODWORD(v5) = v31.m128_i32[v8]; /*0x928767*/
  v30.m128_i32[3] = 0; /*0x92876d*/
  v30.m128_i32[v7] = v5; /*0x928775*/
  v30.m128_f32[v8] = -v9; /*0x928779*/
  v10 = _mm_mul_ps(v30, v30); /*0x928785*/
  v11 = _mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]; /*0x92878f*/
  v12 = _mm_shuffle_ps(v10, v10, 0xAA); /*0x928796*/
  LODWORD(v5) = *(_DWORD *)(this + 0xC); /*0x92879a*/
  v13 = *(_DWORD *)(HIDWORD(v5) + 0x38); /*0x92879d*/
  v14 = v12; /*0x9287a0*/
  v14.m128_f32[0] = v12.m128_f32[0] + v11; /*0x9287a3*/
  v32 = v14; /*0x9287a7*/
  v15 = *(_DWORD *)v5; /*0x9287b0*/
  v16 = 1.0 / fsqrt(v12.m128_f32[0] + v11); /*0x9287b8*/
  v12.m128_f32[0] = 3.0 - (float)((float)(v14.m128_f32[0] * v16) * v16); /*0x9287d3*/
  v17 = (__m128)0x3F000000u; /*0x9287df*/
  v17.m128_f32[0] = (float)(0.5 * v16) * v12.m128_f32[0]; /*0x9287e9*/
  v30 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v30); /*0x92880c*/
  v32 = _mm_sub_ps( /*0x92882d*/
          _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xC9), _mm_shuffle_ps(v30, v30, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xD2), _mm_shuffle_ps(v30, v30, 0xC9)));
  *(float *)&v28 = -((double (__thiscall *)(_DWORD, int))*(_DWORD *)(v15 + 0x1C))(v5, v13); /*0x92883c*/
  v18 = *(float *)(this + 0x10); /*0x928840*/
  v19 = v18 < *(float *)&SrcStr; /*0x928849*/
  v20 = v18 == *(float *)&SrcStr; /*0x928849*/
  v21 = _mm_add_ps(v43, _mm_mul_ps(_mm_shuffle_ps((__m128)v28, (__m128)v28, 0), v31)); /*0x928863*/
  v44 = v21; /*0x928866*/
  if ( !v19 && !v20 ) /*0x92886e*/
  {
    LODWORD(v5) = *(_DWORD *)(this + 0x10); /*0x928876*/
    v36 = v31; /*0x928880*/
    v35 = v21; /*0x928885*/
    v37.m128_u64[0] = v5; /*0x92888a*/
  }
  v46[0] = v43; /*0x9288ac*/
  v46[1] = v45; /*0x9288c3*/
  v47 = v30; /*0x9288d2*/
  sub_8F1790(v46, a2, (__m128 **)a3); /*0x9288da*/
  v47 = v32; /*0x9288f1*/
  sub_8F1790(v46, a2, (__m128 **)a3); /*0x9288f9*/
  if ( *(char *)(this + 0x14) >= 1 ) /*0x928906*/
  {
    v35 = v31; /*0x928915*/
    v37 = v42; /*0x928926*/
    v36 = v41; /*0x928938*/
    sub_8F1310(&v35, a2, (int)a3); /*0x92893d*/
    v37 = v41; /*0x928956*/
    v36 = _mm_xor_ps(v42, (__m128)xmmword_A965C0); /*0x92896e*/
    sub_8F1310(&v35, a2, (int)a3); /*0x928976*/
    if ( *(_BYTE *)(this + 0x14) == 3 ) /*0x928983*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD, __m128 *))(**(_DWORD **)(this + 0xC) + 0x20))( /*0x928993*/
        *(_DWORD *)(this + 0xC),
        *(_DWORD *)(HIDWORD(v5) + 0x38),
        &v32);
      hkBasis_TransformVector(&v30, v48, &v32); /*0x9289a7*/
      v35 = v42; /*0x9289bd*/
      v37 = _mm_xor_ps(v30, (__m128)xmmword_A965C0); /*0x9289da*/
      v36 = v40; /*0x9289e2*/
      sub_8F1310(&v35, a2, (int)a3); /*0x9289e7*/
    }
  }
  result = (_BYTE *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 0xC) + 0x24))( /*0x9289f9*/
                      *(_DWORD *)(this + 0xC),
                      &v29);
  if ( !*result ) /*0x9289fc*/
  {
    v23 = *(int **)(this + 0xC); /*0x928a09*/
    v35 = v43; /*0x928a0c*/
    v36 = v44; /*0x928a19*/
    v24 = *v23; /*0x928a22*/
    v26 = ((double (__thiscall *)(int *))*(_DWORD *)(*v23 + 0x14))(v23); /*0x928a2b*/
    v38 = ((double (__thiscall *)(_DWORD, _DWORD))*(_DWORD *)(v24 + 0x1C))(*(_DWORD *)(this + 0xC), LODWORD(v26)); /*0x928a31*/
    v25 = **(_DWORD **)(this + 0xC); /*0x928a3f*/
    v27 = ((double (*)(void))*(_DWORD *)(v25 + 0x18))(); /*0x928a48*/
    v39 = ((double (__thiscall *)(_DWORD, _DWORD))*(_DWORD *)(v25 + 0x1C))(*(_DWORD *)(this + 0xC), LODWORD(v27)); /*0x928a4e*/
    v37 = v31; /*0x928a64*/
    return (_BYTE *)sub_8F1970(&v35, a2, a3); /*0x928a6c*/
  }
  return result; /*0x928a74*/
}
