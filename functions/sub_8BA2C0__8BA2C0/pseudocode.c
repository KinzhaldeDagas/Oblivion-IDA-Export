int __thiscall sub_8BA2C0(_DWORD *this, int *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  __int128 *v12; // esi
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm3
  __m128 *v16; // eax
  int v17; // ecx
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  int v20; // eax
  _DWORD *v21; // ecx
  int v22; // edx
  unsigned int v23; // eax
  _DWORD *v25; // ecx
  bool v26; // zf
  unsigned __int64 v27; // rax
  _DWORD *v28; // ecx
  int v30; // [esp+10h] [ebp-30h]
  int v31; // [esp+14h] [ebp-2Ch]
  int v33; // [esp+1Ch] [ebp-24h]
  __m128 v34; // [esp+20h] [ebp-20h] BYREF
  __m128 v35; // [esp+30h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ba2cc*/
  v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ba2dd*/
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x8ba2ec*/
  {
    v9 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ba2ee*/
    v10 = *(_DWORD **)(v8 + 0x1A4); /*0x8ba2f0*/
    *v10 = "TtRayCastGroup"; /*0x8ba2f6*/
    v11 = __rdtsc(); /*0x8ba2fc*/
    v10[1] = v11; /*0x8ba306*/
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3; /*0x8ba30c*/
  }
  v12 = (__int128 *)a3; /*0x8ba312*/
  v13 = *(__m128 *)(a3 + 0x10); /*0x8ba318*/
  v14 = _mm_min_ps(*(__m128 *)a3, v13); /*0x8ba325*/
  v15 = _mm_max_ps(*(__m128 *)a3, v13); /*0x8ba328*/
  v34 = v14; /*0x8ba32b*/
  v35 = v15; /*0x8ba330*/
  v16 = (__m128 *)(a3 + 0x30); /*0x8ba335*/
  if ( a4 - 2 >= 0 ) /*0x8ba338*/
  {
    v17 = a4 - 2 + 1; /*0x8ba33a*/
    do /*0x8ba357*/
    {
      v18 = *v16; /*0x8ba340*/
      v19 = v16[1]; /*0x8ba343*/
      v16 += 3; /*0x8ba347*/
      --v17; /*0x8ba34a*/
      v14 = _mm_min_ps(_mm_min_ps(v14, v19), v18); /*0x8ba351*/
      v15 = _mm_max_ps(_mm_max_ps(v15, v19), v18); /*0x8ba354*/
    }
    while ( v17 ); /*0x8ba357*/
    v35 = v15; /*0x8ba359*/
    v34 = v14; /*0x8ba35e*/
  }
  v20 = (*(int (__thiscall **)(int *))(*a2 + 0x3C))(a2); /*0x8ba36a*/
  v33 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8ba376*/
  v21 = *(_DWORD **)(v33 + 0x19C); /*0x8ba37a*/
  if ( !v21 ) /*0x8ba382*/
    v21 = (_DWORD *)unk_BA7D9C; /*0x8ba384*/
  v22 = v21[8]; /*0x8ba38a*/
  v23 = (v20 + 0x10) & 0xFFFFFFF0; /*0x8ba390*/
  if ( v22 + v23 > v21[0xB] ) /*0x8ba399*/
  {
    v30 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v21 + 0xC))(v21, v23); /*0x8ba3aa*/
    (*(void (__thiscall **)(int *, __m128 *, int))(*a2 + 0x40))(a2, &v34, v30); /*0x8ba3bc*/
  }
  else
  {
    v21[8] = v22 + v23; /*0x8ba39b*/
    v30 = v22; /*0x8ba39e*/
    (*(void (__thiscall **)(int *, __m128 *, int))(*a2 + 0x40))(a2, &v34, v22); /*0x8ba3a2*/
  }
  if ( a4 - 1 >= 0 ) /*0x8ba3c6*/
  {
    v31 = a4; /*0x8ba3c9*/
    do /*0x8ba3f6*/
    {
      sub_8BA1B0(this, a2, v12, a5, v30, a6); /*0x8ba3e0*/
      v12 += 3; /*0x8ba3ec*/
      a6 += a7; /*0x8ba3ef*/
      --v31; /*0x8ba3f2*/
    }
    while ( v31 ); /*0x8ba3f6*/
  }
  v25 = *(_DWORD **)(v33 + 0x19C); /*0x8ba3fc*/
  if ( !v25 ) /*0x8ba404*/
    v25 = (_DWORD *)unk_BA7D9C; /*0x8ba406*/
  v26 = v30 == v25[0xA]; /*0x8ba410*/
  v25[8] = v30; /*0x8ba413*/
  if ( v26 ) /*0x8ba416*/
    (*(void (__thiscall **)(_DWORD *, int))(*v25 + 0x10))(v25, v30); /*0x8ba41b*/
  LODWORD(v27) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8ba42a*/
  if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x8ba439*/
  {
    v28 = *(_DWORD **)(v33 + 0x1A4); /*0x8ba43b*/
    *v28 = "Et"; /*0x8ba441*/
    v27 = __rdtsc(); /*0x8ba447*/
    v28[1] = v27; /*0x8ba451*/
    *(_DWORD *)(v33 + 0x1A4) = v28 + 3; /*0x8ba457*/
  }
  return v27; /*0x8ba45d*/
}
