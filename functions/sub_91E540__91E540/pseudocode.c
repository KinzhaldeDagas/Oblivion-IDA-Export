int __thiscall sub_91E540(int **this, _DWORD *a2, int a3)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  _DWORD *v9; // edx
  int v10; // edi
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // ebx
  int v17; // edi
  int v18; // eax
  int v19; // ebx
  int v20; // edi
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // ecx
  int v25; // esi
  int v26; // ebx
  int v27; // edi
  int v28; // eax
  int v29; // ebx
  unsigned __int64 v30; // rax
  int v31; // esi
  _DWORD *v32; // ecx
  int v34; // [esp+Ch] [ebp-8h]
  int v35; // [esp+Ch] [ebp-8h]
  int v36; // [esp+10h] [ebp-4h]
  int v37; // [esp+10h] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TthkConstraintViewer";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = a2;
  v10 = 0;
  v36 = 0;
  if ( (int)a2[0xF] > 0 )
  {
    do
    {
      v11 = v9[0xE];
      v12 = *(_DWORD *)(*(_DWORD *)(v11 + 4 * v10) + 0x38);
      v13 = v11 + 4 * v10;
      v14 = 0;
      v34 = 0;
      if ( v12 > 0 )
      {
        do
        {
          v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v13 + 0x34) + 4 * v14);
          v16 = 0;
          if ( *(int *)(v15 + 0x6C) > 0 )
          {
            v17 = 0;
            do
            {
              sub_91E120(*(_DWORD *)(v17 + *(_DWORD *)(v15 + 0x68)), *(this + 0xFFFFFFFC));
              ++v16;
              v17 += 0x1C;
            }
            while ( v16 < *(_DWORD *)(v15 + 0x6C) );
            v14 = v34;
            v10 = v36;
            v9 = a2;
          }
          v18 = v9[0xE];
          v19 = *(_DWORD *)(*(_DWORD *)(v18 + 4 * v10) + 0x38);
          v13 = v18 + 4 * v10;
          v34 = ++v14;
        }
        while ( v14 < v19 );
      }
      v36 = ++v10;
    }
    while ( v10 < v9[0xF] );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  v20 = 0;
  v35 = 0;
  if ( (int)v9[0x12] > 0 )
  {
    do
    {
      v21 = v9[0x11];
      v22 = *(_DWORD *)(*(_DWORD *)(v21 + 4 * v20) + 0x38);
      v23 = v21 + 4 * v20;
      v24 = 0;
      v37 = 0;
      if ( v22 > 0 )
      {
        do
        {
          v25 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v23 + 0x34) + 4 * v24);
          v26 = 0;
          if ( *(int *)(v25 + 0x6C) > 0 )
          {
            v27 = 0;
            do
            {
              sub_91E120(*(_DWORD *)(v27 + *(_DWORD *)(v25 + 0x68)), *(this + 0xFFFFFFFC));
              ++v26;
              v27 += 0x1C;
            }
            while ( v26 < *(_DWORD *)(v25 + 0x6C) );
            v24 = v37;
            v20 = v35;
            v9 = a2;
          }
          v28 = v9[0x11];
          v29 = *(_DWORD *)(*(_DWORD *)(v28 + 4 * v20) + 0x38);
          v23 = v28 + 4 * v20;
          v37 = ++v24;
        }
        while ( v24 < v29 );
      }
      v35 = ++v20;
    }
    while ( v20 < v9[0x12] );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  LODWORD(v30) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v30 + 0x1A4) < *(_DWORD *)(v30 + 0x1A8) )
  {
    v31 = ThreadLocalStoragePointer[TlsIndex];
    v32 = *(_DWORD **)(v30 + 0x1A4);
    *v32 = "Et";
    v30 = __rdtsc();
    v32[1] = v30;
    *(_DWORD *)(v31 + 0x1A4) = v32 + 3;
  }
  return v30;
}
