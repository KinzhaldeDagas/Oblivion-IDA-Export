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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91e544*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91e554*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x91e564*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91e566*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x91e568*/
    *v7 = "TthkConstraintViewer"; /*0x91e56e*/
    v8 = __rdtsc(); /*0x91e574*/
    v7[1] = v8; /*0x91e57e*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x91e584*/
  }
  v9 = a2; /*0x91e58a*/
  v10 = 0; /*0x91e592*/
  v36 = 0; /*0x91e596*/
  if ( (int)a2[0xF] > 0 ) /*0x91e59a*/
  {
    do /*0x91e619*/
    {
      v11 = v9[0xE]; /*0x91e5a0*/
      v12 = *(_DWORD *)(*(_DWORD *)(v11 + 4 * v10) + 0x38); /*0x91e5a6*/
      v13 = v11 + 4 * v10; /*0x91e5a9*/
      v14 = 0; /*0x91e5ac*/
      v34 = 0; /*0x91e5b0*/
      if ( v12 > 0 ) /*0x91e5b4*/
      {
        do /*0x91e60d*/
        {
          v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v13 + 0x34) + 4 * v14); /*0x91e5bb*/
          v16 = 0; /*0x91e5c1*/
          if ( *(int *)(v15 + 0x6C) > 0 ) /*0x91e5c5*/
          {
            v17 = 0; /*0x91e5c7*/
            do /*0x91e5ec*/
            {
              sub_91E120(*(_DWORD *)(v17 + *(_DWORD *)(v15 + 0x68)), *(this + 0xFFFFFFFC)); /*0x91e5de*/
              ++v16; /*0x91e5e6*/
              v17 += 0x1C; /*0x91e5e7*/
            }
            while ( v16 < *(_DWORD *)(v15 + 0x6C) ); /*0x91e5ec*/
            v14 = v34; /*0x91e5ee*/
            v10 = v36; /*0x91e5f2*/
            v9 = a2; /*0x91e5f6*/
          }
          v18 = v9[0xE]; /*0x91e5fa*/
          v19 = *(_DWORD *)(*(_DWORD *)(v18 + 4 * v10) + 0x38); /*0x91e600*/
          v13 = v18 + 4 * v10; /*0x91e603*/
          v34 = ++v14; /*0x91e609*/
        }
        while ( v14 < v19 ); /*0x91e60d*/
      }
      v36 = ++v10; /*0x91e615*/
    }
    while ( v10 < v9[0xF] ); /*0x91e619*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91e61b*/
  }
  v20 = 0; /*0x91e625*/
  v35 = 0; /*0x91e629*/
  if ( (int)v9[0x12] > 0 ) /*0x91e62d*/
  {
    do /*0x91e6ac*/
    {
      v21 = v9[0x11]; /*0x91e633*/
      v22 = *(_DWORD *)(*(_DWORD *)(v21 + 4 * v20) + 0x38); /*0x91e639*/
      v23 = v21 + 4 * v20; /*0x91e63c*/
      v24 = 0; /*0x91e63f*/
      v37 = 0; /*0x91e643*/
      if ( v22 > 0 ) /*0x91e647*/
      {
        do /*0x91e6a0*/
        {
          v25 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v23 + 0x34) + 4 * v24); /*0x91e655*/
          v26 = 0; /*0x91e65b*/
          if ( *(int *)(v25 + 0x6C) > 0 ) /*0x91e65f*/
          {
            v27 = 0; /*0x91e661*/
            do /*0x91e67f*/
            {
              sub_91E120(*(_DWORD *)(v27 + *(_DWORD *)(v25 + 0x68)), *(this + 0xFFFFFFFC)); /*0x91e671*/
              ++v26; /*0x91e679*/
              v27 += 0x1C; /*0x91e67a*/
            }
            while ( v26 < *(_DWORD *)(v25 + 0x6C) ); /*0x91e67f*/
            v24 = v37; /*0x91e681*/
            v20 = v35; /*0x91e685*/
            v9 = a2; /*0x91e689*/
          }
          v28 = v9[0x11]; /*0x91e68d*/
          v29 = *(_DWORD *)(*(_DWORD *)(v28 + 4 * v20) + 0x38); /*0x91e693*/
          v23 = v28 + 4 * v20; /*0x91e696*/
          v37 = ++v24; /*0x91e69c*/
        }
        while ( v24 < v29 ); /*0x91e6a0*/
      }
      v35 = ++v20; /*0x91e6a8*/
    }
    while ( v20 < v9[0x12] ); /*0x91e6ac*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91e6ae*/
  }
  LODWORD(v30) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91e6bb*/
  if ( *(_DWORD *)(v30 + 0x1A4) < *(_DWORD *)(v30 + 0x1A8) ) /*0x91e6cb*/
  {
    v31 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91e6cd*/
    v32 = *(_DWORD **)(v30 + 0x1A4); /*0x91e6cf*/
    *v32 = "Et"; /*0x91e6d5*/
    v30 = __rdtsc(); /*0x91e6db*/
    v32[1] = v30; /*0x91e6e5*/
    *(_DWORD *)(v31 + 0x1A4) = v32 + 3; /*0x91e6eb*/
  }
  return v30; /*0x91e6f1*/
}
