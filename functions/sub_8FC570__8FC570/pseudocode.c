int __stdcall sub_8FC570(_DWORD *a1, __m128 **a2, int a3, int *a4)
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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fc57c*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fc589*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8fc59b*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fc59d*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8fc59f*/
    *v7 = "TtSphereCapsule"; /*0x8fc5a5*/
    v8 = __rdtsc(); /*0x8fc5ab*/
    v7[1] = v8; /*0x8fc5b5*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8fc5bb*/
  }
  v9 = (__m128 *)a1[2]; /*0x8fc5c7*/
  v10 = *a1; /*0x8fc5ca*/
  v11 = *a2; /*0x8fc5cc*/
  v54 = a1; /*0x8fc5ce*/
  v12 = a2[2]; /*0x8fc5d5*/
  v55 = a2; /*0x8fc5d8*/
  v13 = *v12; /*0x8fc5df*/
  v14 = v12[1]; /*0x8fc5e2*/
  v15 = v12[2]; /*0x8fc5e6*/
  v16 = v12[3]; /*0x8fc5ea*/
  v17 = v11 + 1; /*0x8fc5ee*/
  v18 = v9 + 3; /*0x8fc5f5*/
  v19 = 2; /*0x8fc5fa*/
  do /*0x8fc63b*/
  {
    *(__m128 *)((char *)v17 + (char *)&v50 - (char *)&v11[1]) = _mm_add_ps( /*0x8fc633*/
                                                                  _mm_add_ps(
                                                                    _mm_mul_ps(v13, _mm_shuffle_ps(*v17, *v17, 0)),
                                                                    _mm_mul_ps(v14, _mm_shuffle_ps(*v17, *v17, 0x55))),
                                                                  _mm_add_ps(
                                                                    _mm_mul_ps(v15, _mm_shuffle_ps(*v17, *v17, 0xAA)),
                                                                    v16));
    ++v17; /*0x8fc637*/
    --v19; /*0x8fc63a*/
  }
  while ( v19 ); /*0x8fc63b*/
  sub_8D1CD0(v18, &v50, &v51, &v49); /*0x8fc64d*/
  v20 = *(float *)(v10 + 0xC) + v11->m128_f32[3]; /*0x8fc655*/
  v21 = _mm_sub_ps(*v18, v49); /*0x8fc665*/
  v22 = _mm_mul_ps(v21, v21); /*0x8fc66e*/
  v44 = _mm_shuffle_ps(v22, v22, 0xAA).m128_f32[0] /*0x8fc68f*/
      + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0] + v22.m128_f32[0]);
  if ( v44 < (v20 + *(float *)(a3 + 8)) * (v20 + *(float *)(a3 + 8)) ) /*0x8fc6a3*/
  {
    if ( v44 <= (double)*(float *)&SrcStr ) /*0x8fc6b8*/
    {
      v23 = *(float *)&SrcStr; /*0x8fc6ca*/
      v48 = _mm_sub_ps(v51, v50); /*0x8fc6d8*/
      v24 = fabs(v48.m128_f32[0]); /*0x8fc6e1*/
      v25 = 0; /*0x8fc6e3*/
      v26 = fabs(v48.m128_f32[1]); /*0x8fc6e9*/
      v27 = 1; /*0x8fc6eb*/
      v28 = 2; /*0x8fc6f8*/
      v46 = fabs(v48.m128_f32[2]); /*0x8fc6ff*/
      if ( v26 < v24 ) /*0x8fc70a*/
      {
        v27 = 0; /*0x8fc70e*/
        v45 = v26; /*0x8fc6f0*/
        v24 = v45; /*0x8fc710*/
        v25 = 1; /*0x8fc714*/
      }
      if ( v46 < v24 ) /*0x8fc726*/
      {
        v28 = v25; /*0x8fc728*/
        v25 = 2; /*0x8fc72a*/
      }
      v29 = v48.m128_f32[v27]; /*0x8fc72f*/
      v30 = v48.m128_i32[v28]; /*0x8fc733*/
      v53.m128_i32[v25] = 0; /*0x8fc737*/
      v53.m128_i32[3] = 0; /*0x8fc741*/
      v53.m128_i32[v27] = v30; /*0x8fc749*/
      v53.m128_f32[v28] = -v29; /*0x8fc74d*/
      v21 = v53; /*0x8fc751*/
    }
    else
    {
      v23 = sqrt(v44); /*0x8fc6be*/
    }
    v31 = _mm_mul_ps(v21, v21); /*0x8fc759*/
    v32 = _mm_shuffle_ps(v31, v31, 0x55).m128_f32[0] + v31.m128_f32[0]; /*0x8fc763*/
    v33 = _mm_shuffle_ps(v31, v31, 0xAA); /*0x8fc76a*/
    v34 = v33; /*0x8fc771*/
    v34.m128_f32[0] = v33.m128_f32[0] + v32; /*0x8fc774*/
    v48 = v34; /*0x8fc778*/
    v48.m128_f32[0] = 1.0 / fsqrt(v33.m128_f32[0] + v32); /*0x8fc781*/
    v35 = *a4; /*0x8fc794*/
    v36 = (__m128)0x3F000000u; /*0x8fc7b0*/
    v36.m128_f32[0] = (float)(0.5 * v48.m128_f32[0]) /*0x8fc7ba*/
                    * (float)(3.0 - (float)((float)((float)(v33.m128_f32[0] + v32) * v48.m128_f32[0]) * v48.m128_f32[0]));
    v53 = _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v21); /*0x8fc7cb*/
    *(float *)&v47 = v11->m128_f32[3] - v23; /*0x8fc7da*/
    v37 = _mm_mul_ps(_mm_shuffle_ps((__m128)v47, (__m128)v47, 0), v53); /*0x8fc7ed*/
    v38 = *v18; /*0x8fc7f0*/
    v53.m128_f32[3] = v23 - v20; /*0x8fc7f3*/
    v52 = _mm_add_ps(v38, v37); /*0x8fc7fd*/
    (*(void (__thiscall **)(int *, __m128 *))(v35 + 4))(a4, &v52); /*0x8fc804*/
  }
  v39 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fc80b*/
  LODWORD(v40) = v39[MEMORY[0xBA9DE4]]; /*0x8fc818*/
  if ( *(_DWORD *)(v40 + 0x1A4) < *(_DWORD *)(v40 + 0x1A8) ) /*0x8fc827*/
  {
    v41 = v39[MEMORY[0xBA9DE4]]; /*0x8fc829*/
    v42 = *(_DWORD **)(v40 + 0x1A4); /*0x8fc82b*/
    *v42 = "Et"; /*0x8fc831*/
    v40 = __rdtsc(); /*0x8fc837*/
    v42[1] = v40; /*0x8fc841*/
    *(_DWORD *)(v41 + 0x1A4) = v42 + 3; /*0x8fc847*/
  }
  return v40; /*0x8fc84d*/
}
