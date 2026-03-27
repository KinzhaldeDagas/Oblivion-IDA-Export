_BYTE *__thiscall sub_916F60(_DWORD *this, _BYTE *a2, __m128 *a3, __m128 *a4)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // ebx
  unsigned __int64 v9; // rax
  int v10; // edx
  __m128 v11; // xmm5
  __m128 *v12; // ebx
  __m128 v13; // xmm0
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm2_4
  __m128 v17; // xmm0
  char v19; // c0
  double v20; // st7
  double v21; // st7
  int v22; // eax
  int v23; // esi
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  int v27; // eax
  int v28; // esi
  _DWORD *v29; // ecx
  unsigned __int64 v30; // rax
  float v31; // [esp+10h] [ebp-20h]
  float v32; // [esp+14h] [ebp-1Ch]
  _DWORD *v33; // [esp+18h] [ebp-18h]
  float v34; // [esp+18h] [ebp-18h]
  float v35; // [esp+1Ch] [ebp-14h]
  __m128 v36; // [esp+20h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = TlsIndex;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  v33 = this;
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtrcConvexVert";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
    this = v33;
  }
  v10 = *(this + 0x11) - 1;
  v32 = -1.0;
  v35 = a4[1].m128_f32[1];
  if ( v10 < 0 )
  {
LABEL_15:
    v22 = ThreadLocalStoragePointer[v5];
    if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) )
      goto LABEL_16;
    goto LABEL_17;
  }
  v11 = v36;
  v12 = (__m128 *)(*(this + 0x10) + 0x10 * v10);
  while ( 1 )
  {
    v13 = _mm_mul_ps(*v12, *a3);
    v14 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0];
    v15 = _mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0];
    v16 = _mm_shuffle_ps(*v12, *v12, 0xFF).m128_f32[0];
    v17 = _mm_mul_ps(*v12, a3[1]);
    v31 = v15 + (float)(v14 + v16);
    v34 = (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0])
        + (float)(_mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] + v16);
    if ( !v19 )
      break;
    if ( v34 >= (double)*(float *)&SrcStr )
    {
      v21 = v31 / (v31 - v34);
      if ( v35 >= v21 )
        v35 = v21;
      goto LABEL_12;
    }
LABEL_13:
    --v10;
    v12 += 0xFFFFFFFF;
    if ( v10 < 0 )
    {
      if ( v32 < (double)*(float *)&SrcStr )
        goto LABEL_15;
      *a4 = v11;
      a4[1].m128_f32[1] = v32;
      a4[1].m128_i32[0] = 0xFFFFFFFF;
      v27 = ThreadLocalStoragePointer[v5];
      if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
      {
        v28 = ThreadLocalStoragePointer[v5];
        v29 = *(_DWORD **)(v27 + 0x1A4);
        *v29 = "Et";
        v30 = __rdtsc();
        v29[1] = v30;
        *(_DWORD *)(v28 + 0x1A4) = v29 + 3;
      }
      *a2 = 1;
      return a2;
    }
  }
  if ( v34 >= (double)*(float *)&SrcStr )
  {
    v22 = ThreadLocalStoragePointer[v5];
    if ( *(_DWORD *)(v22 + 0x1A4) >= *(_DWORD *)(v22 + 0x1A8) )
      goto LABEL_17;
    goto LABEL_16;
  }
  v20 = v31 / (v31 - v34);
  if ( v32 <= v20 )
  {
    v32 = v20;
    v11 = *v12;
  }
LABEL_12:
  if ( v35 >= (double)v32 )
    goto LABEL_13;
  v22 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v22 + 0x1A4) >= *(_DWORD *)(v22 + 0x1A8) )
    goto LABEL_17;
LABEL_16:
  v23 = ThreadLocalStoragePointer[v5];
  v24 = *(_DWORD **)(v22 + 0x1A4);
  *v24 = "Et";
  v25 = __rdtsc();
  v24[1] = v25;
  *(_DWORD *)(v23 + 0x1A4) = v24 + 3;
LABEL_17:
  *a2 = 0;
  return a2;
}
