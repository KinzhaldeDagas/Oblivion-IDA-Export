int __cdecl sub_909940(__m128 **a1, int *a2, _DWORD *a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // edi
  int v10; // ecx
  __int32 v11; // esi
  __m128 *v12; // edi
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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x909953*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90995a*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x90996b*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90996d*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x90996f*/
    *v7 = "TtMultiSphere"; /*0x909975*/
    v8 = __rdtsc(); /*0x90997b*/
    v7[1] = v8; /*0x909985*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x90998b*/
  }
  v9 = *a1; /*0x909997*/
  v19 = *a1; /*0x90999e*/
  sub_903FA0((char *)v23, a1[2]); /*0x9099a2*/
  sub_8ED410(v21, 0); /*0x9099ad*/
  v10 = *a2; /*0x9099b5*/
  v20[3] = a1; /*0x9099bb*/
  v20[2] = v23; /*0x9099bf*/
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x9099c8*/
  v11 = 0; /*0x9099cf*/
  if ( v9->m128_i32[3] > 0 ) /*0x9099d3*/
  {
    v12 = v9 + 1; /*0x9099dc*/
    do /*0x909a7f*/
    {
      v23[3] = _mm_add_ps( /*0x909a23*/
                 a1[2][3],
                 _mm_add_ps(
                   _mm_add_ps(
                     _mm_mul_ps(v23[0], _mm_shuffle_ps(*v12, *v12, 0)),
                     _mm_mul_ps(v23[1], _mm_shuffle_ps(*v12, *v12, 0x55))),
                   _mm_mul_ps(v23[2], _mm_shuffle_ps(*v12, *v12, 0xAA))));
      v22 = v12->m128_i32[3]; /*0x909a33*/
      v20[0] = v21; /*0x909a37*/
      v20[1] = v11; /*0x909a3b*/
      v13 = _RTC_NumErrors_1(); /*0x909a3f*/
      (*(void (__cdecl **)(_DWORD *, int *, _DWORD *, int))(*a3 /*0x909a68*/
                                                          + 0x14 * *(unsigned __int8 *)(*a3 + 0x20 * v13 + v18 + 0x190)
                                                          + 0x998))(
        v20,
        a2,
        a3,
        a4);
      ++v11; /*0x909a79*/
      ++v12; /*0x909a7a*/
    }
    while ( v11 < v19->m128_i32[3] ); /*0x909a7f*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x909a85*/
  }
  LODWORD(v14) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909a92*/
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) ) /*0x909aa1*/
  {
    v15 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x909aa3*/
    v16 = *(_DWORD **)(v14 + 0x1A4); /*0x909aa5*/
    *v16 = "Et"; /*0x909aab*/
    v14 = __rdtsc(); /*0x909ab1*/
    v16[1] = v14; /*0x909abb*/
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3; /*0x909ac1*/
  }
  return v14; /*0x909ac7*/
}
