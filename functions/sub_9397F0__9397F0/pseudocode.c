int __thiscall sub_9397F0(__m128 *this, int *a2, int *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // edi
  int v7; // eax
  _DWORD *v8; // esi
  unsigned __int64 v9; // rax
  __m128 *v10; // eax
  __m128 *v11; // edx
  double v12; // st7
  double v13; // st6
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  int v16; // eax
  _DWORD *v17; // edi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // ebx
  _DWORD *v21; // ecx
  unsigned int v23; // [esp+Ch] [ebp-14h]
  unsigned int v24; // [esp+Ch] [ebp-14h]
  __m128 v25; // [esp+10h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = TlsIndex;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = *(_DWORD **)(v7 + 0x1A4);
    *v8 = "LtGskAgent";
    v8[3] = &off_A9BC80;
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x1A4) = v8 + 4;
  }
  if ( *((float *)this + 6) == *(float *)(a4 + 0x10) )
    goto LABEL_6;
  v10 = (__m128 *)a3[2];
  v11 = (__m128 *)a2[2];
  v12 = *(float *)(a4 + 0x18) * v11[5].m128_f32[3];
  v13 = *(float *)(a4 + 0x18) * v10[5].m128_f32[3];
  *(float *)&v23 = v12;
  v14 = (__m128)v23;
  *(float *)&v24 = v13;
  v25 = _mm_add_ps(
          _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), _mm_sub_ps(v11[4], v11[5])),
          _mm_mul_ps(_mm_shuffle_ps((__m128)v24, (__m128)v24, 0), _mm_sub_ps(v10[5], v10[4])));
  v25.m128_f32[3] = v11[0xA].m128_f32[0] * v11[9].m128_f32[3] * v12 + v10[0xA].m128_f32[0] * v10[9].m128_f32[3] * v13;
  if ( *((float *)this + 0xB) <= (double)*(float *)(a4 + 8)
    || (v15 = _mm_mul_ps(v25, *(this + 2)),
        *((float *)this + 0xB) = *((float *)this + 0xB)
                               - (float)((float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0])
                                       + (float)(_mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
                                               + _mm_shuffle_ps(v25, v25, 0xFF).m128_f32[0])),
        *((float *)this + 0xB) <= (double)*(float *)(a4 + 8)) )
  {
LABEL_6:
    v16 = ThreadLocalStoragePointer[v6];
    if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) )
    {
      v17 = *(_DWORD **)(v16 + 0x1A4);
      *v17 = "StGsk";
      v18 = __rdtsc();
      HIDWORD(v18) = TlsIndex;
      v17[1] = v18;
      *(_DWORD *)(ThreadLocalStoragePointer[HIDWORD(v18)] + 0x1A4) = v17 + 3;
      v6 = HIDWORD(v18);
    }
    *((_DWORD *)this + 6) = *(_DWORD *)(a4 + 0x14);
    sub_939450(this, a2, a3, a4, a5);
  }
  LODWORD(v19) = ThreadLocalStoragePointer[v6];
  if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) )
  {
    v20 = ThreadLocalStoragePointer[v6];
    v21 = *(_DWORD **)(v19 + 0x1A4);
    *v21 = "lt";
    v19 = __rdtsc();
    v21[1] = v19;
    *(_DWORD *)(v20 + 0x1A4) = v21 + 3;
  }
  return v19;
}
