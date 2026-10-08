int __cdecl sub_93F250(int a1, __m128 **a2, int a3, int *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // esi
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // esi
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  int *v15; // esi
  float *v16; // edi
  int v17; // edx
  double v18; // st7
  __m128 *v19; // eax
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  __m128 v22; // xmm5
  __m128 v23; // xmm2
  int v24; // edx
  _DWORD *v25; // ecx
  unsigned __int64 v26; // rax
  int v27; // esi
  _DWORD *v28; // ecx
  int *v30; // [esp+18h] [ebp-264h]
  unsigned int v31; // [esp+18h] [ebp-264h]
  unsigned int v32; // [esp+18h] [ebp-264h]
  __m128 v33; // [esp+1Ch] [ebp-260h] BYREF
  __m128 v34; // [esp+2Ch] [ebp-250h]
  __m128 v35; // [esp+3Ch] [ebp-240h]
  __m128 v36; // [esp+4Ch] [ebp-230h]
  __m128 v37; // [esp+5Ch] [ebp-220h] BYREF
  __m128 v38; // [esp+6Ch] [ebp-210h]
  float v39; // [esp+7Ch] [ebp-200h]
  _QWORD v40[3]; // [esp+84h] [ebp-1F8h]
  __m128 v41; // [esp+9Ch] [ebp-1E0h] BYREF
  __m128 v42; // [esp+ACh] [ebp-1D0h] BYREF
  __m128 v43; // [esp+BCh] [ebp-1C0h]
  int v44; // [esp+CCh] [ebp-1B0h]
  __m128 **v45; // [esp+D0h] [ebp-1ACh]
  __m128 v46; // [esp+DCh] [ebp-1A0h] BYREF
  __m128 v47; // [esp+ECh] [ebp-190h] BYREF
  char v48; // [esp+FCh] [ebp-180h]
  int v49; // [esp+100h] [ebp-17Ch]
  _BYTE v50[192]; // [esp+10Ch] [ebp-170h] BYREF
  char v51[160]; // [esp+1CCh] [ebp-B0h] BYREF
  char v52[8]; // [esp+26Ch] [ebp-10h] BYREF
  char v53; // [esp+274h] [ebp-8h]
  char v54; // [esp+275h] [ebp-7h]
  char v55; // [esp+276h] [ebp-6h]
  char v56; // [esp+277h] [ebp-5h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x93f261*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x93f277*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x93f287*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x93f289*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x93f28b*/
    *v7 = "TtGsk"; /*0x93f291*/
    v8 = __rdtsc(); /*0x93f297*/
    v7[1] = v8; /*0x93f2a1*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x93f2a7*/
  }
  v9 = *a2; /*0x93f2bb*/
  v30 = *(int **)a1; /*0x93f2be*/
  sub_8B1FF0(&v33, *(__m128 **)(a1 + 8), a2[2]); /*0x93f2c7*/
  if ( (*(int (__thiscall **)(__m128 *))(v9->m128_i32[0] + 8))(v9) == 6 ) /*0x93f2d6*/
    sub_93EF30(v52, a1, v30, v9, &v33); /*0x93f2ea*/
  else
    sub_93EE40(v52, v30, (int *)v9, &v33); /*0x93f303*/
  v10 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x93f308*/
  v11 = v10[MEMORY[0xBA9DE4]]; /*0x93f315*/
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) ) /*0x93f324*/
  {
    v12 = v10[MEMORY[0xBA9DE4]]; /*0x93f326*/
    v13 = *(_DWORD **)(v11 + 0x1A4); /*0x93f328*/
    *v13 = "StGsk"; /*0x93f32e*/
    v14 = __rdtsc(); /*0x93f334*/
    v13[1] = v14; /*0x93f33e*/
    *(_DWORD *)(v12 + 0x1A4) = v13 + 3; /*0x93f344*/
  }
  v15 = *(int **)a1; /*0x93f351*/
  v16 = (float *)*a2; /*0x93f353*/
  v47.m128_i32[1] = v54; /*0x93f35b*/
  v47.m128_i32[3] = v56; /*0x93f370*/
  v47.m128_i32[0] = v53; /*0x93f380*/
  v47.m128_i32[2] = v55; /*0x93f38e*/
  v17 = *v15; /*0x93f395*/
  v48 = 0; /*0x93f39a*/
  v49 = 0; /*0x93f3a2*/
  (*(void (__thiscall **)(int *, char *, _DWORD, _BYTE *))(v17 + 0x28))(v15, v52, v53, v50); /*0x93f3ad*/
  (*(void (__thiscall **)(float *, char *, __int32, char *))(*(_DWORD *)v16 + 0x28))( /*0x93f3d3*/
    v16,
    &v52[2 * v47.m128_i32[0]],
    v47.m128_i32[1],
    v51);
  if ( !sub_93C690(&v47, v15, (int *)v16, &v33, &v46) ) /*0x93f3ec*/
  {
    sub_93B740(&v47, &v46, (int)&v37); /*0x93f40d*/
    hkBasis_TransformVector(&v41, *(__m128 **)(a1 + 8), &v37); /*0x93f425*/
    v18 = v39 - *((float *)v15 + 3) - v16[3]; /*0x93f434*/
    v39 = v18; /*0x93f437*/
    if ( v18 < *(float *)(a3 + 8) ) /*0x93f445*/
    {
      *(float *)&v31 = -*((float *)v15 + 3); /*0x93f45f*/
      v19 = a2[2]; /*0x93f469*/
      v20 = _mm_shuffle_ps((__m128)v31, (__m128)v31, 0); /*0x93f473*/
      *(float *)&v32 = -v18; /*0x93f477*/
      v38 = _mm_add_ps(v38, _mm_mul_ps(v20, v37)); /*0x93f48f*/
      v21 = _mm_sub_ps(_mm_add_ps(v38, _mm_mul_ps(_mm_shuffle_ps((__m128)v32, (__m128)v32, 0), v37)), v36); /*0x93f4a6*/
      v22 = _mm_shuffle_ps(v33, v34, 0x44); /*0x93f4b9*/
      v23 = _mm_shuffle_ps(v35, v35, 0x44); /*0x93f4bf*/
      *(__m128 *)&v40[1] = _mm_add_ps( /*0x93f4fd*/
                             _mm_add_ps(
                               _mm_mul_ps(_mm_shuffle_ps(v22, v23, 0x88), _mm_shuffle_ps(v21, v21, 0)),
                               _mm_mul_ps(_mm_shuffle_ps(v22, v23, 0xDD), _mm_shuffle_ps(v21, v21, 0x55))),
                             _mm_mul_ps(
                               _mm_shuffle_ps(_mm_shuffle_ps(v33, v34, 0xEE), _mm_shuffle_ps(v35, v35, 0xEE), 0x88),
                               _mm_shuffle_ps(v21, v21, 0xAA)));
      v44 = a1; /*0x93f50c*/
      v24 = *a4; /*0x93f516*/
      v45 = a2; /*0x93f518*/
      v42 = _mm_add_ps( /*0x93f54e*/
              _mm_add_ps(
                _mm_mul_ps(*v19, _mm_shuffle_ps(*(__m128 *)&v40[1], *(__m128 *)&v40[1], 0)),
                _mm_mul_ps(v19[1], _mm_shuffle_ps(*(__m128 *)&v40[1], *(__m128 *)&v40[1], 0x55))),
              _mm_add_ps(_mm_mul_ps(v19[2], _mm_shuffle_ps(*(__m128 *)&v40[1], *(__m128 *)&v40[1], 0xAA)), v19[3]));
      v43 = v41; /*0x93f565*/
      v43.m128_f32[3] = v18; /*0x93f56d*/
      (*(void (__thiscall **)(int *, __m128 *))(v24 + 4))(a4, &v42); /*0x93f575*/
    }
  }
  v25 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x93f57c*/
  LODWORD(v26) = v25[MEMORY[0xBA9DE4]]; /*0x93f589*/
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x93f598*/
  {
    v27 = v25[MEMORY[0xBA9DE4]]; /*0x93f59a*/
    v28 = *(_DWORD **)(v26 + 0x1A4); /*0x93f59c*/
    *v28 = "Et"; /*0x93f5a2*/
    v26 = __rdtsc(); /*0x93f5a8*/
    v28[1] = v26; /*0x93f5b2*/
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3; /*0x93f5b8*/
  }
  return v26; /*0x93f5be*/
}
