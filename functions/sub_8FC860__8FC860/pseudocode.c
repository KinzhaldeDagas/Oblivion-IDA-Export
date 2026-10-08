int __cdecl sub_8FC860(_DWORD *a1, __m128 **a2, int a3, int *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // esi
  int v10; // edi
  __m128 *v11; // ebx
  __m128 *v12; // eax
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 *v17; // ecx
  __m128 *v18; // esi
  int v19; // edx
  double v20; // st7
  __m128 v21; // xmm2
  __m128 v22; // xmm0
  long double v23; // st6
  long double v24; // st5
  int v25; // ecx
  long double v26; // st4
  int v27; // edx
  int v28; // edi
  double v29; // st5
  __int32 v30; // eax
  __m128 v31; // xmm0
  float v32; // xmm1_4
  __m128 v33; // xmm3
  __m128 v34; // xmm0
  int v35; // edx
  __m128 v36; // xmm0
  __m128 v37; // xmm2
  __m128 v38; // xmm0
  _DWORD *v39; // ecx
  unsigned __int64 v40; // rax
  int v41; // esi
  _DWORD *v42; // ecx
  float v44; // [esp+18h] [ebp-78h]
  float v45; // [esp+18h] [ebp-78h]
  float v46; // [esp+1Ch] [ebp-74h]
  unsigned int v47; // [esp+1Ch] [ebp-74h]
  __m128 v48; // [esp+20h] [ebp-70h]
  __m128 v49; // [esp+30h] [ebp-60h] BYREF
  __m128 v50; // [esp+40h] [ebp-50h] BYREF
  __m128 v51; // [esp+50h] [ebp-40h] BYREF
  __m128 v52; // [esp+60h] [ebp-30h] BYREF
  __m128 v53; // [esp+70h] [ebp-20h]
  _DWORD *v54; // [esp+80h] [ebp-10h]
  __m128 **v55; // [esp+84h] [ebp-Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fc86c*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fc879*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8fc88b*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fc88d*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8fc88f*/
    *v7 = "TtSphereCapsule"; /*0x8fc895*/
    v8 = __rdtsc(); /*0x8fc89b*/
    v7[1] = v8; /*0x8fc8a5*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8fc8ab*/
  }
  v9 = (__m128 *)a1[2]; /*0x8fc8b7*/
  v10 = *a1; /*0x8fc8ba*/
  v11 = *a2; /*0x8fc8bc*/
  v54 = a1; /*0x8fc8be*/
  v12 = a2[2]; /*0x8fc8c5*/
  v55 = a2; /*0x8fc8c8*/
  v13 = *v12; /*0x8fc8cf*/
  v14 = v12[1]; /*0x8fc8d2*/
  v15 = v12[2]; /*0x8fc8d6*/
  v16 = v12[3]; /*0x8fc8da*/
  v17 = v11 + 1; /*0x8fc8de*/
  v18 = v9 + 3; /*0x8fc8e5*/
  v19 = 2; /*0x8fc8ea*/
  do /*0x8fc92b*/
  {
    *(__m128 *)((char *)v17 + (char *)&v50 - (char *)&v11[1]) = _mm_add_ps( /*0x8fc923*/
                                                                  _mm_add_ps(
                                                                    _mm_mul_ps(v13, _mm_shuffle_ps(*v17, *v17, 0)),
                                                                    _mm_mul_ps(v14, _mm_shuffle_ps(*v17, *v17, 0x55))),
                                                                  _mm_add_ps(
                                                                    _mm_mul_ps(v15, _mm_shuffle_ps(*v17, *v17, 0xAA)),
                                                                    v16));
    ++v17; /*0x8fc927*/
    --v19; /*0x8fc92a*/
  }
  while ( v19 ); /*0x8fc92b*/
  sub_8D1CD0(v18, &v50, &v51, &v49); /*0x8fc93d*/
  v20 = *(float *)(v10 + 0xC) + v11->m128_f32[3]; /*0x8fc945*/
  v21 = _mm_sub_ps(*v18, v49); /*0x8fc955*/
  v22 = _mm_mul_ps(v21, v21); /*0x8fc95e*/
  v44 = _mm_shuffle_ps(v22, v22, 0xAA).m128_f32[0] /*0x8fc97f*/
      + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0] + v22.m128_f32[0]);
  if ( v44 < (v20 + *(float *)(a3 + 8)) * (v20 + *(float *)(a3 + 8)) ) /*0x8fc993*/
  {
    if ( v44 <= (double)*(float *)&SrcStr ) /*0x8fc9a8*/
    {
      v23 = *(float *)&SrcStr; /*0x8fc9ba*/
      v48 = _mm_sub_ps(v51, v50); /*0x8fc9c8*/
      v24 = fabs(v48.m128_f32[0]); /*0x8fc9d1*/
      v25 = 0; /*0x8fc9d3*/
      v26 = fabs(v48.m128_f32[1]); /*0x8fc9d9*/
      v27 = 1; /*0x8fc9db*/
      v28 = 2; /*0x8fc9e8*/
      v46 = fabs(v48.m128_f32[2]); /*0x8fc9ef*/
      if ( v26 < v24 ) /*0x8fc9fa*/
      {
        v27 = 0; /*0x8fc9fe*/
        v45 = v26; /*0x8fc9e0*/
        v24 = v45; /*0x8fca00*/
        v25 = 1; /*0x8fca04*/
      }
      if ( v46 < v24 ) /*0x8fca16*/
      {
        v28 = v25; /*0x8fca18*/
        v25 = 2; /*0x8fca1a*/
      }
      v29 = v48.m128_f32[v27]; /*0x8fca1f*/
      v30 = v48.m128_i32[v28]; /*0x8fca23*/
      v53.m128_i32[v25] = 0; /*0x8fca27*/
      v53.m128_i32[3] = 0; /*0x8fca31*/
      v53.m128_i32[v27] = v30; /*0x8fca39*/
      v53.m128_f32[v28] = -v29; /*0x8fca3d*/
      v21 = v53; /*0x8fca41*/
    }
    else
    {
      v23 = sqrt(v44); /*0x8fc9ae*/
    }
    v31 = _mm_mul_ps(v21, v21); /*0x8fca49*/
    v32 = _mm_shuffle_ps(v31, v31, 0x55).m128_f32[0] + v31.m128_f32[0]; /*0x8fca53*/
    v33 = _mm_shuffle_ps(v31, v31, 0xAA); /*0x8fca5a*/
    v34 = v33; /*0x8fca61*/
    v34.m128_f32[0] = v33.m128_f32[0] + v32; /*0x8fca64*/
    v48 = v34; /*0x8fca68*/
    v48.m128_f32[0] = 1.0 / fsqrt(v33.m128_f32[0] + v32); /*0x8fca71*/
    v35 = *a4; /*0x8fca84*/
    v36 = (__m128)0x3F000000u; /*0x8fcaa0*/
    v36.m128_f32[0] = (float)(0.5 * v48.m128_f32[0]) /*0x8fcaaa*/
                    * (float)(3.0 - (float)((float)((float)(v33.m128_f32[0] + v32) * v48.m128_f32[0]) * v48.m128_f32[0]));
    v53 = _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v21); /*0x8fcabb*/
    *(float *)&v47 = v11->m128_f32[3] - v23; /*0x8fcaca*/
    v37 = _mm_mul_ps(_mm_shuffle_ps((__m128)v47, (__m128)v47, 0), v53); /*0x8fcadd*/
    v38 = *v18; /*0x8fcae0*/
    v53.m128_f32[3] = v23 - v20; /*0x8fcae3*/
    v52 = _mm_add_ps(v38, v37); /*0x8fcaed*/
    (*(void (__thiscall **)(int *, __m128 *))(v35 + 4))(a4, &v52); /*0x8fcaf4*/
  }
  v39 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fcafb*/
  LODWORD(v40) = v39[MEMORY[0xBA9DE4]]; /*0x8fcb08*/
  if ( *(_DWORD *)(v40 + 0x1A4) < *(_DWORD *)(v40 + 0x1A8) ) /*0x8fcb17*/
  {
    v41 = v39[MEMORY[0xBA9DE4]]; /*0x8fcb19*/
    v42 = *(_DWORD **)(v40 + 0x1A4); /*0x8fcb1b*/
    *v42 = "Et"; /*0x8fcb21*/
    v40 = __rdtsc(); /*0x8fcb27*/
    v42[1] = v40; /*0x8fcb31*/
    *(_DWORD *)(v41 + 0x1A4) = v42 + 3; /*0x8fcb37*/
  }
  return v40; /*0x8fcb3d*/
}
