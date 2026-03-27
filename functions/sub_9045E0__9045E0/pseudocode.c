int __cdecl sub_9045E0(__m128 **a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // edi
  __int32 v10; // ecx
  int v11; // esi
  int v12; // eax
  unsigned __int64 v13; // rax
  int v14; // ebx
  _DWORD *v15; // esi
  _DWORD v17[4]; // [esp+10h] [ebp-50h] BYREF
  __m128 v18[4]; // [esp+20h] [ebp-40h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtTransform";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = *a1;
  sub_8B1F70(v18, a1[2], *a1 + 2);
  v17[3] = a1;
  v17[2] = v18;
  v10 = v9->m128_i32[3];
  v17[1] = a1[1];
  v17[0] = v10;
  v11 = (*(int (__thiscall **)(__int32))(*(_DWORD *)v10 + 8))(v10);
  v12 = *(unsigned __int8 *)(*a3 + 0x20 * v11 + (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2) + 0x190);
  (*(void (__cdecl **)(_DWORD *, _DWORD *, _DWORD *, int))(*a3 + 0x14 * v12 + 0x998))(v17, a2, a3, a4);
  LODWORD(v13) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) )
  {
    v14 = ThreadLocalStoragePointer[TlsIndex];
    v15 = *(_DWORD **)(v13 + 0x1A4);
    *v15 = "Et";
    v13 = __rdtsc();
    v15[1] = v13;
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3;
  }
  return v13;
}
