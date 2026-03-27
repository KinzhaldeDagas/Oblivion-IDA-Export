int __cdecl sub_8CC050(int a1, int a2, int a3)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // ecx
  unsigned __int64 v7; // rax
  int v8; // edi
  int v9; // esi
  char v10; // cl
  bool v11; // dl
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  unsigned __int8 v14; // cl
  int v15; // ebx
  int v16; // ebp
  int v17; // eax
  int v18; // eax
  int i; // eax
  int v20; // ebp
  _DWORD *v21; // ebx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  int j; // ecx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int k; // edx
  int v30; // ecx
  int *v31; // eax
  int v32; // ecx
  int v33; // ecx
  int v34; // ebx
  int v35; // eax
  int v36; // ebp
  int v37; // ebx
  int v38; // edx
  unsigned __int16 v39; // dx
  _DWORD *v40; // eax
  int v41; // ebp
  bool v42; // al
  bool v43; // al
  int v44; // ebp
  unsigned __int16 v45; // ax
  _DWORD *v46; // ecx
  int v47; // eax
  int v48; // esi
  _DWORD *v49; // ecx
  unsigned __int64 v50; // rax
  char v53; // [esp+1Ch] [ebp+8h]
  int v54; // [esp+20h] [ebp+Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v4 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) )
  {
    v5 = ThreadLocalStoragePointer[TlsIndex];
    v6 = *(_DWORD **)(v4 + 0x1A4);
    *v6 = "TtMergeIsle";
    v7 = __rdtsc();
    v6[1] = v7;
    *(_DWORD *)(v5 + 0x1A4) = v6 + 3;
  }
  v8 = a2;
  v9 = a3;
  if ( *(_DWORD *)(a2 + 0x38) < *(_DWORD *)(a3 + 0x38) )
  {
    v8 = a3;
    v9 = a2;
  }
  ++*(_DWORD *)(a1 + 0x88);
  v10 = *(_BYTE *)(v8 + 0x29);
  v11 = v10 || *(_BYTE *)(v9 + 0x29);
  if ( *(_BYTE *)(v8 + 0x28) || (v53 = 0, *(_BYTE *)(v9 + 0x28)) )
    v53 = 1;
  if ( v11 )
  {
    if ( v10 )
    {
      if ( !*(_BYTE *)(v9 + 0x29) )
      {
        *(_BYTE *)(v9 + 0x28) = 1;
        sub_8CBA20(a1, v9);
        goto LABEL_22;
      }
      v13 = *(_BYTE *)(v9 + 0x24);
      if ( *(_BYTE *)(v8 + 0x24) < v13 )
        v13 = *(_BYTE *)(v8 + 0x24);
      v14 = *(_BYTE *)(v8 + 0x25);
      *(_BYTE *)(v8 + 0x24) = v13;
      v12 = *(_BYTE *)(v9 + 0x25);
      if ( v14 < v12 )
        v12 = v14;
    }
    else
    {
      *(_BYTE *)(v8 + 0x28) = 1;
      sub_8CBA20(a1, v8);
      *(_BYTE *)(v8 + 0x24) = *(_BYTE *)(v9 + 0x24);
      v12 = *(_BYTE *)(v9 + 0x25);
    }
    *(_BYTE *)(v8 + 0x25) = v12;
  }
