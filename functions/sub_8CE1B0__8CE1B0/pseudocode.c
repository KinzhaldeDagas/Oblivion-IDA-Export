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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ce1c2*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ce1c9*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8ce1d8*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ce1da*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8ce1dc*/
    *v7 = "TtrcBox"; /*0x8ce1e2*/
    v8 = __rdtsc(); /*0x8ce1e8*/
    v7[1] = v8; /*0x8ce1f2*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8ce1f8*/
  }
  v9 = _mm_add_ps(*(this + 1), _mm_shuffle_ps((__m128)this->m128_u32[3], (__m128)this->m128_u32[3], 0)); /*0x8ce21d*/
  v10 = _mm_xor_ps(v9, (__m128)xmmword_A965C0); /*0x8ce223*/
  v11 = a3[1]; /*0x8ce237*/
  LODWORD(v13) = _mm_movemask_ps(_mm_cmple_ps(v9, *a3)) & 7; /*0x8ce249*/
  LODWORD(v12) = _mm_movemask_ps(_mm_cmple_ps(v9, v11)) & 7; /*0x8ce24c*/
  HIDWORD(v12) = _mm_movemask_ps(_mm_cmple_ps(v11, v10)) & 7; /*0x8ce252*/
  HIDWORD(v13) = _mm_movemask_ps(_mm_cmple_ps(*a3, v10)) & 7; /*0x8ce255*/
  v45 = v10; /*0x8ce25a*/
  v42 = HIDWORD(v12); /*0x8ce25f*/
  if ( (v12 & v13) == 0 && v13 ) /*0x8ce275*/
  {
    v14 = fConstant_1; /*0x8ce27b*/
    v15 = v13 | v12; /*0x8ce283*/
    v16 = v13; /*0x8ce288*/
    v17 = *(float *)(a4 + 0x14); /*0x8ce28a*/
    v43[0] = 1; /*0x8ce28d*/
    v43[1] = 2; /*0x8ce295*/
    v43[2] = 4; /*0x8ce29d*/
    v39 = 0.0; /*0x8ce2a5*/
    v40 = v17; /*0x8ce2ad*/
    v41 = 1; /*0x8ce2b1*/
LABEL_6:
    v18 = 2; /*0x8ce2c0*/
    while ( 1 ) /*0x8ce2c5*/
    {
      v19 = v43[v18]; /*0x8ce2c5*/
      if ( (v19 & v15) != 0 ) /*0x8ce2cb*/
      {
        v20 = v45.m128_f32[v18]; /*0x8ce2cf*/
        v21 = v14 * a3->m128_f32[v18] + v20; /*0x8ce2e2*/
        v22 = v21 / (v21 - (v20 + v14 * a3[1].m128_f32[v18])); /*0x8ce2e6*/
        if ( (v19 & v16) != 0 ) /*0x8ce2e8*/
        {
          if ( v22 >= v39 ) /*0x8ce2f3*/
          {
            v39 = v22; /*0x8ce2f5*/
            v44 = 0; /*0x8ce2fc*/
            *(float *)((char *)&v44 + v18 * 4) = v14; /*0x8ce301*/
          }
        }
        else if ( v40 >= v22 ) /*0x8ce312*/
        {
          v40 = v22; /*0x8ce314*/
        }
        if ( v40 < (double)v39 ) /*0x8ce329*/
          break; /*0x8ce329*/
      }
      if ( --v18 < 0 ) /*0x8ce332*/
      {
        v14 = kTerrainLODQuadRayDirectionZ; /*0x8ce33e*/
        v15 = HIDWORD(v13) | v42; /*0x8ce344*/
        v23 = v41 - 1 < 0; /*0x8ce346*/
        v16 = HIDWORD(v13); /*0x8ce347*/
        --v41; /*0x8ce349*/
        if ( !v23 ) /*0x8ce34d*/
          goto LABEL_6; /*0x8ce34d*/
        v24 = v44; /*0x8ce35c*/
        v25 = MEMORY[0xBA9DE4]; /*0x8ce361*/
        *(float *)(a4 + 0x14) = v39; /*0x8ce367*/
        v26 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ce36a*/
        *(_OWORD *)a4 = v24; /*0x8ce371*/
        *(_DWORD *)(a4 + 0x10) = 0xFFFFFFFF; /*0x8ce374*/
        v27 = v26[v25]; /*0x8ce37b*/
        if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x8ce38a*/
        {
          v28 = v26[v25]; /*0x8ce38c*/
          v29 = *(_DWORD **)(v27 + 0x1A4); /*0x8ce38e*/
          *v29 = "Et"; /*0x8ce394*/
          v30 = __rdtsc(); /*0x8ce39a*/
          v29[1] = v30; /*0x8ce3a4*/
          *(_DWORD *)(v28 + 0x1A4) = v29 + 3; /*0x8ce3aa*/
        }
        *a2 = 1; /*0x8ce3b3*/
        return a2; /*0x8ce3bc*/
      }
    }
    v32 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ce3bf*/
    v33 = v32[MEMORY[0xBA9DE4]]; /*0x8ce3ce*/
    if ( *(_DWORD *)(v33 + 0x1A4) >= *(_DWORD *)(v33 + 0x1A8) ) /*0x8ce3dd*/
      goto LABEL_24; /*0x8ce3dd*/
    v34 = v32[MEMORY[0xBA9DE4]]; /*0x8ce3df*/
    v35 = *(_DWORD **)(v33 + 0x1A4); /*0x8ce3e1*/
    *v35 = "Et"; /*0x8ce3e7*/
    v36 = __rdtsc(); /*0x8ce3ed*/
    v35[1] = v36; /*0x8ce3f7*/
    goto LABEL_23; /*0x8ce3fa*/
  }
  v37 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ce402*/
  if ( *(_DWORD *)(v37 + 0x1A4) < *(_DWORD *)(v37 + 0x1A8) ) /*0x8ce411*/
  {
    v34 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ce413*/
    v35 = *(_DWORD **)(v37 + 0x1A4); /*0x8ce415*/
    *v35 = "Et"; /*0x8ce41b*/
    v38 = __rdtsc(); /*0x8ce421*/
    v35[1] = v38; /*0x8ce42b*/
LABEL_23:
    *(_DWORD *)(v34 + 0x1A4) = v35 + 3; /*0x8ce42e*/
  }
LABEL_24:
  *a2 = 0; /*0x8ce437*/
  return a2; /*0x8ce3b6*/
}
