int __cdecl sub_8FBE30(int *a1, __m128 **a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // esi
  __m128 *v10; // eax
  __m128 v11; // xmm3
  __m128 v12; // xmm5
  __m128 v13; // xmm0
  __m128 v14; // xmm4
  __m128 v15; // xmm1
  _DWORD *v16; // ecx
  unsigned __int64 v17; // rax
  int v18; // esi
  _DWORD *v19; // ecx
  int v21; // [esp+Ch] [ebp-44h]
  float v22[4]; // [esp+10h] [ebp-40h] BYREF
  __m128 v23; // [esp+20h] [ebp-30h] BYREF
  __m128 v24; // [esp+30h] [ebp-20h] BYREF
  float v25; // [esp+40h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fbe39*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fbe46*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8fbe58*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fbe5a*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8fbe5c*/
    *v7 = "TtSphereTri"; /*0x8fbe62*/
    v8 = __rdtsc(); /*0x8fbe68*/
    v7[1] = v8; /*0x8fbe72*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8fbe78*/
  }
  v9 = *a2; /*0x8fbe81*/
  v21 = *a1; /*0x8fbe91*/
  sub_8D1DB0(*a2 + 1, v22); /*0x8fbe95*/
  v10 = a2[2]; /*0x8fbe9d*/
  v11 = v10[2]; /*0x8fbea0*/
  v12 = v10[1]; /*0x8fbeb2*/
  v13 = _mm_sub_ps(*(__m128 *)(a1[2] + 0x30), v10[3]); /*0x8fbeb6*/
  v14 = _mm_shuffle_ps(v11, v11, 0x44); /*0x8fbebc*/
  v15 = _mm_shuffle_ps(*v10, v12, 0x44); /*0x8fbec6*/
  v23 = _mm_add_ps( /*0x8fbf15*/
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v15, v14, 0x88), _mm_shuffle_ps(v13, v13, 0)),
            _mm_mul_ps(_mm_shuffle_ps(v15, v14, 0xDD), _mm_shuffle_ps(v13, v13, 0x55))),
          _mm_mul_ps(
            _mm_shuffle_ps(_mm_shuffle_ps(*v10, v12, 0xEE), _mm_shuffle_ps(v11, v11, 0xEE), 0x88),
            _mm_shuffle_ps(v13, v13, 0xAA)));
  sub_8D20C0(&v23, v9 + 1, (int)v22, &v24); /*0x8fbf1a*/
  if ( v9->m128_f32[3] + *(float *)(v21 + 0xC) > v25 ) /*0x8fbf35*/
    (*(void (__thiscall **)(int, int *, __m128 **))(*(_DWORD *)a4 + 4))(a4, a1, a2); /*0x8fbf41*/
  v16 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fbf44*/
  LODWORD(v17) = v16[MEMORY[0xBA9DE4]]; /*0x8fbf51*/
  if ( *(_DWORD *)(v17 + 0x1A4) < *(_DWORD *)(v17 + 0x1A8) ) /*0x8fbf60*/
  {
    v18 = v16[MEMORY[0xBA9DE4]]; /*0x8fbf62*/
    v19 = *(_DWORD **)(v17 + 0x1A4); /*0x8fbf64*/
    *v19 = "Et"; /*0x8fbf6a*/
    v17 = __rdtsc(); /*0x8fbf70*/
    v19[1] = v17; /*0x8fbf7a*/
    *(_DWORD *)(v18 + 0x1A4) = v19 + 3; /*0x8fbf80*/
  }
  return v17; /*0x8fbf86*/
}
