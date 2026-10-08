int __thiscall sub_909DE0(_DWORD *this, int *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // edi
  int v13; // eax
  unsigned __int64 v14; // rax
  int v15; // ebx
  _DWORD *v16; // ecx
  int v18; // [esp+10h] [ebp-D4h]
  _DWORD v19[4]; // [esp+14h] [ebp-D0h] BYREF
  _WORD v20[6]; // [esp+24h] [ebp-C0h] BYREF
  int v21; // [esp+30h] [ebp-B4h]
  __m128 v22[11]; // [esp+34h] [ebp-B0h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x909ded*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909dfe*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x909e0d*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909e0f*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x909e11*/
    *v9 = "TtMultiSphere"; /*0x909e17*/
    v10 = __rdtsc(); /*0x909e1d*/
    v9[1] = v10; /*0x909e27*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x909e2d*/
  }
  v18 = *a2; /*0x909e3b*/
  sub_903FA0((char *)v22, (_OWORD *)a2[2]); /*0x909e44*/
  sub_8ED410(v20, 0); /*0x909e4f*/
  v19[3] = a2; /*0x909e54*/
  v11 = *(this + 3); /*0x909e58*/
  v12 = *(this + 4) - 1; /*0x909e5e*/
  v19[2] = v22; /*0x909e63*/
  if ( v12 >= 0 ) /*0x909e67*/
  {
    do /*0x909ef9*/
    {
      v13 = 0x10 * (*(_DWORD *)v11 + 1); /*0x909e81*/
      v22[3] = _mm_add_ps( /*0x909ec0*/
                 *(__m128 *)(a2[2] + 0x30),
                 _mm_add_ps(
                   _mm_add_ps(
                     _mm_mul_ps(v22[0], _mm_shuffle_ps(*(__m128 *)(v13 + v18), *(__m128 *)(v13 + v18), 0)),
                     _mm_mul_ps(v22[1], _mm_shuffle_ps(*(__m128 *)(v13 + v18), *(__m128 *)(v13 + v18), 0x55))),
                   _mm_mul_ps(v22[2], _mm_shuffle_ps(*(__m128 *)(v13 + v18), *(__m128 *)(v13 + v18), 0xAA))));
      v21 = *(_DWORD *)(v18 + v13 + 0xC); /*0x909ec8*/
      v19[0] = v20; /*0x909ed8*/
      v19[1] = v12; /*0x909edc*/
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int))(**(_DWORD **)(v11 + 4) + 8))( /*0x909eeb*/
        *(_DWORD *)(v11 + 4),
        v19,
        a3,
        a4,
        a5);
      if ( *(_BYTE *)(a5 + 4) ) /*0x909eee*/
        break; /*0x909ef3*/
      v11 += 8; /*0x909ef5*/
      --v12; /*0x909ef8*/
    }
    while ( v12 >= 0 ); /*0x909ef9*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x909eff*/
  }
  LODWORD(v14) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909f0c*/
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) ) /*0x909f1b*/
  {
    v15 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909f1d*/
    v16 = *(_DWORD **)(v14 + 0x1A4); /*0x909f1f*/
    *v16 = "Et"; /*0x909f25*/
    v14 = __rdtsc(); /*0x909f2b*/
    v16[1] = v14; /*0x909f35*/
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3; /*0x909f3b*/
  }
  return v14; /*0x909f41*/
}
