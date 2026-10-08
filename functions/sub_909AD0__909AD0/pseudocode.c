int __thiscall sub_909AD0(_DWORD *this, int *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // ecx
  int v13; // esi
  __m128 *v14; // edi
  unsigned __int64 v15; // rax
  int v16; // edi
  _DWORD *v17; // ecx
  int v19; // [esp+18h] [ebp-D8h]
  int v20; // [esp+1Ch] [ebp-D4h]
  _DWORD v21[4]; // [esp+20h] [ebp-D0h] BYREF
  _WORD v22[6]; // [esp+30h] [ebp-C0h] BYREF
  __int32 v23; // [esp+3Ch] [ebp-B4h]
  __m128 v24[11]; // [esp+40h] [ebp-B0h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x909adf*/
  v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909aee*/
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x909afd*/
  {
    v9 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909aff*/
    v10 = *(_DWORD **)(v8 + 0x1A4); /*0x909b01*/
    *v10 = "TtMultiSphere"; /*0x909b07*/
    v11 = __rdtsc(); /*0x909b0d*/
    v10[1] = v11; /*0x909b17*/
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3; /*0x909b1d*/
  }
  v19 = *a2; /*0x909b2b*/
  sub_903FA0((char *)v24, (_OWORD *)a2[2]); /*0x909b34*/
  sub_8ED410(v22, 0); /*0x909b3f*/
  v12 = *(this + 3); /*0x909b44*/
  v13 = *(this + 4) - 1; /*0x909b4a*/
  v21[3] = a2; /*0x909b4f*/
  v21[2] = v24; /*0x909b53*/
  v20 = v12; /*0x909b57*/
  if ( v13 >= 0 ) /*0x909b5b*/
  {
    v14 = (__m128 *)(v19 + 0x10 * (v13 + 1)); /*0x909b6b*/
    do /*0x909bef*/
    {
      v24[3] = _mm_add_ps( /*0x909bb4*/
                 *(__m128 *)(a2[2] + 0x30),
                 _mm_add_ps(
                   _mm_add_ps(
                     _mm_mul_ps(v24[0], _mm_shuffle_ps(*v14, *v14, 0)),
                     _mm_mul_ps(v24[1], _mm_shuffle_ps(*v14, *v14, 0x55))),
                   _mm_mul_ps(v24[2], _mm_shuffle_ps(*v14, *v14, 0xAA))));
      v23 = v14->m128_i32[3]; /*0x909bc0*/
      v21[0] = v22; /*0x909bc4*/
      v21[1] = v13; /*0x909bc8*/
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int, int))(**(_DWORD **)(v20 + 4) + 0x10))( /*0x909be6*/
        *(_DWORD *)(v20 + 4),
        v21,
        a3,
        a4,
        a5,
        a6);
      --v13; /*0x909be9*/
      v14 += 0xFFFFFFFF; /*0x909bea*/
    }
    while ( v13 >= 0 ); /*0x909bef*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x909bf5*/
  }
  LODWORD(v15) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909c02*/
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) ) /*0x909c11*/
  {
    v16 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909c13*/
    v17 = *(_DWORD **)(v15 + 0x1A4); /*0x909c15*/
    *v17 = "Et"; /*0x909c1b*/
    v15 = __rdtsc(); /*0x909c21*/
    v17[1] = v15; /*0x909c2b*/
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3; /*0x909c31*/
  }
  return v15; /*0x909c37*/
}
