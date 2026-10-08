int __cdecl sub_909F50(__m128 **a1, int *a2, _DWORD *a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // esi
  int v10; // ecx
  __int32 v11; // edi
  __m128 *v12; // esi
  signed int v13; // eax
  unsigned __int64 v14; // rax
  int v15; // esi
  _DWORD *v16; // ecx
  int v18; // [esp+18h] [ebp-D8h]
  __m128 *v19; // [esp+1Ch] [ebp-D4h]
  _DWORD v20[4]; // [esp+20h] [ebp-D0h] BYREF
  _WORD v21[6]; // [esp+30h] [ebp-C0h] BYREF
  __int32 v22; // [esp+3Ch] [ebp-B4h]
  __m128 v23[11]; // [esp+40h] [ebp-B0h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x909f63*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909f6a*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x909f7b*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909f7d*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x909f7f*/
    *v7 = "TtMultiSphere"; /*0x909f85*/
    v8 = __rdtsc(); /*0x909f8b*/
    v7[1] = v8; /*0x909f95*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x909f9b*/
  }
  v9 = *a1; /*0x909fa7*/
  v19 = *a1; /*0x909fae*/
  sub_903FA0((char *)v23, a1[2]); /*0x909fb2*/
  sub_8ED410(v21, 0); /*0x909fbd*/
  v10 = *a2; /*0x909fc5*/
  v20[3] = a1; /*0x909fcb*/
  v20[2] = v23; /*0x909fcf*/
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x909fd8*/
  v11 = 0; /*0x909fdf*/
  if ( v9->m128_i32[3] > 0 ) /*0x909fe3*/
  {
    v12 = v9 + 1; /*0x909fec*/
    do /*0x90a099*/
    {
      v23[3] = _mm_add_ps( /*0x90a033*/
                 a1[2][3],
                 _mm_add_ps(
                   _mm_add_ps(
                     _mm_mul_ps(v23[0], _mm_shuffle_ps(*v12, *v12, 0)),
                     _mm_mul_ps(v23[1], _mm_shuffle_ps(*v12, *v12, 0x55))),
                   _mm_mul_ps(v23[2], _mm_shuffle_ps(*v12, *v12, 0xAA))));
      v22 = v12->m128_i32[3]; /*0x90a043*/
      v20[0] = v21; /*0x90a047*/
      v20[1] = v11; /*0x90a04b*/
      v13 = _RTC_NumErrors_1(); /*0x90a04f*/
      (*(void (__cdecl **)(_DWORD *, int *, _DWORD *, int))(*a3 /*0x90a078*/
                                                          + 0x14 * *(unsigned __int8 *)(*a3 + 0x20 * v13 + v18 + 0x190)
                                                          + 0x994))(
        v20,
        a2,
        a3,
        a4);
      if ( *(_BYTE *)(a4 + 4) ) /*0x90a082*/
        break; /*0x90a08a*/
      ++v11; /*0x90a093*/
      ++v12; /*0x90a094*/
    }
    while ( v11 < v19->m128_i32[3] ); /*0x90a099*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90a09f*/
  }
  LODWORD(v14) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90a0ac*/
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) ) /*0x90a0bb*/
  {
    v15 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90a0bd*/
    v16 = *(_DWORD **)(v14 + 0x1A4); /*0x90a0bf*/
    *v16 = "Et"; /*0x90a0c5*/
    v14 = __rdtsc(); /*0x90a0cb*/
    v16[1] = v14; /*0x90a0d5*/
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3; /*0x90a0db*/
  }
  return v14; /*0x90a0e1*/
}
