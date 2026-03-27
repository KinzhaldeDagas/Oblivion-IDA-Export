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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtMultiSphere";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = *a1;
  v19 = *a1;
  sub_903FA0((char *)v23, a1[2]);
  sub_8ED410(v21, 0);
  v10 = *a2;
  v20[3] = a1;
  v20[2] = v23;
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
  v11 = 0;
  if ( v9->m128_i32[3] > 0 )
  {
    v12 = v9 + 1;
    do
    {
      v23[3] = _mm_add_ps(
                 a1[2][3],
                 _mm_add_ps(
                   _mm_add_ps(
                     _mm_mul_ps(v23[0], _mm_shuffle_ps(*v12, *v12, 0)),
                     _mm_mul_ps(v23[1], _mm_shuffle_ps(*v12, *v12, 0x55))),
                   _mm_mul_ps(v23[2], _mm_shuffle_ps(*v12, *v12, 0xAA))));
      v22 = v12->m128_i32[3];
      v20[0] = v21;
      v20[1] = v11;
      v13 = _RTC_NumErrors_1();
      (*(void (__cdecl **)(_DWORD *, int *, _DWORD *, int))(*a3
                                                          + 0x14 * *(unsigned __int8 *)(*a3 + 0x20 * v13 + v18 + 0x190)
                                                          + 0x998))(
        v20,
        a2,
        a3,
        a4);
      ++v11;
      ++v12;
    }
    while ( v11 < v19->m128_i32[3] );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  LODWORD(v14) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) )
  {
    v15 = ThreadLocalStoragePointer[TlsIndex];
    v16 = *(_DWORD **)(v14 + 0x1A4);
    *v16 = "Et";
    v14 = __rdtsc();
    v16[1] = v14;
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3;
  }
  return v14;
}
