int __thiscall sub_8D5B20(const void **this, int a2, float *a3)
{
  int v3; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  float *v10; // ecx
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  int v16; // ebp
  int v17; // eax
  int v18; // ebp
  _DWORD *v19; // ecx
  unsigned __int64 v20; // rax
  int v21; // eax
  int v22; // ebp
  _DWORD *v23; // ecx
  unsigned __int64 v24; // rax
  int v25; // eax
  int v26; // ebp
  _DWORD *v27; // ecx
  unsigned __int64 v28; // rax
  int v29; // eax
  int v30; // esi
  _DWORD *v31; // ecx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  int v34; // edi
  _DWORD *v35; // ecx
  int v38; // [esp+18h] [ebp-8h]
  int v39; // [esp+24h] [ebp+4h]

  v3 = MEMORY[0xBA9DE4]; /*0x8d5b24*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d5b2d*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d5b34*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8d5b49*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d5b4b*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8d5b4d*/
    *v7 = "TtCollide"; /*0x8d5b53*/
    v8 = __rdtsc(); /*0x8d5b59*/
    v7[1] = v8; /*0x8d5b63*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8d5b69*/
  }
  *(float *)(a2 + 0x160) = *a3; /*0x8d5b81*/
  *(float *)(a2 + 0x164) = a3[1]; /*0x8d5b86*/
  *(float *)(a2 + 0x168) = a3[2]; /*0x8d5b8c*/
  *(float *)(a2 + 0x16C) = a3[3]; /*0x8d5b92*/
  v10 = (float *)(*(_DWORD *)(a2 + 0x74) + 0x10); /*0x8d5b98*/
  *v10 = *a3; /*0x8d5b9f*/
  v10[1] = a3[1]; /*0x8d5ba4*/
  v10[2] = a3[2]; /*0x8d5baa*/
  v10[3] = a3[3]; /*0x8d5bb0*/
  v11 = 0; /*0x8d5bbc*/
  *(float *)(a2 + 0x264) = *(float *)(a2 + 0x270) * a3[2]; /*0x8d5bbe*/
  *(float *)(a2 + 0x268) = (double)*(int *)(a2 + 0x26C) * a3[3]; /*0x8d5bcd*/
  v12 = *(_DWORD *)(a2 + 0x3C); /*0x8d5bd9*/
  ++*(_DWORD *)(a2 + 0x88); /*0x8d5bdf*/
  if ( v12 <= 0 ) /*0x8d5be5*/
  {
LABEL_6:
    v14 = (*(_DWORD *)(a2 + 0x88))-- == 1; /*0x8d5c18*/
    if ( v14 ) /*0x8d5c1e*/
    {
      if ( *(_DWORD *)(a2 + 0x84) ) /*0x8d5c20*/
      {
        if ( !*(_BYTE *)(a2 + 0x90) ) /*0x8d5c2a*/
          sub_899210(a2); /*0x8d5c36*/
      }
    }
    v15 = *(_DWORD *)(a2 + 0x3C); /*0x8d5c41*/
    ++*(_DWORD *)(a2 + 0x88); /*0x8d5c47*/
    v39 = 0; /*0x8d5c4d*/
    if ( v15 <= 0 ) /*0x8d5c55*/
    {
LABEL_18:
      v14 = (*(_DWORD *)(a2 + 0x88))-- == 1; /*0x8d5d28*/
      if ( v14 ) /*0x8d5d2e*/
      {
        if ( *(_DWORD *)(a2 + 0x84) ) /*0x8d5d30*/
        {
          if ( !*(_BYTE *)(a2 + 0x90) ) /*0x8d5d3a*/
            sub_899210(a2); /*0x8d5d46*/
        }
      }
      if ( *(_DWORD *)(a2 + 0x128) ) /*0x8d5d4b*/
      {
        v25 = ThreadLocalStoragePointer[v3]; /*0x8d5d55*/
        if ( *(_DWORD *)(v25 + 0x1A4) < *(_DWORD *)(v25 + 0x1A8) ) /*0x8d5d64*/
        {
          v26 = ThreadLocalStoragePointer[v3]; /*0x8d5d66*/
          v27 = *(_DWORD **)(v25 + 0x1A4); /*0x8d5d68*/
          *v27 = "TtPostCollideCB"; /*0x8d5d6e*/
          v28 = __rdtsc(); /*0x8d5d74*/
          v27[1] = v28; /*0x8d5d7e*/
          *(_DWORD *)(v26 + 0x1A4) = v27 + 3; /*0x8d5d84*/
        }
        sub_8DCE80((int)a3, a2, (int)a3); /*0x8d5d90*/
        v29 = ThreadLocalStoragePointer[v3]; /*0x8d5d95*/
        if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) ) /*0x8d5da9*/
        {
          v30 = ThreadLocalStoragePointer[v3]; /*0x8d5dab*/
          v31 = *(_DWORD **)(v29 + 0x1A4); /*0x8d5dad*/
          *v31 = "Et"; /*0x8d5db3*/
          v32 = __rdtsc(); /*0x8d5db9*/
          v31[1] = v32; /*0x8d5dc3*/
          *(_DWORD *)(v30 + 0x1A4) = v31 + 3; /*0x8d5dc9*/
        }
      }
      LODWORD(v33) = ThreadLocalStoragePointer[v3]; /*0x8d5dcf*/
      if ( *(_DWORD *)(v33 + 0x1A4) >= *(_DWORD *)(v33 + 0x1A8) ) /*0x8d5dde*/
        return v33; /*0x8d5dde*/
    }
    else
    {
      while ( 1 ) /*0x8d5c67*/
      {
        v16 = *(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 4 * v39); /*0x8d5c67*/
        v38 = v16; /*0x8d5c73*/
        sub_8D4290(this, v16, *(int **)(a2 + 0x74)); /*0x8d5c77*/
        if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d5c85*/
          break; /*0x8d5c85*/
        if ( *(_DWORD *)(a2 + 0x140) ) /*0x8d5c8b*/
        {
          v17 = ThreadLocalStoragePointer[v3]; /*0x8d5c95*/
          if ( *(_DWORD *)(v17 + 0x1A4) < *(_DWORD *)(v17 + 0x1A8) ) /*0x8d5ca4*/
          {
            v18 = ThreadLocalStoragePointer[v3]; /*0x8d5ca6*/
            v19 = *(_DWORD **)(v17 + 0x1A4); /*0x8d5ca8*/
            *v19 = "TtIslandPostCollideCb"; /*0x8d5cae*/
            v20 = __rdtsc(); /*0x8d5cb4*/
            v19[1] = v20; /*0x8d5cbe*/
            *(_DWORD *)(v18 + 0x1A4) = v19 + 3; /*0x8d5cc4*/
            v16 = v38; /*0x8d5cca*/
          }
          sub_8DCFA0((int)a3, a2, v16, (int)a3); /*0x8d5cd5*/
          v21 = ThreadLocalStoragePointer[v3]; /*0x8d5cda*/
          if ( *(_DWORD *)(v21 + 0x1A4) < *(_DWORD *)(v21 + 0x1A8) ) /*0x8d5cee*/
          {
            v22 = ThreadLocalStoragePointer[v3]; /*0x8d5cf0*/
            v23 = *(_DWORD **)(v21 + 0x1A4); /*0x8d5cf2*/
            *v23 = "Et"; /*0x8d5cf8*/
            v24 = __rdtsc(); /*0x8d5cfe*/
            v23[1] = v24; /*0x8d5d08*/
            *(_DWORD *)(v22 + 0x1A4) = v23 + 3; /*0x8d5d0e*/
          }
        }
        if ( ++v39 >= *(_DWORD *)(a2 + 0x3C) ) /*0x8d5d22*/
          goto LABEL_18; /*0x8d5d22*/
      }
      v14 = (*(_DWORD *)(a2 + 0x88))-- == 1; /*0x8d5e58*/
      if ( v14 ) /*0x8d5e5e*/
      {
        if ( *(_DWORD *)(a2 + 0x84) ) /*0x8d5e60*/
        {
          if ( !*(_BYTE *)(a2 + 0x90) ) /*0x8d5e6a*/
            sub_899210(a2); /*0x8d5e76*/
        }
      }
      LODWORD(v33) = ThreadLocalStoragePointer[v3]; /*0x8d5e7b*/
      if ( *(_DWORD *)(v33 + 0x1A4) >= *(_DWORD *)(v33 + 0x1A8) ) /*0x8d5e8a*/
        return v33; /*0x8d5e8a*/
    }
