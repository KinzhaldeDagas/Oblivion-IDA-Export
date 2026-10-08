int __cdecl sub_8FD590(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  double v12; // st7
  unsigned __int64 v13; // rax
  int v14; // esi
  _DWORD *v15; // ecx

  v4 = MEMORY[0xBA9DE4]; /*0x8fd598*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fd5a0*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fd5a7*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8fd5b6*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fd5b8*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8fd5ba*/
    *v8 = "TtSphereSphere"; /*0x8fd5c0*/
    v9 = __rdtsc(); /*0x8fd5c6*/
    v8[1] = v9; /*0x8fd5d0*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8fd5d6*/
  }
  v10 = _mm_sub_ps(*(__m128 *)(a2[2] + 0x30), *(__m128 *)(a1[2] + 0x30)); /*0x8fd5f5*/
  v11 = _mm_mul_ps(v10, v10); /*0x8fd5f8*/
  v12 = *(float *)(*a1 + 0xC) + *(float *)(*a2 + 0xC); /*0x8fd61b*/
  if ( (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0] /*0x8fd62f*/
             + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0])) < v12 * v12 )
    (*(void (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)a4 + 4))(a4, a1, a2); /*0x8fd638*/
  LODWORD(v13) = ThreadLocalStoragePointer[v4]; /*0x8fd63b*/
  if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) ) /*0x8fd64a*/
  {
    v14 = ThreadLocalStoragePointer[v4]; /*0x8fd64c*/
    v15 = *(_DWORD **)(v13 + 0x1A4); /*0x8fd64e*/
    *v15 = "Et"; /*0x8fd654*/
    v13 = __rdtsc(); /*0x8fd65a*/
    v15[1] = v13; /*0x8fd664*/
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3; /*0x8fd66a*/
  }
  return v13; /*0x8fd670*/
}
