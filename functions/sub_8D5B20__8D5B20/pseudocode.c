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

  v3 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtCollide";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  *(float *)(a2 + 0x160) = *a3;
  *(float *)(a2 + 0x164) = a3[1];
  *(float *)(a2 + 0x168) = a3[2];
  *(float *)(a2 + 0x16C) = a3[3];
  v10 = (float *)(*(_DWORD *)(a2 + 0x74) + 0x10);
  *v10 = *a3;
  v10[1] = a3[1];
  v10[2] = a3[2];
  v10[3] = a3[3];
  v11 = 0;
  *(float *)(a2 + 0x264) = *(float *)(a2 + 0x270) * a3[2];
  *(float *)(a2 + 0x268) = (double)*(int *)(a2 + 0x26C) * a3[3];
  v12 = *(_DWORD *)(a2 + 0x3C);
  ++*(_DWORD *)(a2 + 0x88);
  if ( v12 <= 0 )
  {
LABEL_6:
    v14 = (*(_DWORD *)(a2 + 0x88))-- == 1;
    if ( v14 )
    {
      if ( *(_DWORD *)(a2 + 0x84) )
      {
        if ( !*(_BYTE *)(a2 + 0x90) )
          sub_899210(a2);
      }
    }
    v15 = *(_DWORD *)(a2 + 0x3C);
    ++*(_DWORD *)(a2 + 0x88);
    v39 = 0;
    if ( v15 <= 0 )
    {
LABEL_18:
      v14 = (*(_DWORD *)(a2 + 0x88))-- == 1;
      if ( v14 )
      {
        if ( *(_DWORD *)(a2 + 0x84) )
        {
          if ( !*(_BYTE *)(a2 + 0x90) )
            sub_899210(a2);
        }
      }
      if ( *(_DWORD *)(a2 + 0x128) )
      {
        v25 = ThreadLocalStoragePointer[v3];
        if ( *(_DWORD *)(v25 + 0x1A4) < *(_DWORD *)(v25 + 0x1A8) )
        {
          v26 = ThreadLocalStoragePointer[v3];
          v27 = *(_DWORD **)(v25 + 0x1A4);
          *v27 = "TtPostCollideCB";
          v28 = __rdtsc();
          v27[1] = v28;
          *(_DWORD *)(v26 + 0x1A4) = v27 + 3;
        }
        sub_8DCE80((int)a3, a2, (int)a3);
        v29 = ThreadLocalStoragePointer[v3];
        if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) )
        {
          v30 = ThreadLocalStoragePointer[v3];
          v31 = *(_DWORD **)(v29 + 0x1A4);
          *v31 = "Et";
          v32 = __rdtsc();
          v31[1] = v32;
          *(_DWORD *)(v30 + 0x1A4) = v31 + 3;
        }
      }
      LODWORD(v33) = ThreadLocalStoragePointer[v3];
      if ( *(_DWORD *)(v33 + 0x1A4) >= *(_DWORD *)(v33 + 0x1A8) )
        return v33;
    }
    else
    {
      while ( 1 )
      {
        v16 = *(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 4 * v39);
        v38 = v16;
        sub_8D4290(this, v16, *(int **)(a2 + 0x74));
        if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
          break;
        if ( *(_DWORD *)(a2 + 0x140) )
        {
          v17 = ThreadLocalStoragePointer[v3];
          if ( *(_DWORD *)(v17 + 0x1A4) < *(_DWORD *)(v17 + 0x1A8) )
          {
            v18 = ThreadLocalStoragePointer[v3];
            v19 = *(_DWORD **)(v17 + 0x1A4);
            *v19 = "TtIslandPostCollideCb";
            v20 = __rdtsc();
            v19[1] = v20;
            *(_DWORD *)(v18 + 0x1A4) = v19 + 3;
            v16 = v38;
          }
          sub_8DCFA0((int)a3, a2, v16, (int)a3);
          v21 = ThreadLocalStoragePointer[v3];
          if ( *(_DWORD *)(v21 + 0x1A4) < *(_DWORD *)(v21 + 0x1A8) )
          {
            v22 = ThreadLocalStoragePointer[v3];
            v23 = *(_DWORD **)(v21 + 0x1A4);
            *v23 = "Et";
            v24 = __rdtsc();
            v23[1] = v24;
            *(_DWORD *)(v22 + 0x1A4) = v23 + 3;
          }
        }
        if ( ++v39 >= *(_DWORD *)(a2 + 0x3C) )
          goto LABEL_18;
      }
      v14 = (*(_DWORD *)(a2 + 0x88))-- == 1;
      if ( v14 )
      {
        if ( *(_DWORD *)(a2 + 0x84) )
        {
          if ( !*(_BYTE *)(a2 + 0x90) )
            sub_899210(a2);
        }
      }
      LODWORD(v33) = ThreadLocalStoragePointer[v3];
      if ( *(_DWORD *)(v33 + 0x1A4) >= *(_DWORD *)(v33 + 0x1A8) )
        return v33;
    }
LABEL_28:
    v34 = ThreadLocalStoragePointer[v3];
    v35 = *(_DWORD **)(v33 + 0x1A4);
    *v35 = "Et";
    v33 = __rdtsc();
    v35[1] = v33;
    *(_DWORD *)(v34 + 0x1A4) = v35 + 3;
    return v33;
  }
  while ( 1 )
  {
    v13 = *(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 4 * v11);
    sub_8D4590(*(_DWORD *)(v13 + 0x34), *(_DWORD *)(v13 + 0x38), a2, 0);
    if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
      break;
    if ( ++v11 >= *(_DWORD *)(a2 + 0x3C) )
      goto LABEL_6;
  }
  v14 = (*(_DWORD *)(a2 + 0x88))-- == 1;
  if ( v14 )
  {
    if ( *(_DWORD *)(a2 + 0x84) )
    {
      if ( !*(_BYTE *)(a2 + 0x90) )
        sub_899210(a2);
    }
  }
  LODWORD(v33) = ThreadLocalStoragePointer[v3];
  if ( *(_DWORD *)(v33 + 0x1A4) < *(_DWORD *)(v33 + 0x1A8) )
    goto LABEL_28;
  return v33;
}
