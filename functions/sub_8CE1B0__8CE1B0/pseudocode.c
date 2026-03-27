_BYTE *__thiscall sub_8CE1B0(__m128 *this, _BYTE *a2, __m128 *a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // esi
  unsigned __int64 v8; // rax
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __int64 v12; // rax
  __int64 v13; // rcx
  double v14; // st7
  int v15; // edx
  int v16; // edi
  float v17; // ecx
  int v18; // ecx
  int v19; // eax
  double v20; // st6
  double v21; // rt0
  double v22; // st6
  bool v23; // sf
  __int128 v24; // xmm0
  int v25; // edx
  _DWORD *v26; // ecx
  int v27; // eax
  int v28; // esi
  _DWORD *v29; // ecx
  unsigned __int64 v30; // rax
  _DWORD *v32; // ecx
  int v33; // eax
  int v34; // esi
  _DWORD *v35; // ecx
  unsigned __int64 v36; // rax
  int v37; // eax
  unsigned __int64 v38; // rax
  float v39; // [esp+14h] [ebp-3Ch]
  float v40; // [esp+18h] [ebp-38h]
  int v41; // [esp+1Ch] [ebp-34h]
  int v42; // [esp+20h] [ebp-30h]
  _DWORD v43[3]; // [esp+24h] [ebp-2Ch]
  __int128 v44; // [esp+30h] [ebp-20h]
  __m128 v45; // [esp+40h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtrcBox";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = _mm_add_ps(*(this + 1), _mm_shuffle_ps((__m128)this->m128_u32[3], (__m128)this->m128_u32[3], 0));
  v10 = _mm_xor_ps(v9, (__m128)xmmword_A965C0);
  v11 = a3[1];
  LODWORD(v13) = _mm_movemask_ps(_mm_cmple_ps(v9, *a3)) & 7;
  LODWORD(v12) = _mm_movemask_ps(_mm_cmple_ps(v9, v11)) & 7;
  HIDWORD(v12) = _mm_movemask_ps(_mm_cmple_ps(v11, v10)) & 7;
  HIDWORD(v13) = _mm_movemask_ps(_mm_cmple_ps(*a3, v10)) & 7;
  v45 = v10;
  v42 = HIDWORD(v12);
  if ( (v12 & v13) == 0 && v13 )
  {
    v14 = fConstant_1;
    v15 = v13 | v12;
    v16 = v13;
    v17 = *(float *)(a4 + 0x14);
    v43[0] = 1;
    v43[1] = 2;
    v43[2] = 4;
    v39 = 0.0;
    v40 = v17;
    v41 = 1;
LABEL_6:
    v18 = 2;
    while ( 1 )
    {
      v19 = v43[v18];
      if ( (v19 & v15) != 0 )
      {
        v20 = v45.m128_f32[v18];
        v21 = v14 * a3->m128_f32[v18] + v20;
        v22 = v21 / (v21 - (v20 + v14 * a3[1].m128_f32[v18]));
        if ( (v19 & v16) != 0 )
        {
          if ( v22 >= v39 )
          {
            v39 = v22;
            v44 = 0;
            *(float *)((char *)&v44 + v18 * 4) = v14;
          }
        }
        else if ( v40 >= v22 )
        {
          v40 = v22;
        }
        if ( v40 < (double)v39 )
          break;
      }
      if ( --v18 < 0 )
      {
        v14 = flt_A30634;
        v15 = HIDWORD(v13) | v42;
        v23 = v41 - 1 < 0;
        v16 = HIDWORD(v13);
        --v41;
        if ( !v23 )
          goto LABEL_6;
        v24 = v44;
        v25 = TlsIndex;
        *(float *)(a4 + 0x14) = v39;
        v26 = NtCurrentTeb()->ThreadLocalStoragePointer;
        *(_OWORD *)a4 = v24;
        *(_DWORD *)(a4 + 0x10) = 0xFFFFFFFF;
        v27 = v26[v25];
        if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
        {
          v28 = v26[v25];
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
    v32 = NtCurrentTeb()->ThreadLocalStoragePointer;
    v33 = v32[TlsIndex];
    if ( *(_DWORD *)(v33 + 0x1A4) >= *(_DWORD *)(v33 + 0x1A8) )
      goto LABEL_24;
    v34 = v32[TlsIndex];
    v35 = *(_DWORD **)(v33 + 0x1A4);
    *v35 = "Et";
    v36 = __rdtsc();
    v35[1] = v36;
    goto LABEL_23;
  }
  v37 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v37 + 0x1A4) < *(_DWORD *)(v37 + 0x1A8) )
  {
    v34 = ThreadLocalStoragePointer[TlsIndex];
    v35 = *(_DWORD **)(v37 + 0x1A4);
    *v35 = "Et";
    v38 = __rdtsc();
    v35[1] = v38;
LABEL_23:
    *(_DWORD *)(v34 + 0x1A4) = v35 + 3;
  }
LABEL_24:
  *a2 = 0;
  return a2;
}
