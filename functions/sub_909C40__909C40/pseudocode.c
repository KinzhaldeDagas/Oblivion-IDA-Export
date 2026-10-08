int __cdecl sub_909C40(__m128 **a1, int *a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // edi
  int v11; // ecx
  __int32 v12; // esi
  __m128 *v13; // edi
  signed int v14; // eax
  unsigned __int64 v15; // rax
  int v16; // esi
  _DWORD *v17; // ecx
  int v19; // [esp+18h] [ebp-D8h]
  __m128 *v20; // [esp+1Ch] [ebp-D4h]
  _DWORD v21[4]; // [esp+20h] [ebp-D0h] BYREF
  _WORD v22[6]; // [esp+30h] [ebp-C0h] BYREF
  __int32 v23; // [esp+3Ch] [ebp-B4h]
  __m128 v24[11]; // [esp+40h] [ebp-B0h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x909c53*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909c5a*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x909c6b*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909c6d*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x909c6f*/
    *v8 = "TtMultiSphere"; /*0x909c75*/
    v9 = __rdtsc(); /*0x909c7b*/
    v8[1] = v9; /*0x909c85*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x909c8b*/
  }
  v10 = *a1; /*0x909c97*/
  v20 = *a1; /*0x909c9e*/
  sub_903FA0((char *)v24, a1[2]); /*0x909ca2*/
  sub_8ED410(v22, 0); /*0x909cad*/
  v11 = *a2; /*0x909cb5*/
  v21[3] = a1; /*0x909cbb*/
  v21[2] = v24; /*0x909cbf*/
  v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x909cc8*/
  v12 = 0; /*0x909ccf*/
  if ( v10->m128_i32[3] > 0 ) /*0x909cd3*/
  {
    v13 = v10 + 1; /*0x909cdc*/
    do /*0x909d82*/
    {
      v24[3] = _mm_add_ps( /*0x909d23*/
                 a1[2][3],
                 _mm_add_ps(
                   _mm_add_ps(
                     _mm_mul_ps(v24[0], _mm_shuffle_ps(*v13, *v13, 0)),
                     _mm_mul_ps(v24[1], _mm_shuffle_ps(*v13, *v13, 0x55))),
                   _mm_mul_ps(v24[2], _mm_shuffle_ps(*v13, *v13, 0xAA))));
      v23 = v13->m128_i32[3]; /*0x909d33*/
      v21[0] = v22; /*0x909d37*/
      v21[1] = v12; /*0x909d3b*/
      v14 = _RTC_NumErrors_1(); /*0x909d3f*/
      (*(void (__cdecl **)(_DWORD *, int *, _DWORD *, int, int))(*a3 /*0x909d6f*/
                                                               + 0x14
                                                               * (*(unsigned __int8 *)(*a3 + 0x20 * v14 + v19 + 0x190)
                                                                + 0x7B)))(
        v21,
        a2,
        a3,
        a4,
        a5);
      ++v12; /*0x909d7c*/
      ++v13; /*0x909d7d*/
    }
    while ( v12 < v20->m128_i32[3] ); /*0x909d82*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x909d88*/
  }
  LODWORD(v15) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909d95*/
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) ) /*0x909da4*/
  {
    v16 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909da6*/
    v17 = *(_DWORD **)(v15 + 0x1A4); /*0x909da8*/
    *v17 = "Et"; /*0x909dae*/
    v15 = __rdtsc(); /*0x909db4*/
    v17[1] = v15; /*0x909dbe*/
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3; /*0x909dc4*/
  }
  return v15; /*0x909dca*/
}
