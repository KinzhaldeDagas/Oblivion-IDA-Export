int __stdcall sub_8D7920(int a1, float *a2)
{
  int v2; // ebp
  _DWORD *ThreadLocalStoragePointer; // edi
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // ecx
  unsigned __int64 v7; // rax
  float *v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  bool v13; // zf
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v17; // ecx
  _DWORD *v18; // eax
  int v19; // ecx
  _DWORD *v20; // ecx
  unsigned __int64 v21; // rax
  int v22; // eax
  int v23; // ebx
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  int v27; // ebx
  _DWORD *v28; // ecx
  int v29; // eax
  int v30; // ebx
  _DWORD *v31; // ecx
  unsigned __int64 v32; // rax
  int v33; // eax
  int v34; // ebx
  _DWORD *v35; // ecx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  int v38; // edi
  _DWORD *v39; // ecx
  int v41; // [esp+10h] [ebp-18h]
  int v42; // [esp+14h] [ebp-14h]
  int v43; // [esp+2Ch] [ebp+4h]

  v2 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v4 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) )
  {
    v5 = ThreadLocalStoragePointer[TlsIndex];
    v6 = *(_DWORD **)(v4 + 0x1A4);
    *v6 = "LtSimulate";
    v6[3] = "Collide";
    v7 = __rdtsc();
    v6[1] = v7;
    *(_DWORD *)(v5 + 0x1A4) = v6 + 4;
  }
  *(float *)(a1 + 0x160) = *a2;
  *(float *)(a1 + 0x164) = a2[1];
  *(float *)(a1 + 0x168) = a2[2];
  *(float *)(a1 + 0x16C) = a2[3];
  v9 = (float *)(*(_DWORD *)(a1 + 0x74) + 0x10);
  *v9 = *a2;
  v9[1] = a2[1];
  v9[2] = a2[2];
  v9[3] = a2[3];
  v10 = 0;
  *(float *)(a1 + 0x264) = *(float *)(a1 + 0x270) * a2[2];
  *(float *)(a1 + 0x268) = (double)*(int *)(a1 + 0x26C) * a2[3];
  v11 = *(_DWORD *)(a1 + 0x3C);
  ++*(_DWORD *)(a1 + 0x88);
  if ( v11 <= 0 )
  {
LABEL_6:
    v13 = (*(_DWORD *)(a1 + 0x88))-- == 1;
    if ( v13 )
    {
      if ( *(_DWORD *)(a1 + 0x84) )
      {
        if ( !*(_BYTE *)(a1 + 0x90) )
          sub_899210(a1);
      }
    }
    v14 = *(_DWORD *)(a1 + 0x3C);
    ++*(_DWORD *)(a1 + 0x88);
    v41 = 0;
    if ( v14 <= 0 )
    {
LABEL_26:
      v13 = (*(_DWORD *)(a1 + 0x88))-- == 1;
      if ( v13 )
      {
        if ( *(_DWORD *)(a1 + 0x84) )
        {
          if ( !*(_BYTE *)(a1 + 0x90) )
            sub_899210(a1);
        }
      }
      if ( *(_DWORD *)(a1 + 0x128) )
      {
        v33 = ThreadLocalStoragePointer[v2];
        if ( *(_DWORD *)(v33 + 0x1A4) < *(_DWORD *)(v33 + 0x1A8) )
        {
          v34 = ThreadLocalStoragePointer[v2];
          v35 = *(_DWORD **)(v33 + 0x1A4);
          *v35 = "StPostCollideCB";
          v36 = __rdtsc();
          v35[1] = v36;
          *(_DWORD *)(v34 + 0x1A4) = v35 + 3;
        }
        sub_8DCE80((int)a2, a1, (int)a2);
      }
      LODWORD(v37) = ThreadLocalStoragePointer[v2];
      if ( *(_DWORD *)(v37 + 0x1A4) >= *(_DWORD *)(v37 + 0x1A8) )
        return v37;
    }
    else
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 4 * v41);
        v16 = *(_DWORD *)(a1 + 0x74);
        v43 = v15;
        if ( *(_DWORD *)(v15 + 0x60) )
        {
          v42 = *(_DWORD *)(**(_DWORD **)(v15 + 0x5C) + 0x14);
          if ( v42 )
          {
            v17 = ThreadLocalStoragePointer[v2];
            if ( *(_DWORD *)(v17 + 0x1A4) < *(_DWORD *)(v17 + 0x1A8) )
            {
              v18 = *(_DWORD **)(v17 + 0x1A4);
              *v18 = v42;
              v18[1] = 0x3F800000;
              *(_DWORD *)(v17 + 0x1A4) = v18 + 2;
              v15 = v43;
            }
          }
        }
        v19 = ThreadLocalStoragePointer[v2];
        if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) )
        {
          v20 = *(_DWORD **)(v19 + 0x1A4);
          *v20 = "TtNarrowPhase";
          v21 = __rdtsc();
          v20[1] = v21;
          *(_DWORD *)(ThreadLocalStoragePointer[v2] + 0x1A4) = v20 + 3;
          v15 = v43;
        }
        *(_DWORD *)(v16 + 0x28) = *(_DWORD *)v16 + 0x1A50;
        *(_BYTE *)(v16 + 0xC) = 0;
        sub_8E7180(v15 + 0x44, v16);
        v22 = ThreadLocalStoragePointer[v2];
        if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) )
        {
          v23 = ThreadLocalStoragePointer[v2];
          v24 = *(_DWORD **)(v22 + 0x1A4);
          *v24 = "Et";
          v25 = __rdtsc();
          v24[1] = v25;
          *(_DWORD *)(v23 + 0x1A4) = v24 + 3;
        }
        if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
          break;
        if ( *(_DWORD *)(a1 + 0x140) )
        {
          LODWORD(v26) = ThreadLocalStoragePointer[v2];
          if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) )
          {
            v27 = ThreadLocalStoragePointer[v2];
            v28 = *(_DWORD **)(v26 + 0x1A4);
            *v28 = "TtIslandPostCollideCb";
            v26 = __rdtsc();
            v28[1] = v26;
            *(_DWORD *)(v27 + 0x1A4) = v28 + 3;
          }
          sub_8DCFA0(v26, a1, v43, (int)a2);
          v29 = ThreadLocalStoragePointer[v2];
          if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) )
          {
            v30 = ThreadLocalStoragePointer[v2];
            v31 = *(_DWORD **)(v29 + 0x1A4);
            *v31 = "Et";
            v32 = __rdtsc();
            v31[1] = v32;
            *(_DWORD *)(v30 + 0x1A4) = v31 + 3;
          }
        }
        if ( ++v41 >= *(_DWORD *)(a1 + 0x3C) )
          goto LABEL_26;
      }
      v13 = (*(_DWORD *)(a1 + 0x88))-- == 1;
      if ( v13 )
      {
        if ( *(_DWORD *)(a1 + 0x84) )
        {
          if ( !*(_BYTE *)(a1 + 0x90) )
            sub_899210(a1);
        }
      }
      LODWORD(v37) = ThreadLocalStoragePointer[v2];
      if ( *(_DWORD *)(v37 + 0x1A4) >= *(_DWORD *)(v37 + 0x1A8) )
        return v37;
    }
LABEL_35:
    v38 = ThreadLocalStoragePointer[v2];
    v39 = *(_DWORD **)(v37 + 0x1A4);
    *v39 = "lt";
    v37 = __rdtsc();
    v39[1] = v37;
    *(_DWORD *)(v38 + 0x1A4) = v39 + 3;
    return v37;
  }
  while ( 1 )
  {
    v12 = *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 4 * v10);
    sub_8D7400(*(_DWORD **)(v12 + 0x34), *(_DWORD *)(v12 + 0x38), a1);
    if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
      break;
    if ( ++v10 >= *(_DWORD *)(a1 + 0x3C) )
      goto LABEL_6;
  }
  v13 = (*(_DWORD *)(a1 + 0x88))-- == 1;
  if ( v13 )
  {
    if ( *(_DWORD *)(a1 + 0x84) )
    {
      if ( !*(_BYTE *)(a1 + 0x90) )
        sub_899210(a1);
    }
  }
  LODWORD(v37) = ThreadLocalStoragePointer[v2];
  if ( *(_DWORD *)(v37 + 0x1A4) < *(_DWORD *)(v37 + 0x1A8) )
    goto LABEL_35;
  return v37;
}
