int __stdcall sub_8FD4A0(_DWORD *a1, _DWORD *a2, int a3, int a4)
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

  v4 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtSphereSphere";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = _mm_sub_ps(*(__m128 *)(a2[2] + 0x30), *(__m128 *)(a1[2] + 0x30));
  v11 = _mm_mul_ps(v10, v10);
  v12 = *(float *)(*a1 + 0xC) + *(float *)(*a2 + 0xC);
  if ( (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0])) < v12 * v12 )
    (*(void (__thiscall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)a4 + 4))(a4, a1, a2);
  LODWORD(v13) = ThreadLocalStoragePointer[v4];
  if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) )
  {
    v14 = ThreadLocalStoragePointer[v4];
    v15 = *(_DWORD **)(v13 + 0x1A4);
    *v15 = "Et";
    v13 = __rdtsc();
    v15[1] = v13;
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3;
  }
  return v13;
}
