int __thiscall sub_9097D0(_DWORD *this, int *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // esi
  _DWORD *v18; // ecx
  int v20; // [esp+10h] [ebp-D4h]
  _DWORD v21[4]; // [esp+14h] [ebp-D0h] BYREF
  _WORD v22[6]; // [esp+24h] [ebp-C0h] BYREF
  int v23; // [esp+30h] [ebp-B4h]
  __m128 v24[11]; // [esp+34h] [ebp-B0h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9097e7*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9097ee*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x9097fd*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9097ff*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x909801*/
    *v9 = "TtMultiSphere"; /*0x909807*/
    v10 = __rdtsc(); /*0x90980d*/
    v9[1] = v10; /*0x909817*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x90981d*/
  }
  v20 = *a2; /*0x90982b*/
  sub_903FA0((char *)v24, (_OWORD *)a2[2]); /*0x909834*/
  sub_8ED410(v22, 0); /*0x90983f*/
  v11 = *(this + 3); /*0x909844*/
  v12 = *(this + 4) - 1; /*0x90984a*/
  v21[3] = a2; /*0x90984f*/
  for ( v21[2] = v24; v12 >= 0; --v12 ) /*0x909857*/
  {
    v13 = 0x10 * (*(_DWORD *)v11 + 1); /*0x909874*/
    v24[3] = _mm_add_ps( /*0x9098ad*/
               *(__m128 *)(a2[2] + 0x30),
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_mul_ps(v24[0], _mm_shuffle_ps(*(__m128 *)(v13 + v20), *(__m128 *)(v13 + v20), 0)),
                   _mm_mul_ps(v24[1], _mm_shuffle_ps(*(__m128 *)(v13 + v20), *(__m128 *)(v13 + v20), 0x55))),
                 _mm_mul_ps(v24[2], _mm_shuffle_ps(*(__m128 *)(v13 + v20), *(__m128 *)(v13 + v20), 0xAA))));
    v14 = *(_DWORD *)(v20 + v13 + 0xC); /*0x9098b2*/
    v21[0] = v22; /*0x9098b9*/
    v23 = v14; /*0x9098c8*/
    v21[1] = v12; /*0x9098cc*/
    (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int))(**(_DWORD **)(v11 + 4) + 0xC))( /*0x9098db*/
      *(_DWORD *)(v11 + 4),
      v21,
      a3,
      a4,
      a5);
    v11 += 8; /*0x9098de*/
  }
  v15 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9098e8*/
  LODWORD(v16) = v15[MEMORY[0xBA9DE4]]; /*0x9098f5*/
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x909904*/
  {
    v17 = v15[MEMORY[0xBA9DE4]]; /*0x909906*/
    v18 = *(_DWORD **)(v16 + 0x1A4); /*0x909908*/
    *v18 = "Et"; /*0x90990e*/
    v16 = __rdtsc(); /*0x909914*/
    v18[1] = v16; /*0x90991e*/
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x909924*/
  }
  return v16; /*0x90992a*/
}
