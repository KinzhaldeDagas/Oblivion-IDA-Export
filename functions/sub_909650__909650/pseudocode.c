int __thiscall sub_909650(_DWORD *this, int *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // edi
  __m128 *v13; // ecx
  int v14; // eax
  __m128 v15; // xmm0
  int v16; // ecx
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // esi
  _DWORD *v20; // ecx
  int v22; // [esp+10h] [ebp-D4h]
  _DWORD v23[4]; // [esp+14h] [ebp-D0h] BYREF
  _WORD v24[6]; // [esp+24h] [ebp-C0h] BYREF
  int v25; // [esp+30h] [ebp-B4h]
  __m128 v26[11]; // [esp+34h] [ebp-B0h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x909667*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90966e*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x90967d*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90967f*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x909681*/
    *v9 = "TtMultiSphere"; /*0x909687*/
    v10 = __rdtsc(); /*0x90968d*/
    v9[1] = v10; /*0x909697*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x90969d*/
  }
  v22 = *a2; /*0x9096ab*/
  sub_903FA0((char *)v26, (_OWORD *)a2[2]); /*0x9096b4*/
  sub_8ED410(v24, 0); /*0x9096bf*/
  v11 = *(this + 3); /*0x9096c4*/
  v12 = *(this + 4) - 1; /*0x9096ca*/
  v23[3] = a2; /*0x9096cf*/
  for ( v23[2] = v26; v12 >= 0; --v12 ) /*0x9096d7*/
  {
    v13 = (__m128 *)a2[2]; /*0x9096f0*/
    v14 = 0x10 * (*(_DWORD *)v11 + 1); /*0x9096f4*/
    v15 = _mm_add_ps( /*0x909727*/
            _mm_add_ps(
              _mm_mul_ps(v26[0], _mm_shuffle_ps(*(__m128 *)(v14 + v22), *(__m128 *)(v14 + v22), 0)),
              _mm_mul_ps(v26[1], _mm_shuffle_ps(*(__m128 *)(v14 + v22), *(__m128 *)(v14 + v22), 0x55))),
            _mm_mul_ps(v26[2], _mm_shuffle_ps(*(__m128 *)(v14 + v22), *(__m128 *)(v14 + v22), 0xAA)));
    v26[3] = _mm_add_ps(v13[3], v15); /*0x90972d*/
    v26[4] = _mm_add_ps(v13[4], v15); /*0x909739*/
    v26[5] = _mm_add_ps(v13[5], v15); /*0x909745*/
    v16 = *(_DWORD *)(v22 + v14 + 0xC); /*0x90974d*/
    v23[0] = v24; /*0x909754*/
    v25 = v16; /*0x909763*/
    v23[1] = v12; /*0x909767*/
    (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int))(**(_DWORD **)(v11 + 4) + 0x14))( /*0x909776*/
      *(_DWORD *)(v11 + 4),
      v23,
      a3,
      a4,
      a5);
    v11 += 8; /*0x909779*/
  }
  v17 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x909783*/
  LODWORD(v18) = v17[MEMORY[0xBA9DE4]]; /*0x909790*/
  if ( *(_DWORD *)(v18 + 0x1A4) < *(_DWORD *)(v18 + 0x1A8) ) /*0x90979f*/
  {
    v19 = v17[MEMORY[0xBA9DE4]]; /*0x9097a1*/
    v20 = *(_DWORD **)(v18 + 0x1A4); /*0x9097a3*/
    *v20 = "Et"; /*0x9097a9*/
    v18 = __rdtsc(); /*0x9097af*/
    v20[1] = v18; /*0x9097b9*/
    *(_DWORD *)(v19 + 0x1A4) = v20 + 3; /*0x9097bf*/
  }
  return v18; /*0x9097c5*/
}
