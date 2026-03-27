int __cdecl sub_9043F0(__m128 **a1, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // edi
  __int32 v11; // ecx
  int v12; // esi
  int v13; // eax
  unsigned __int64 v14; // rax
  int v15; // ebx
  _DWORD *v16; // esi
  _DWORD v18[4]; // [esp+10h] [ebp-50h] BYREF
  __m128 v19[4]; // [esp+20h] [ebp-40h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtTransform";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = *a1;
  sub_8B1F70(v19, a1[2], *a1 + 2);
  v18[3] = a1;
  v18[2] = v19;
  v11 = v10->m128_i32[3];
  v18[1] = a1[1];
  v18[0] = v11;
  v12 = (*(int (__thiscall **)(__int32))(*(_DWORD *)v11 + 8))(v11);
  v13 = *(unsigned __int8 *)(*a3 + 0x20 * v12 + (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2) + 0x190);
  (*(void (__cdecl **)(_DWORD *, _DWORD *, _DWORD *, int, int))(*a3 + 0x14 * (v13 + 0x7B)))(v18, a2, a3, a4, a5);
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
