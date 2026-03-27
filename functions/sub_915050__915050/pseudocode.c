_BYTE *__thiscall sub_915050(__m128 *this, _BYTE *a2, __m128 *a3, __m128 *a4)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // ebx
  unsigned __int64 v8; // rax
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  double v12; // st7
  __m128 v13; // xmm0
  int v14; // eax
  int v15; // esi
  _DWORD *v16; // ecx
  unsigned __int64 v17; // rax
  int v19; // eax
  int v20; // esi
  _DWORD *v21; // ecx
  unsigned __int64 v22; // rax
  float v23; // [esp+18h] [ebp-8h]
  float v24; // [esp+1Ch] [ebp-4h]
  unsigned int v25; // [esp+1Ch] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = TlsIndex;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = *(_DWORD **)(v6 + 0x1A4);
    *v7 = "TtrcPlane";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x1A4) = v7 + 3;
  }
  v9 = _mm_mul_ps(*(this + 1), *a3);
  v23 = (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0])
      + (float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] + _mm_shuffle_ps(*(this + 1), *(this + 1), 0xFF).m128_f32[0]);
  if ( v23 >= (double)*(float *)&SrcStr
    && (v10 = a3[1],
        v11 = _mm_mul_ps(*(this + 1), v10),
        v24 = (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0])
            + (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
                    + _mm_shuffle_ps(*(this + 1), *(this + 1), 0xFF).m128_f32[0]),
        v24 < (double)*(float *)&SrcStr)
    && (v12 = v23 / (v23 - v24),
        *(float *)&v25 = v12,
        v13 = _mm_shuffle_ps((__m128)v25, (__m128)v25, 0),
        (_mm_movemask_ps(
           _mm_cmple_ps(
             _mm_and_ps(
               _mm_sub_ps(
                 _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v13), *a3), _mm_mul_ps(v13, v10)),
                 *(this + 2)),
               (__m128)xmmword_A372D0),
             *(this + 3)))
       & 7) == 7) )
  {
    a4[1].m128_f32[1] = v12;
    *a4 = *(this + 1);
    a4[1].m128_i32[0] = 0xFFFFFFFF;
    v19 = ThreadLocalStoragePointer[v5];
    if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) )
    {
      v20 = ThreadLocalStoragePointer[v5];
      v21 = *(_DWORD **)(v19 + 0x1A4);
      *v21 = "Et";
      v22 = __rdtsc();
      v21[1] = v22;
      *(_DWORD *)(v20 + 0x1A4) = v21 + 3;
    }
    *a2 = 1;
    return a2;
  }
  else
  {
    v14 = ThreadLocalStoragePointer[v5];
    if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) )
    {
      v15 = ThreadLocalStoragePointer[v5];
      v16 = *(_DWORD **)(v14 + 0x1A4);
      *v16 = "Et";
      v17 = __rdtsc();
      v16[1] = v17;
      *(_DWORD *)(v15 + 0x1A4) = v16 + 3;
    }
    *a2 = 0;
    return a2;
  }
}
