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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = TlsIndex;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  v35 = a1;
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtrcSphere";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
    a1 = v35;
  }
  v11 = _mm_sub_ps(a4[1], *a4);
  v38 = *(float *)(a1 + 0xC) * *(float *)(a1 + 0xC);
  v12 = _mm_mul_ps(v11, *a4);
  v36 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
  v13 = v36;
  if ( v36 >= (double)*(float *)&SrcStr )
    goto LABEL_14;
  v14 = _mm_mul_ps(v11, v11);
  v34 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]);
  if ( v34 * v38 * flt_A2FE7C >= v36 * v36 )
  {
    v37 = 0.0;
    v17 = *a4;
  }
  else
  {
    if ( v34 < (double)v38 )
      goto LABEL_14;
    v15 = -v36;
    v37 = v15;
    *(float *)&v40 = v15 / v34;
    v13 = *(float *)&SrcStr;
    v16 = _mm_shuffle_ps((__m128)v40, (__m128)v40, 0);
    v17 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v16), *a4), _mm_mul_ps(v16, a4[1]));
  }
  v18 = _mm_mul_ps(v17, v17);
  v19 = v13 * v13
      - ((float)(_mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]))
       - v38)
      * v34;
  if ( v19 > *(float *)&SrcStr )
  {
    v39 = -v13 - sqrt(v19) + v37;
    if ( v34 * a5[1].m128_f32[1] > v39 && v39 >= (double)*(float *)&SrcStr )
    {
      v20 = ThreadLocalStoragePointer[v6];
      v21 = v39 / v34;
      a5[1].m128_f32[1] = v21;
      *(float *)&v41 = v21;
      v22 = fConstant_1;
      v23 = _mm_shuffle_ps((__m128)v41, (__m128)v41, 0);
      v24 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v23), *a4), _mm_mul_ps(v23, a4[1]));
      *a5 = v24;
      v25 = v22 / *(float *)(a1 + 0xC);
      a5[1].m128_i32[0] = 0xFFFFFFFF;
      *(float *)&v42 = v25;
      *a5 = _mm_mul_ps(_mm_shuffle_ps((__m128)v42, (__m128)v42, 0), v24);
      if ( *(_DWORD *)(v20 + 0x1A4) < *(_DWORD *)(v20 + 0x1A8) )
      {
        v26 = v20;
        v27 = *(_DWORD **)(v20 + 0x1A4);
        *v27 = "Et";
        v28 = __rdtsc();
        v27[1] = v28;
        *(_DWORD *)(v26 + 0x1A4) = v27 + 3;
      }
      *a3 = 1;
      return a3;
    }
  }
LABEL_14:
  v30 = ThreadLocalStoragePointer[v6];
  if ( *(_DWORD *)(v30 + 0x1A4) < *(_DWORD *)(v30 + 0x1A8) )
  {
    v31 = ThreadLocalStoragePointer[v6];
    v32 = *(_DWORD **)(v30 + 0x1A4);
    *v32 = "Et";
    v33 = __rdtsc();
    v32[1] = v33;
    *(_DWORD *)(v31 + 0x1A4) = v32 + 3;
  }
  *a3 = 0;
  return a3;
}
