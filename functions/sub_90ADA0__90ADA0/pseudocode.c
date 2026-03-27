int __cdecl sub_90ADA0(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // ecx
  int v11; // ebx
  int v12; // ecx
  int v13; // esi
  void (__cdecl *v14)(int *, _DWORD *, _DWORD *, _DWORD *, _DWORD *); // ecx
  _DWORD *v15; // ecx
  int v16; // eax
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // ecx
  unsigned __int64 v22; // rax
  int v23; // esi
  _DWORD *v24; // ecx
  int v26; // [esp+18h] [ebp-48h]
  int v27; // [esp+1Ch] [ebp-44h]
  int v28; // [esp+20h] [ebp-40h] BYREF
  int v29; // [esp+24h] [ebp-3Ch]
  int v30; // [esp+28h] [ebp-38h]
  _DWORD *v31; // [esp+2Ch] [ebp-34h]
  _DWORD v32[2]; // [esp+30h] [ebp-30h] BYREF
  char v33; // [esp+38h] [ebp-28h]
  int v34; // [esp+5Ch] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "LthkBvAgent";
    v8[3] = "checkBvShape";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4;
  }
  v10 = a1[2];
  v11 = *a1;
  v31 = a1;
  v30 = v10;
  v12 = *(_DWORD *)(v11 + 0xC);
  v29 = a1[1];
  v28 = v12;
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12);
  v27 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
  v14 = *(void (__cdecl **)(int *, _DWORD *, _DWORD *, _DWORD *, _DWORD *))(*a3
                                                                          + 0x14
                                                                          * (*(unsigned __int8 *)(*a3
                                                                                                + 0x20 * v13
                                                                                                + v27
                                                                                                + 0x190)
                                                                           + 0x7B));
  v32[0] = &off_A9BB8C;
  v33 = 0;
  v34 = 0x7F7FFFFF;
  v32[1] = 0x7F7FFFFF;
  v14(&v28, a2, a3, v32, v32);
  if ( v33 )
  {
    v15 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( *(_DWORD *)(v15[TlsIndex] + 0x1A4) < *(_DWORD *)(v15[TlsIndex] + 0x1A8) )
    {
      v16 = v15[TlsIndex];
      v17 = *(_DWORD **)(v16 + 0x1A4);
      v26 = v16;
      *v17 = "Stchild";
      v18 = __rdtsc();
      v17[1] = v18;
      *(_DWORD *)(v26 + 0x1A4) = v17 + 3;
    }
    v19 = *(_DWORD *)(v11 + 0x10);
    v29 = v31[1];
    v28 = v19;
    v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19);
    (*(void (__cdecl **)(int *, _DWORD *, _DWORD *, int, int))(*a3
                                                             + 0x14
                                                             * (*(unsigned __int8 *)(*a3 + 0x20 * v20 + v27 + 0x190)
                                                              + 0x7B)))(
      &v28,
      a2,
      a3,
      a4,
      a5);
  }
  v21 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v22) = v21[TlsIndex];
  if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) )
  {
    v23 = v21[TlsIndex];
    v24 = *(_DWORD **)(v22 + 0x1A4);
    *v24 = "lt";
    v22 = __rdtsc();
    v24[1] = v22;
    *(_DWORD *)(v23 + 0x1A4) = v24 + 3;
  }
  return v22;
}
