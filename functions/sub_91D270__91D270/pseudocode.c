int __thiscall sub_91D270(_DWORD **this, int a2, int a3)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // ecx
  unsigned __int64 v7; // rax
  int v8; // edi
  int v9; // esi
  _WORD *v10; // esi
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // edi
  int v15; // ecx
  _DWORD *v16; // ebx
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // ecx
  int v21; // esi
  int v22; // eax
  unsigned __int64 v23; // rax
  int v24; // esi
  _DWORD *v25; // ecx
  int v27; // [esp+1Ch] [ebp-40h]
  char *v29; // [esp+24h] [ebp-38h] BYREF
  int v30; // [esp+28h] [ebp-34h]
  int v31; // [esp+2Ch] [ebp-30h]
  _DWORD *v32; // [esp+30h] [ebp-2Ch] BYREF
  int v33; // [esp+34h] [ebp-28h]
  int v34; // [esp+38h] [ebp-24h]
  __int128 v35; // [esp+3Ch] [ebp-20h] BYREF
  __int128 v36; // [esp+4Ch] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v4 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) )
  {
    v5 = ThreadLocalStoragePointer[TlsIndex];
    v6 = *(_DWORD **)(v4 + 0x1A4);
    *v6 = "TthkPhantomDisplayViewer";
    v7 = __rdtsc();
    v6[1] = v7;
    *(_DWORD *)(v5 + 0x1A4) = v6 + 3;
  }
  v8 = *(_DWORD *)(a2 + 0xBC);
  v29 = 0;
  v30 = 0;
  v31 = 0x80000000;
  if ( v8 >= 0 )
  {
    if ( v8 > 0 )
    {
      v29 = 0;
      v30 = 0;
      v31 = 0x80000000;
      sub_8A6E40((const void **)&v29, v8, 0x80);
      v30 = 0;
      v10 = v29;
      v27 = v8;
      do
      {
        if ( v10 )
          sub_949300(v10);
        v10 += 0x40;
        --v27;
      }
      while ( v27 );
    }
  }
  else
  {
    v9 = v8 << 7;
    do
    {
      (**(void (__thiscall ***)(char *, _DWORD))&v29[v9])(&v29[v9], 0);
      v9 += 0x80;
    }
    while ( v9 < 0 );
  }
  v11 = *(_DWORD *)(a2 + 0xBC);
  v30 = v8;
  v32 = 0;
  v33 = 0;
  v34 = 0x80000000;
  if ( v11 > 0 )
    sub_8A6E40((const void **)&v32, v11 < 0 ? 0 : v11, 4);
  v12 = *(_DWORD *)(a2 + 0xBC);
  v33 = v11;
  v13 = 0;
  if ( v12 > 0 )
  {
    v14 = 0;
    do
    {
      v15 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB8) + 4 * v13);
      (*(void (__thiscall **)(int, __int128 *))(*(_DWORD *)v15 + 0x14))(v15, &v35);
      sub_9492E0(&v29[v14], &v35, &v36);
      v32[v13++] = &v29[v14];
      v14 += 0x80;
    }
    while ( v13 < *(_DWORD *)(a2 + 0xBC) );
  }
  (*(void (__thiscall **)(_DWORD, _DWORD **, int, int))(**(this + 0xFFFFFFFB) + 0x24))(
    *(this + 0xFFFFFFFB),
    &v32,
    dword_BA844C,
    dword_BA8448);
  v16 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v34 >= 0 )
  {
    v17 = *(_DWORD *)(v16[TlsIndex] + 0x19C);
    if ( !v17 )
      v17 = dword_BA7D9C;
    sub_8A75D0(v17, v32, 4 * v34, 0x14);
  }
  v18 = v30;
  if ( v30 > 0 )
  {
    v19 = 0;
    do
    {
      (**(void (__thiscall ***)(char *, _DWORD))&v29[v19])(&v29[v19], 0);
      v19 += 0x80;
      --v18;
    }
    while ( v18 );
  }
  if ( v31 >= 0 )
  {
    v20 = *(_DWORD *)(v16[TlsIndex] + 0x19C);
    if ( !v20 )
      v20 = dword_BA7D9C;
    sub_8A75D0(v20, v29, v31 << 7, 0x14);
  }
  v21 = 0;
  if ( (int)*(this + 2) > 0 )
  {
    do
    {
      v22 = (*(this + 1))[v21];
      (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(**(this + 0xFFFFFFFB) + 0xC))(
        *(this + 0xFFFFFFFB),
        *(_DWORD *)(v22 + 0x1C),
        v22 + 0x14,
        dword_BA8448);
      ++v21;
    }
    while ( v21 < (int)*(this + 2) );
    v16 = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  LODWORD(v23) = v16[TlsIndex];
  if ( *(_DWORD *)(v23 + 0x1A4) < *(_DWORD *)(v23 + 0x1A8) )
  {
    v24 = v16[TlsIndex];
    v25 = *(_DWORD **)(v23 + 0x1A4);
    *v25 = "Et";
    v23 = __rdtsc();
    v25[1] = v23;
    *(_DWORD *)(v24 + 0x1A4) = v25 + 3;
  }
  return v23;
}
