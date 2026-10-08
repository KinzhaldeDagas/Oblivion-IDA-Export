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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91d284*/
  v4 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91d28b*/
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) ) /*0x91d29c*/
  {
    v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91d29e*/
    v6 = *(_DWORD **)(v4 + 0x1A4); /*0x91d2a0*/
    *v6 = "TthkPhantomDisplayViewer"; /*0x91d2a6*/
    v7 = __rdtsc(); /*0x91d2ac*/
    v6[1] = v7; /*0x91d2b6*/
    *(_DWORD *)(v5 + 0x1A4) = v6 + 3; /*0x91d2bc*/
  }
  v8 = *(_DWORD *)(a2 + 0xBC); /*0x91d2c5*/
  v29 = 0; /*0x91d2d4*/
  v30 = 0; /*0x91d2d8*/
  v31 = 0x80000000; /*0x91d2dc*/
  if ( v8 >= 0 ) /*0x91d2e0*/
  {
    if ( v8 > 0 ) /*0x91d2fe*/
    {
      v29 = 0; /*0x91d302*/
      v30 = 0; /*0x91d306*/
      v31 = 0x80000000; /*0x91d30a*/
      sub_8A6E40((const void **)&v29, v8, 0x80); /*0x91d31b*/
      v30 = 0; /*0x91d325*/
      v10 = v29; /*0x91d32d*/
      v27 = v8; /*0x91d331*/
      do /*0x91d35a*/
      {
        if ( v10 ) /*0x91d342*/
          sub_949300(v10); /*0x91d346*/
        v10 += 0x40; /*0x91d34f*/
        --v27; /*0x91d356*/
      }
      while ( v27 ); /*0x91d35a*/
    }
  }
  else
  {
    v9 = v8 << 7; /*0x91d2e4*/
    do /*0x91d2fa*/
    {
      (**(void (__thiscall ***)(char *, _DWORD))&v29[v9])(&v29[v9], 0); /*0x91d2f2*/
      v9 += 0x80; /*0x91d2f4*/
    }
    while ( v9 < 0 ); /*0x91d2fa*/
  }
  v11 = *(_DWORD *)(a2 + 0xBC); /*0x91d35c*/
  v30 = v8; /*0x91d366*/
  v32 = 0; /*0x91d36a*/
  v33 = 0; /*0x91d36e*/
  v34 = 0x80000000; /*0x91d372*/
  if ( v11 > 0 )
    sub_8A6E40((const void **)&v32, v11 < 0 ? 0 : v11, 4);
  v12 = *(_DWORD *)(a2 + 0xBC); /*0x91d398*/
  v33 = v11; /*0x91d39e*/
  v13 = 0; /*0x91d3a2*/
  if ( v12 > 0 ) /*0x91d3a6*/
  {
    v14 = 0; /*0x91d3a8*/
    do /*0x91d3f6*/
    {
      v15 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB8) + 4 * v13); /*0x91d3b6*/
      (*(void (__thiscall **)(int, __int128 *))(*(_DWORD *)v15 + 0x14))(v15, &v35); /*0x91d3c0*/
      sub_9492E0(&v29[v14], &v35, &v36); /*0x91d3d4*/
      v32[v13++] = &v29[v14]; /*0x91d3e4*/
      v14 += 0x80; /*0x91d3ee*/
    }
    while ( v13 < *(_DWORD *)(a2 + 0xBC) ); /*0x91d3f6*/
  }
  (*(void (__thiscall **)(_DWORD, _DWORD **, int, int))(**(this + 0xFFFFFFFB) + 0x24))( /*0x91d412*/
    *(this + 0xFFFFFFFB),
    &v32,
    unk_BA844C,
    unk_BA8448);
  v16 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91d41b*/
  if ( v34 >= 0 ) /*0x91d422*/
  {
    v17 = *(_DWORD *)(v16[MEMORY[0xBA9DE4]] + 0x19C); /*0x91d42d*/
    if ( !v17 ) /*0x91d435*/
      v17 = unk_BA7D9C; /*0x91d437*/
    sub_8A75D0(v17, v32, 4 * v34, 0x14); /*0x91d44d*/
  }
  v18 = v30; /*0x91d452*/
  if ( v30 > 0 ) /*0x91d458*/
  {
    v19 = 0; /*0x91d45a*/
    do /*0x91d474*/
    {
      (**(void (__thiscall ***)(char *, _DWORD))&v29[v19])(&v29[v19], 0); /*0x91d46b*/
      v19 += 0x80; /*0x91d46d*/
      --v18; /*0x91d473*/
    }
    while ( v18 ); /*0x91d474*/
  }
  if ( v31 >= 0 ) /*0x91d47c*/
  {
    v20 = *(_DWORD *)(v16[MEMORY[0xBA9DE4]] + 0x19C); /*0x91d487*/
    if ( !v20 ) /*0x91d48f*/
      v20 = unk_BA7D9C; /*0x91d491*/
    sub_8A75D0(v20, v29, v31 << 7, 0x14); /*0x91d4a7*/
  }
  v21 = 0; /*0x91d4b3*/
  if ( (int)*(this + 2) > 0 ) /*0x91d4b7*/
  {
    do /*0x91d4e3*/
    {
      v22 = (*(this + 1))[v21]; /*0x91d4c3*/
      (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(**(this + 0xFFFFFFFB) + 0xC))( /*0x91d4da*/
        *(this + 0xFFFFFFFB),
        *(_DWORD *)(v22 + 0x1C),
        v22 + 0x14,
        unk_BA8448);
      ++v21; /*0x91d4e0*/
    }
    while ( v21 < (int)*(this + 2) ); /*0x91d4e3*/
    v16 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91d4e5*/
  }
  LODWORD(v23) = v16[MEMORY[0xBA9DE4]]; /*0x91d4f2*/
  if ( *(_DWORD *)(v23 + 0x1A4) < *(_DWORD *)(v23 + 0x1A8) ) /*0x91d501*/
  {
    v24 = v16[MEMORY[0xBA9DE4]]; /*0x91d503*/
    v25 = *(_DWORD **)(v23 + 0x1A4); /*0x91d505*/
    *v25 = "Et"; /*0x91d50b*/
    v23 = __rdtsc(); /*0x91d511*/
    v25[1] = v23; /*0x91d51b*/
    *(_DWORD *)(v24 + 0x1A4) = v25 + 3; /*0x91d521*/
  }
  return v23; /*0x91d527*/
}
