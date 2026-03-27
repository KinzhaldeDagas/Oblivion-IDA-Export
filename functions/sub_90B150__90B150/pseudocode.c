int __cdecl sub_90B150(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  int v13; // esi
  void (__cdecl *v14)(int *, _DWORD *, _DWORD *, int (__stdcall ***)(char)); // eax
  _DWORD *v15; // esi
  int v16; // eax
  int v17; // esi
  _DWORD *v18; // ecx
  unsigned __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  unsigned __int64 v22; // rax
  int v23; // esi
  _DWORD *v24; // ecx
  int (__stdcall **v26)(char); // [esp+8h] [ebp-18h] BYREF
  char v27; // [esp+Ch] [ebp-14h]
  int v28; // [esp+10h] [ebp-10h] BYREF
  int v29; // [esp+14h] [ebp-Ch]
  int v30; // [esp+18h] [ebp-8h]
  _DWORD *v31; // [esp+1Ch] [ebp-4h]
  int v32; // [esp+28h] [ebp+8h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "LthkBvAgent";
    v7[3] = "checkBvShape";
    v8 = __rdtsc();
    v26 = (int (__stdcall **)(char))v8;
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 4;
  }
  v9 = a1[2];
  v10 = *a1;
  v31 = a1;
  v30 = v9;
  v11 = *(_DWORD *)(v10 + 0xC);
  v29 = a1[1];
  v28 = v11;
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
  v32 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
  v14 = *(void (__cdecl **)(int *, _DWORD *, _DWORD *, int (__stdcall ***)(char)))(*a3
                                                                                 + 0x14
                                                                                 * *(unsigned __int8 *)(*a3 + 0x20 * v13 + v32 + 0x190)
                                                                                 + 0x994);
  v26 = &off_A9BB84;
  v27 = 0;
  v14(&v28, a2, a3, &v26);
  v15 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v27 )
  {
    v16 = v15[TlsIndex];
    if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) )
    {
      v17 = v15[TlsIndex];
      v18 = *(_DWORD **)(v16 + 0x1A4);
      *v18 = "Stchild";
      v19 = __rdtsc();
      v18[1] = v19;
      *(_DWORD *)(v17 + 0x1A4) = v18 + 3;
      v15 = NtCurrentTeb()->ThreadLocalStoragePointer;
    }
    v20 = *(_DWORD *)(v10 + 0x10);
    v29 = v31[1];
    v28 = v20;
    v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 8))(v20);
    (*(void (__cdecl **)(int *, _DWORD *, _DWORD *, int))(*a3
                                                        + 0x14 * *(unsigned __int8 *)(*a3 + 0x20 * v21 + v32 + 0x190)
                                                        + 0x998))(
      &v28,
      a2,
      a3,
      a4);
  }
  LODWORD(v22) = v15[TlsIndex];
  if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) )
  {
    v23 = v15[TlsIndex];
    v24 = *(_DWORD **)(v22 + 0x1A4);
    *v24 = "lt";
    v22 = __rdtsc();
    v24[1] = v22;
    *(_DWORD *)(v23 + 0x1A4) = v24 + 3;
  }
  return v22;
}
