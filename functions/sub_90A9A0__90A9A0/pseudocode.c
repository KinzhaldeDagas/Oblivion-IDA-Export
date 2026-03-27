int __thiscall sub_90A9A0(_DWORD *this, _DWORD *a2, _DWORD *a3, int *a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v13; // ecx
  int v14; // ecx
  _DWORD *v15; // ecx
  int v16; // eax
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  _DWORD *v25; // ecx
  unsigned __int64 v26; // rax
  int v27; // esi
  _DWORD *v28; // ecx
  int (__stdcall **v30)(char); // [esp+14h] [ebp-18h] BYREF
  int v31; // [esp+18h] [ebp-14h]
  int v32; // [esp+1Ch] [ebp-10h] BYREF
  int v33; // [esp+20h] [ebp-Ch]
  int v34; // [esp+24h] [ebp-8h]
  _DWORD *v35; // [esp+28h] [ebp-4h]
  int v36; // [esp+30h] [ebp+4h]
  int v37; // [esp+38h] [ebp+Ch]
  int v38; // [esp+38h] [ebp+Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "LthkBvAgent";
    v9[3] = "checkBvShape";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4;
  }
  v11 = *a2;
  v34 = a2[2];
  v35 = a2;
  v13 = *(_DWORD *)(v11 + 0xC);
  v33 = a2[1];
  v32 = v13;
  v14 = *(this + 3);
  v30 = &off_A9BB84;
  LOBYTE(v31) = 0;
  (*(void (__thiscall **)(int, int *, _DWORD *, int *, int (__stdcall ***)(char)))(*(_DWORD *)v14 + 8))(
    v14,
    &v32,
    a3,
    a4,
    &v30);
  if ( (_BYTE)v31 )
  {
    v15 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( *(_DWORD *)(v15[TlsIndex] + 0x1A4) < *(_DWORD *)(v15[TlsIndex] + 0x1A8) )
    {
      v16 = v15[TlsIndex];
      v17 = *(_DWORD **)(v16 + 0x1A4);
      v37 = v16;
      *v17 = "Stchild";
      v18 = __rdtsc();
      v17[1] = v18;
      *(_DWORD *)(v37 + 0x1A4) = v17 + 3;
    }
    v19 = *(_DWORD *)(v11 + 0x10);
    v33 = v35[1];
    v20 = *(this + 4);
    v32 = v19;
    if ( !v20 )
    {
      v38 = *(this + 2);
      v36 = *a4;
      v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19);
      v22 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3);
      if ( *((_BYTE *)a4 + 0xC) )
        v23 = v36 + 0x590;
      else
        v23 = v36 + 0x190;
      *(this + 4) = (*(int (__cdecl **)(int *, _DWORD *, int *, int))(v36
                                                                    + 0x14
                                                                    * *(unsigned __int8 *)(v23 + 0x20 * v21 + v22)
                                                                    + 0x990))(
                      &v32,
                      a3,
                      a4,
                      v38);
    }
    (*(void (__thiscall **)(_DWORD, int *, _DWORD *, int *, int))(*(_DWORD *)*(this + 4) + 0x14))(
      *(this + 4),
      &v32,
      a3,
      a4,
      a5);
  }
  else
  {
    v24 = *(this + 4);
    if ( v24 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 0x18))(v24);
      *(this + 4) = 0;
    }
  }
  v25 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v26) = v25[TlsIndex];
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) )
  {
    v27 = v25[TlsIndex];
    v28 = *(_DWORD **)(v26 + 0x1A4);
    *v28 = "lt";
    v26 = __rdtsc();
    v28[1] = v26;
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3;
  }
  return v26;
}
