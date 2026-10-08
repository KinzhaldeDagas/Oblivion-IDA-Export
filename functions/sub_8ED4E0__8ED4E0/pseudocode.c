_BYTE *__fastcall sub_8ED4E0(int a1, int a2, _BYTE *a3, __m128 *a4, __m128 *a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // ebx
  unsigned __int64 v10; // rax
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  double v13; // st7
  __m128 v14; // xmm0
  double v15; // st7
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  long double v19; // st6
  int v20; // eax
  double v21; // st7
  double v22; // st7
  __m128 v23; // xmm0
  __m128 v24; // xmm0
  double v25; // st7
  int v26; // esi
  _DWORD *v27; // ecx
  unsigned __int64 v28; // rax
  int v30; // eax
  int v31; // esi
  _DWORD *v32; // ecx
  unsigned __int64 v33; // rax
  float v34; // [esp+10h] [ebp-10h]
  int v35; // [esp+14h] [ebp-Ch]
  float v36; // [esp+14h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-Ch]
  float v38; // [esp+18h] [ebp-8h]
  float v39; // [esp+18h] [ebp-8h]
  unsigned int v40; // [esp+1Ch] [ebp-4h]
  unsigned int v41; // [esp+1Ch] [ebp-4h]
  unsigned int v42; // [esp+1Ch] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ed4eb*/
  v6 = MEMORY[0xBA9DE4]; /*0x8ed4f3*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ed4f9*/
  v35 = a1; /*0x8ed508*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x8ed50c*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ed50e*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x8ed510*/
    *v9 = "TtrcSphere"; /*0x8ed516*/
    v10 = __rdtsc(); /*0x8ed51c*/
    v9[1] = v10; /*0x8ed526*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x8ed52c*/
    a1 = v35; /*0x8ed532*/
  }
  v11 = _mm_sub_ps(a4[1], *a4); /*0x8ed54a*/
  v38 = *(float *)(a1 + 0xC) * *(float *)(a1 + 0xC); /*0x8ed54d*/
  v12 = _mm_mul_ps(v11, *a4); /*0x8ed554*/
  v36 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0] /*0x8ed573*/
      + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
  v13 = v36; /*0x8ed577*/
  if ( v36 >= (double)*(float *)&SrcStr ) /*0x8ed58a*/
    goto LABEL_14; /*0x8ed58a*/
  v14 = _mm_mul_ps(v11, v11); /*0x8ed59b*/
  v34 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0] /*0x8ed5b8*/
      + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]);
  if ( v34 * v38 * flt_A2FE7C >= v36 * v36 ) /*0x8ed5d1*/
  {
    v37 = 0.0; /*0x8ed625*/
    v17 = *a4; /*0x8ed62d*/
  }
  else
  {
    if ( v34 < (double)v38 ) /*0x8ed5e2*/
      goto LABEL_14; /*0x8ed5e2*/
    v15 = -v36; /*0x8ed5ec*/
    v37 = v15; /*0x8ed5ee*/
    *(float *)&v40 = v15 / v34; /*0x8ed5f6*/
    v13 = *(float *)&SrcStr; /*0x8ed5fa*/
    v16 = _mm_shuffle_ps((__m128)v40, (__m128)v40, 0); /*0x8ed606*/
    v17 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v16), *a4), _mm_mul_ps(v16, a4[1])); /*0x8ed620*/
  }
  v18 = _mm_mul_ps(v17, v17); /*0x8ed630*/
  v19 = v13 * v13 /*0x8ed661*/
      - ((float)(_mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]))
       - v38)
      * v34;
  if ( v19 > *(float *)&SrcStr ) /*0x8ed66e*/
  {
    v39 = -v13 - sqrt(v19) + v37; /*0x8ed685*/
    if ( v34 * a5[1].m128_f32[1] > v39 && v39 >= (double)*(float *)&SrcStr ) /*0x8ed6ae*/
    {
      v20 = ThreadLocalStoragePointer[v6]; /*0x8ed6b8*/
      v21 = v39 / v34; /*0x8ed6bb*/
      a5[1].m128_f32[1] = v21; /*0x8ed6bf*/
      *(float *)&v41 = v21; /*0x8ed6c2*/
      v22 = fConstant_1; /*0x8ed6ca*/
      v23 = _mm_shuffle_ps((__m128)v41, (__m128)v41, 0); /*0x8ed6dd*/
      v24 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v23), *a4), _mm_mul_ps(v23, a4[1])); /*0x8ed6f3*/
      *a5 = v24; /*0x8ed6f6*/
      v25 = v22 / *(float *)(a1 + 0xC); /*0x8ed6f9*/
      a5[1].m128_i32[0] = 0xFFFFFFFF; /*0x8ed6fc*/
      *(float *)&v42 = v25; /*0x8ed703*/
      *a5 = _mm_mul_ps(_mm_shuffle_ps((__m128)v42, (__m128)v42, 0), v24); /*0x8ed717*/
      if ( *(_DWORD *)(v20 + 0x1A4) < *(_DWORD *)(v20 + 0x1A8) ) /*0x8ed726*/
      {
        v26 = v20; /*0x8ed728*/
        v27 = *(_DWORD **)(v20 + 0x1A4); /*0x8ed72a*/
        *v27 = "Et"; /*0x8ed730*/
        v28 = __rdtsc(); /*0x8ed736*/
        v27[1] = v28; /*0x8ed740*/
        *(_DWORD *)(v26 + 0x1A4) = v27 + 3; /*0x8ed746*/
      }
      *a3 = 1; /*0x8ed74f*/
      return a3; /*0x8ed758*/
    }
  }
LABEL_14:
  v30 = ThreadLocalStoragePointer[v6]; /*0x8ed75f*/
  if ( *(_DWORD *)(v30 + 0x1A4) < *(_DWORD *)(v30 + 0x1A8) ) /*0x8ed76e*/
  {
    v31 = ThreadLocalStoragePointer[v6]; /*0x8ed770*/
    v32 = *(_DWORD **)(v30 + 0x1A4); /*0x8ed772*/
    *v32 = "Et"; /*0x8ed778*/
    v33 = __rdtsc(); /*0x8ed77e*/
    v32[1] = v33; /*0x8ed788*/
    *(_DWORD *)(v31 + 0x1A4) = v32 + 3; /*0x8ed78e*/
  }
  *a3 = 0; /*0x8ed799*/
  return a3; /*0x8ed752*/
}
