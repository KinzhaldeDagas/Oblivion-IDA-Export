int __cdecl sub_906090(__m128 **a1, int a2, __m128 *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __int32 v10; // edx
  __m128 v11; // xmm0
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  int v14; // esi
  _DWORD *v15; // ecx
  _DWORD v17[7]; // [esp+4h] [ebp-ECh] BYREF
  __m128 v18; // [esp+20h] [ebp-D0h] BYREF
  __m128 v19; // [esp+30h] [ebp-C0h]
  __m128 v20[3]; // [esp+40h] [ebp-B0h] BYREF
  __m128 *v21; // [esp+70h] [ebp-80h]
  __m128 **v22; // [esp+74h] [ebp-7Ch]
  int v23; // [esp+78h] [ebp-78h]
  _BYTE v24[48]; // [esp+80h] [ebp-70h] BYREF
  __m128 v25[4]; // [esp+B0h] [ebp-40h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtMopp";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  sub_8B1FF0(v25, *(__m128 **)(a2 + 8), a1[2]);
  (*(void (__thiscall **)(_DWORD, __m128 *, __int32, __m128 *))((*a1)->m128_i32[0] + 0xC))(
    *a1,
    v25,
    a3->m128_i32[2],
    &v18);
  sub_88FD90((__m128 *)&v17[3], *(__m128 **)(a2 + 8), a3 + 1);
  v10 = a3->m128_i32[2];
  v11 = _mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0);
  v20[0] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v11), v18), _mm_mul_ps(v11, v19));
  v20[1] = _mm_add_ps(v20[0], *(__m128 *)&v17[3]);
  v22 = a1;
  v23 = a2;
  v20[2] = _mm_add_ps(
             _mm_mul_ps(v11, _mm_sub_ps(v19, v18)),
             _mm_shuffle_ps((__m128)(unsigned int)v10, (__m128)(unsigned int)v10, 0));
  v21 = a3;
  sub_940A30((int)v24, (int)a1, (int)v20, a4, a5);
  v12 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v13) = v12[TlsIndex];
  if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) )
  {
    v14 = v12[TlsIndex];
    v15 = *(_DWORD **)(v13 + 0x1A4);
    *v15 = "Et";
    v13 = __rdtsc();
    v15[1] = v13;
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3;
  }
  return v13;
}
