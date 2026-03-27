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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtMultiSphere";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = *a1;
  v20 = *a1;
  sub_903FA0((char *)v24, a1[2]);
  sub_8ED410(v22, 0);
  v11 = *a2;
  v21[3] = a1;
  v21[2] = v24;
  v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
  v12 = 0;
  if ( v10->m128_i32[3] > 0 )
  {
    v13 = v10 + 1;
    do
    {
      v24[3] = _mm_add_ps(
                 a1[2][3],
                 _mm_add_ps(
                   _mm_add_ps(
                     _mm_mul_ps(v24[0], _mm_shuffle_ps(*v13, *v13, 0)),
                     _mm_mul_ps(v24[1], _mm_shuffle_ps(*v13, *v13, 0x55))),
                   _mm_mul_ps(v24[2], _mm_shuffle_ps(*v13, *v13, 0xAA))));
      v23 = v13->m128_i32[3];
      v21[0] = v22;
      v21[1] = v12;
      v14 = _RTC_NumErrors_1();
      (*(void (__cdecl **)(_DWORD *, int *, _DWORD *, int, int))(*a3
                                                               + 0x14
                                                               * (*(unsigned __int8 *)(*a3 + 0x20 * v14 + v19 + 0x190)
                                                                + 0x7B)))(
        v21,
        a2,
        a3,
        a4,
        a5);
      ++v12;
      ++v13;
    }
    while ( v12 < v20->m128_i32[3] );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  LODWORD(v15) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) )
  {
    v16 = ThreadLocalStoragePointer[TlsIndex];
    v17 = *(_DWORD **)(v15 + 0x1A4);
    *v17 = "Et";
    v15 = __rdtsc();
    v17[1] = v15;
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3;
  }
  return v15;
}