LABEL_28:
    v34 = ThreadLocalStoragePointer[v3]; /*0x8d5de0*/
    v35 = *(_DWORD **)(v33 + 0x1A4); /*0x8d5de2*/
    *v35 = "Et"; /*0x8d5de8*/
    v33 = __rdtsc(); /*0x8d5dee*/
    v35[1] = v33; /*0x8d5df8*/
    *(_DWORD *)(v34 + 0x1A4) = v35 + 3; /*0x8d5dfe*/
    return v33; /*0x8d5dfe*/
  }
  while ( 1 ) /*0x8d5bea*/
  {
    v13 = *(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 4 * v11); /*0x8d5bea*/
    sub_8D4590(*(_DWORD *)(v13 + 0x34), *(_DWORD *)(v13 + 0x38), a2, 0); /*0x8d5bfc*/
    if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d5c0a*/
      break; /*0x8d5c0a*/
    if ( ++v11 >= *(_DWORD *)(a2 + 0x3C) ) /*0x8d5c16*/
      goto LABEL_6; /*0x8d5c16*/
  }
  v14 = (*(_DWORD *)(a2 + 0x88))-- == 1; /*0x8d5e0e*/
  if ( v14 ) /*0x8d5e14*/
  {
    if ( *(_DWORD *)(a2 + 0x84) ) /*0x8d5e16*/
    {
      if ( !*(_BYTE *)(a2 + 0x90) ) /*0x8d5e20*/
        sub_899210(a2); /*0x8d5e2c*/
    }
  }
  LODWORD(v33) = ThreadLocalStoragePointer[v3]; /*0x8d5e31*/
  if ( *(_DWORD *)(v33 + 0x1A4) < *(_DWORD *)(v33 + 0x1A8) ) /*0x8d5e40*/
    goto LABEL_28; /*0x8d5e40*/
  return v33; /*0x8d5e04*/
}
