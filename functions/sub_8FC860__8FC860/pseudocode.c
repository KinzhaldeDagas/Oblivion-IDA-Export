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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtSphereCapsule";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = (__m128 *)a1[2];
  v10 = *a1;
  v11 = *a2;
  v54 = a1;
  v12 = a2[2];
  v55 = a2;
  v13 = *v12;
  v14 = v12[1];
  v15 = v12[2];
  v16 = v12[3];
  v17 = v11 + 1;
  v18 = v9 + 3;
  v19 = 2;
  do
  {
    *(__m128 *)((char *)v17 + (char *)&v50 - (char *)&v11[1]) = _mm_add_ps(
                                                                  _mm_add_ps(
                                                                    _mm_mul_ps(v13, _mm_shuffle_ps(*v17, *v17, 0)),
                                                                    _mm_mul_ps(v14, _mm_shuffle_ps(*v17, *v17, 0x55))),
                                                                  _mm_add_ps(
                                                                    _mm_mul_ps(v15, _mm_shuffle_ps(*v17, *v17, 0xAA)),
                                                                    v16));
    ++v17;
    --v19;
  }
  while ( v19 );
  sub_8D1CD0(v18, &v50, &v51, &v49);
  v20 = *(float *)(v10 + 0xC) + v11->m128_f32[3];
  v21 = _mm_sub_ps(*v18, v49);
  v22 = _mm_mul_ps(v21, v21);
  v44 = _mm_shuffle_ps(v22, v22, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0] + v22.m128_f32[0]);
  if ( v44 < (v20 + *(float *)(a3 + 8)) * (v20 + *(float *)(a3 + 8)) )
  {
    if ( v44 <= (double)*(float *)&SrcStr )
    {
      v23 = *(float *)&SrcStr;
      v48 = _mm_sub_ps(v51, v50);
      v24 = fabs(v48.m128_f32[0]);
      v25 = 0;
      v26 = fabs(v48.m128_f32[1]);
      v27 = 1;
      v28 = 2;
      v46 = fabs(v48.m128_f32[2]);
      if ( v26 < v24 )
      {
        v27 = 0;
        v45 = v26;
        v24 = v45;
        v25 = 1;
      }
      if ( v46 < v24 )
      {
        v28 = v25;
        v25 = 2;
      }
      v29 = v48.m128_f32[v27];
      v30 = v48.m128_i32[v28];
      v53.m128_i32[v25] = 0;
      v53.m128_i32[3] = 0;
      v53.m128_i32[v27] = v30;
      v53.m128_f32[v28] = -v29;
      v21 = v53;
    }
    else
    {
      v23 = sqrt(v44);
    }
    v31 = _mm_mul_ps(v21, v21);
    v32 = _mm_shuffle_ps(v31, v31, 0x55).m128_f32[0] + v31.m128_f32[0];
    v33 = _mm_shuffle_ps(v31, v31, 0xAA);
    v34 = v33;
    v34.m128_f32[0] = v33.m128_f32[0] + v32;
    v48 = v34;
    v48.m128_f32[0] = 1.0 / fsqrt(v33.m128_f32[0] + v32);
    v35 = *a4;
    v36 = (__m128)0x3F000000u;
    v36.m128_f32[0] = (float)(0.5 * v48.m128_f32[0])
                    * (float)(3.0 - (float)((float)((float)(v33.m128_f32[0] + v32) * v48.m128_f32[0]) * v48.m128_f32[0]));
    v53 = _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v21);
    *(float *)&v47 = v11->m128_f32[3] - v23;
    v37 = _mm_mul_ps(_mm_shuffle_ps((__m128)v47, (__m128)v47, 0), v53);
    v38 = *v18;
    v53.m128_f32[3] = v23 - v20;
    v52 = _mm_add_ps(v38, v37);
    (*(void (__thiscall **)(int *, __m128 *))(v35 + 4))(a4, &v52);
  }
  v39 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v40) = v39[TlsIndex];
  if ( *(_DWORD *)(v40 + 0x1A4) < *(_DWORD *)(v40 + 0x1A8) )
  {
    v41 = v39[TlsIndex];
    v42 = *(_DWORD **)(v40 + 0x1A4);
    *v42 = "Et";
    v40 = __rdtsc();
    v42[1] = v40;
    *(_DWORD *)(v41 + 0x1A4) = v42 + 3;
  }
  return v40;
}
