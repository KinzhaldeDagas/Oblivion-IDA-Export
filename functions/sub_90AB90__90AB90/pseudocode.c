int __thiscall sub_90AB90(_DWORD *this, _DWORD *a2, _DWORD *a3, int *a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // esi
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
  int v30; // [esp+18h] [ebp-48h]
  int v31; // [esp+1Ch] [ebp-44h]
  int v32; // [esp+1Ch] [ebp-44h]
  int v33; // [esp+20h] [ebp-40h] BYREF
  int v34; // [esp+24h] [ebp-3Ch]
  int v35; // [esp+28h] [ebp-38h]
  _DWORD *v36; // [esp+2Ch] [ebp-34h]
  _DWORD v37[2]; // [esp+30h] [ebp-30h] BYREF
  char v38; // [esp+38h] [ebp-28h]
  int v39; // [esp+5Ch] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v8 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
  {
    v9 = ThreadLocalStoragePointer[TlsIndex];
    v10 = *(_DWORD **)(v8 + 0x1A4);
    *v10 = "LthkBvAgent";
    v10[3] = "checkBvShape";
    v11 = __rdtsc();
    v10[1] = v11;
    *(_DWORD *)(v9 + 0x1A4) = v10 + 4;
  }
  v12 = *a2;
  v35 = a2[2];
  v36 = a2;
  v13 = *(_DWORD *)(v12 + 0xC);
  v34 = a2[1];
  v33 = v13;
  v14 = *(this + 3);
  v37[0] = &off_A9BB8C;
  v38 = 0;
  v39 = 0x7F7FFFFF;
  v37[1] = 0x7F7FFFFF;
  (*(void (__thiscall **)(int, int *, _DWORD *, int *, _DWORD *, _DWORD *))(*(_DWORD *)v14 + 0x10))(
    v14,
    &v33,
    a3,
    a4,
    v37,
    v37);
  if ( v38 )
  {
    v15 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( *(_DWORD *)(v15[TlsIndex] + 0x1A4) < *(_DWORD *)(v15[TlsIndex] + 0x1A8) )
    {
      v16 = v15[TlsIndex];
      v17 = *(_DWORD **)(v16 + 0x1A4);
      v31 = v16;
      *v17 = "Stchild";
      v18 = __rdtsc();
      v17[1] = v18;
      *(_DWORD *)(v31 + 0x1A4) = v17 + 3;
    }
    v19 = *(_DWORD *)(v12 + 0x10);
    v34 = v36[1];
    v20 = *(this + 4);
    v33 = v19;
    if ( !v20 )
    {
      v32 = *(this + 2);
      v30 = *a4;
      v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19);
      v22 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3);
      if ( *((_BYTE *)a4 + 0xC) )
        v23 = v30 + 0x590;
      else
        v23 = v30 + 0x190;
      *(this + 4) = (*(int (__cdecl **)(int *, _DWORD *, int *, int))(v30
                                                                    + 0x14
                                                                    * *(unsigned __int8 *)(v23 + 0x20 * v21 + v22)
                                                                    + 0x990))(
                      &v33,
                      a3,
                      a4,
                      v32);
    }
    (*(void (__thiscall **)(_DWORD, int *, _DWORD *, int *, int, int))(*(_DWORD *)*(this + 4) + 0x10))(
      *(this + 4),
      &v33,
      a3,
      a4,
      a5,
      a6);
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