LABEL_22:
  sub_8E6C30(v8 + 0x44, v9 + 0x44);
  v15 = *(_DWORD *)(v8 + 0x38);
  v16 = v15 + *(_DWORD *)(v9 + 0x38);
  v17 = *(_DWORD *)(v8 + 0x3C) & 0x3FFFFFFF;
  if ( v17 < v16 )
  {
    v18 = 2 * v17;
    if ( v16 >= v18 )
      v18 = v15 + *(_DWORD *)(v9 + 0x38);
    sub_8A6E40((const void **)(v8 + 0x34), v18, 4);
  }
  *(_DWORD *)(v8 + 0x38) = v16;
  for ( i = 0; i < *(_DWORD *)(v9 + 0x38); ++v15 )
  {
    *(_DWORD *)(*(_DWORD *)(v8 + 0x34) + 4 * (unsigned __int16)v15) = *(_DWORD *)(*(_DWORD *)(v9 + 0x34) + 4 * i);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 0x34) + 4 * i) + 0x54) = v8;
    *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 0x34) + 4 * i++) + 0x8C) = v15;
  }
  v20 = *(_DWORD *)(v8 + 0x60);
  v21 = (_DWORD *)(v8 + 0x5C);
  v22 = v20 + *(_DWORD *)(v9 + 0x60);
  v23 = *(_DWORD *)(v8 + 0x64) & 0x3FFFFFFF;
  v54 = v22;
  if ( v23 < v22 )
  {
    v24 = 2 * v23;
    if ( v22 < v24 )
      v22 = v24;
    sub_8A6E40((const void **)(v8 + 0x5C), v22, 4);
    v22 = v54;
  }
  *(_DWORD *)(v8 + 0x60) = v22;
  for ( j = 0; j < *(_DWORD *)(v9 + 0x60); ++j )
  {
    v26 = *(_DWORD *)(*(_DWORD *)(v9 + 0x5C) + 4 * j);
    if ( v26 )
    {
      *(_DWORD *)(*v21 + 4 * v20) = v26;
      *(_DWORD *)(*(_DWORD *)(*v21 + 4 * v20++) + 0xC) = v8;
    }
  }
  v27 = *(_DWORD *)(v8 + 0x64) & 0x3FFFFFFF;
  if ( v27 < v20 )
  {
    v28 = 2 * v27;
    if ( v20 >= v28 )
      v28 = v20;
    sub_8A6E40((const void **)(v8 + 0x5C), v28, 4);
  }
  *(_DWORD *)(v8 + 0x60) = v20;
  for ( k = 0; k < *(_DWORD *)(v9 + 0x38); ++k )
  {
    v30 = *(_DWORD *)(*(_DWORD *)(v9 + 0x34) + 4 * k);
    v31 = *(int **)(v30 + 0x68);
    v32 = *(_DWORD *)(v30 + 0x6C) - 1;
    if ( v32 >= 0 )
    {
      v33 = v32 + 1;
      do
      {
        v34 = *v31;
        v31 += 7;
        --v33;
        *(_DWORD *)(v34 + 8) = v8;
      }
      while ( v33 );
    }
  }
  v35 = *(_DWORD *)(v9 + 8);
  if ( *(_DWORD *)(v8 + 8) > v35 )
    v35 = *(_DWORD *)(v8 + 8);
  v36 = *(_DWORD *)(v8 + 0x10);
  v37 = *(_DWORD *)(v8 + 0x18);
  *(_DWORD *)(v8 + 8) = v35;
  *(_DWORD *)(v8 + 0xC) += *(_DWORD *)(v9 + 0xC);
  v38 = *(_DWORD *)(v8 + 0x14);
  *(_DWORD *)(v8 + 0x10) = *(_DWORD *)(v9 + 0x10) + v36;
  *(_DWORD *)(v8 + 0x18) = *(_DWORD *)(v9 + 0x18) + v37;
  *(_DWORD *)(v8 + 0x14) = *(_DWORD *)(v9 + 0x14) + v38;
  v39 = *(_WORD *)(v9 + 0x20);
  if ( *(_BYTE *)(v9 + 0x29) )
    v40 = (_DWORD *)(a1 + 0x38);
  else
    v40 = (_DWORD *)(a1 + 0x44);
  v41 = v40[1];
  if ( v39 < v41 - 1 )
  {
    *(_DWORD *)(*v40 + 4 * v39) = *(_DWORD *)(*v40 + 4 * v41 - 4);
    *(_WORD *)(*(_DWORD *)(*v40 + 4 * v39) + 0x20) = v39;
  }
  --v40[1];
  v42 = *(_BYTE *)(v8 + 0x26) || *(_BYTE *)(v9 + 0x26);
  *(_BYTE *)(v8 + 0x26) = v42;
  v43 = *(_BYTE *)(v8 + 0x27) || *(_BYTE *)(v9 + 0x27);
  *(_BYTE *)(v8 + 0x27) = v43;
  *(_BYTE *)(v8 + 0x28) = v53;
  if ( *(_WORD *)(v9 + 0x22) == 0xFFFF || *(_WORD *)(v8 + 0x22) != 0xFFFF )
  {
    v44 = a1;
  }
  else
  {
    v44 = a1;
    *(_WORD *)(v8 + 0x22) = *(_WORD *)(a1 + 0x54);
    if ( *(_DWORD *)(a1 + 0x54) == (*(_DWORD *)(a1 + 0x58) & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)(a1 + 0x50), 4);
    *(_DWORD *)(*(_DWORD *)(a1 + 0x50) + 4 * (*(_DWORD *)(a1 + 0x54))++) = v8;
  }
  v45 = *(_WORD *)(v9 + 0x22);
  if ( v45 != 0xFFFF )
  {
    *(_DWORD *)(*(_DWORD *)(v44 + 0x50) + 4 * v45) = 0;
    *(_WORD *)(v9 + 0x22) = 0xFFFF;
  }
  (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  v46 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v47 = v46[TlsIndex];
  if ( *(_DWORD *)(v47 + 0x1A4) < *(_DWORD *)(v47 + 0x1A8) )
  {
    v48 = v46[TlsIndex];
    v49 = *(_DWORD **)(v47 + 0x1A4);
    *v49 = "Et";
    v50 = __rdtsc();
    v49[1] = v50;
    *(_DWORD *)(v48 + 0x1A4) = v49 + 3;
  }
  if ( (*(_DWORD *)(v44 + 0x88))-- == 1 )
  {
    if ( *(_DWORD *)(v44 + 0x84) )
    {
      if ( !*(_BYTE *)(v44 + 0x90) )
        sub_899210(v44);
    }
  }
  return v8;
}
