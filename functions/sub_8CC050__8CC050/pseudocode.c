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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8cc051*/
  v4 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8cc05e*/
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) ) /*0x8cc071*/
  {
    v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8cc073*/
    v6 = *(_DWORD **)(v4 + 0x1A4); /*0x8cc075*/
    *v6 = "TtMergeIsle"; /*0x8cc07b*/
    v7 = __rdtsc(); /*0x8cc081*/
    v6[1] = v7; /*0x8cc08b*/
    *(_DWORD *)(v5 + 0x1A4) = v6 + 3; /*0x8cc091*/
  }
  v8 = a2; /*0x8cc097*/
  v9 = a3; /*0x8cc09b*/
  if ( *(_DWORD *)(a2 + 0x38) < *(_DWORD *)(a3 + 0x38) ) /*0x8cc0a5*/
  {
    v8 = a3; /*0x8cc0a9*/
    v9 = a2; /*0x8cc0ab*/
  }
  ++*(_DWORD *)(a1 + 0x88); /*0x8cc0b1*/
  v10 = *(_BYTE *)(v8 + 0x29); /*0x8cc0b7*/
  v11 = v10 || *(_BYTE *)(v9 + 0x29); /*0x8cc0c9*/
  if ( *(_BYTE *)(v8 + 0x28) || (v53 = 0, *(_BYTE *)(v9 + 0x28)) ) /*0x8cc0d2*/
    v53 = 1; /*0x8cc0de*/
  if ( v11 ) /*0x8cc0e5*/
  {
    if ( v10 ) /*0x8cc0e9*/
    {
      if ( !*(_BYTE *)(v9 + 0x29) ) /*0x8cc104*/
      {
        *(_BYTE *)(v9 + 0x28) = 1; /*0x8cc10d*/
        sub_8CBA20(a1, v9); /*0x8cc111*/
        goto LABEL_22; /*0x8cc119*/
      }
      v13 = *(_BYTE *)(v9 + 0x24); /*0x8cc11b*/
      if ( *(_BYTE *)(v8 + 0x24) < v13 ) /*0x8cc123*/
        v13 = *(_BYTE *)(v8 + 0x24); /*0x8cc125*/
      v14 = *(_BYTE *)(v8 + 0x25); /*0x8cc127*/
      *(_BYTE *)(v8 + 0x24) = v13; /*0x8cc12a*/
      v12 = *(_BYTE *)(v9 + 0x25); /*0x8cc12d*/
      if ( v14 < v12 ) /*0x8cc132*/
        v12 = v14; /*0x8cc134*/
    }
    else
    {
      *(_BYTE *)(v8 + 0x28) = 1; /*0x8cc0ed*/
      sub_8CBA20(a1, v8); /*0x8cc0f1*/
      *(_BYTE *)(v8 + 0x24) = *(_BYTE *)(v9 + 0x24); /*0x8cc0f9*/
      v12 = *(_BYTE *)(v9 + 0x25); /*0x8cc0fc*/
    }
    *(_BYTE *)(v8 + 0x25) = v12; /*0x8cc136*/
  }
LABEL_22:
  sub_8E6C30(v8 + 0x44, v9 + 0x44); /*0x8cc139*/
  v15 = *(_DWORD *)(v8 + 0x38); /*0x8cc146*/
  v16 = v15 + *(_DWORD *)(v9 + 0x38); /*0x8cc152*/
  v17 = *(_DWORD *)(v8 + 0x3C) & 0x3FFFFFFF; /*0x8cc154*/
  if ( v17 < v16 ) /*0x8cc15e*/
  {
    v18 = 2 * v17; /*0x8cc160*/
    if ( v16 >= v18 ) /*0x8cc164*/
      v18 = v15 + *(_DWORD *)(v9 + 0x38); /*0x8cc166*/
    sub_8A6E40((const void **)(v8 + 0x34), v18, 4); /*0x8cc16c*/
  }
  *(_DWORD *)(v8 + 0x38) = v16; /*0x8cc174*/
  for ( i = 0; i < *(_DWORD *)(v9 + 0x38); ++v15 ) /*0x8cc17e*/
  {
    *(_DWORD *)(*(_DWORD *)(v8 + 0x34) + 4 * (unsigned __int16)v15) = *(_DWORD *)(*(_DWORD *)(v9 + 0x34) + 4 * i); /*0x8cc18c*/
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 0x34) + 4 * i) + 0x54) = v8; /*0x8cc196*/
    *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 0x34) + 4 * i++) + 0x8C) = v15; /*0x8cc19f*/
  }
  v20 = *(_DWORD *)(v8 + 0x60); /*0x8cc1af*/
  v21 = (_DWORD *)(v8 + 0x5C); /*0x8cc1b8*/
  v22 = v20 + *(_DWORD *)(v9 + 0x60); /*0x8cc1bb*/
  v23 = *(_DWORD *)(v8 + 0x64) & 0x3FFFFFFF; /*0x8cc1bd*/
  v54 = v22; /*0x8cc1c5*/
  if ( v23 < v22 ) /*0x8cc1c9*/
  {
    v24 = 2 * v23; /*0x8cc1cb*/
    if ( v22 < v24 ) /*0x8cc1cf*/
      v22 = v24; /*0x8cc1d1*/
    sub_8A6E40((const void **)(v8 + 0x5C), v22, 4); /*0x8cc1d7*/
    v22 = v54; /*0x8cc1dc*/
  }
  *(_DWORD *)(v8 + 0x60) = v22; /*0x8cc1e3*/
  for ( j = 0; j < *(_DWORD *)(v9 + 0x60); ++j ) /*0x8cc1ed*/
  {
    v26 = *(_DWORD *)(*(_DWORD *)(v9 + 0x5C) + 4 * j); /*0x8cc1f3*/
    if ( v26 ) /*0x8cc1f8*/
    {
      *(_DWORD *)(*v21 + 4 * v20) = v26; /*0x8cc1fc*/
      *(_DWORD *)(*(_DWORD *)(*v21 + 4 * v20++) + 0xC) = v8; /*0x8cc204*/
    }
  }
  v27 = *(_DWORD *)(v8 + 0x64) & 0x3FFFFFFF; /*0x8cc213*/
  if ( v27 < v20 ) /*0x8cc21a*/
  {
    v28 = 2 * v27; /*0x8cc21c*/
    if ( v20 >= v28 ) /*0x8cc220*/
      v28 = v20; /*0x8cc222*/
    sub_8A6E40((const void **)(v8 + 0x5C), v28, 4); /*0x8cc228*/
  }
  *(_DWORD *)(v8 + 0x60) = v20; /*0x8cc230*/
  for ( k = 0; k < *(_DWORD *)(v9 + 0x38); ++k ) /*0x8cc23a*/
  {
    v30 = *(_DWORD *)(*(_DWORD *)(v9 + 0x34) + 4 * k); /*0x8cc243*/
    v31 = *(int **)(v30 + 0x68); /*0x8cc246*/
    v32 = *(_DWORD *)(v30 + 0x6C) - 1; /*0x8cc24c*/
    if ( v32 >= 0 ) /*0x8cc24d*/
    {
      v33 = v32 + 1; /*0x8cc24f*/
      do /*0x8cc259*/
      {
        v34 = *v31; /*0x8cc250*/
        v31 += 7; /*0x8cc252*/
        --v33; /*0x8cc255*/
        *(_DWORD *)(v34 + 8) = v8; /*0x8cc256*/
      }
      while ( v33 ); /*0x8cc259*/
    }
  }
  v35 = *(_DWORD *)(v9 + 8); /*0x8cc263*/
  if ( *(_DWORD *)(v8 + 8) > v35 ) /*0x8cc26b*/
    v35 = *(_DWORD *)(v8 + 8); /*0x8cc26d*/
  v36 = *(_DWORD *)(v8 + 0x10); /*0x8cc26f*/
  v37 = *(_DWORD *)(v8 + 0x18); /*0x8cc272*/
  *(_DWORD *)(v8 + 8) = v35; /*0x8cc275*/
  *(_DWORD *)(v8 + 0xC) += *(_DWORD *)(v9 + 0xC); /*0x8cc27b*/
  v38 = *(_DWORD *)(v8 + 0x14); /*0x8cc283*/
  *(_DWORD *)(v8 + 0x10) = *(_DWORD *)(v9 + 0x10) + v36; /*0x8cc286*/
  *(_DWORD *)(v8 + 0x18) = *(_DWORD *)(v9 + 0x18) + v37; /*0x8cc28e*/
  *(_DWORD *)(v8 + 0x14) = *(_DWORD *)(v9 + 0x14) + v38; /*0x8cc296*/
  v39 = *(_WORD *)(v9 + 0x20); /*0x8cc29c*/
  if ( *(_BYTE *)(v9 + 0x29) ) /*0x8cc299*/
    v40 = (_DWORD *)(a1 + 0x38); /*0x8cc2a8*/
  else
    v40 = (_DWORD *)(a1 + 0x44); /*0x8cc2ad*/
  v41 = v40[1]; /*0x8cc2b0*/
  if ( v39 < v41 - 1 ) /*0x8cc2bb*/
  {
    *(_DWORD *)(*v40 + 4 * v39) = *(_DWORD *)(*v40 + 4 * v41 - 4); /*0x8cc2c3*/
    *(_WORD *)(*(_DWORD *)(*v40 + 4 * v39) + 0x20) = v39; /*0x8cc2cb*/
  }
  --v40[1]; /*0x8cc2cf*/
  v42 = *(_BYTE *)(v8 + 0x26) || *(_BYTE *)(v9 + 0x26); /*0x8cc2e4*/
  *(_BYTE *)(v8 + 0x26) = v42; /*0x8cc2e6*/
  v43 = *(_BYTE *)(v8 + 0x27) || *(_BYTE *)(v9 + 0x27); /*0x8cc2fb*/
  *(_BYTE *)(v8 + 0x27) = v43; /*0x8cc301*/
  *(_BYTE *)(v8 + 0x28) = v53; /*0x8cc309*/
  if ( *(_WORD *)(v9 + 0x22) == 0xFFFF || *(_WORD *)(v8 + 0x22) != 0xFFFF ) /*0x8cc316*/
  {
    v44 = a1; /*0x8cc354*/
  }
  else
  {
    v44 = a1; /*0x8cc318*/
    *(_WORD *)(v8 + 0x22) = *(_WORD *)(a1 + 0x54); /*0x8cc323*/
    if ( *(_DWORD *)(a1 + 0x54) == (*(_DWORD *)(a1 + 0x58) & 0x3FFFFFFF) ) /*0x8cc335*/
      sub_8A6EE0((const void **)(a1 + 0x50), 4); /*0x8cc33a*/
    *(_DWORD *)(*(_DWORD *)(a1 + 0x50) + 4 * (*(_DWORD *)(a1 + 0x54))++) = v8; /*0x8cc34c*/
  }
  v45 = *(_WORD *)(v9 + 0x22); /*0x8cc358*/
  if ( v45 != 0xFFFF ) /*0x8cc35f*/
  {
    *(_DWORD *)(*(_DWORD *)(v44 + 0x50) + 4 * v45) = 0; /*0x8cc367*/
    *(_WORD *)(v9 + 0x22) = 0xFFFF; /*0x8cc36e*/
  }
  (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x8cc378*/
  v46 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8cc37a*/
  v47 = v46[MEMORY[0xBA9DE4]]; /*0x8cc387*/
  if ( *(_DWORD *)(v47 + 0x1A4) < *(_DWORD *)(v47 + 0x1A8) ) /*0x8cc396*/
  {
    v48 = v46[MEMORY[0xBA9DE4]]; /*0x8cc398*/
    v49 = *(_DWORD **)(v47 + 0x1A4); /*0x8cc39a*/
    *v49 = "Et"; /*0x8cc3a0*/
    v50 = __rdtsc(); /*0x8cc3a6*/
    v49[1] = v50; /*0x8cc3b0*/
    *(_DWORD *)(v48 + 0x1A4) = v49 + 3; /*0x8cc3b6*/
  }
  if ( (*(_DWORD *)(v44 + 0x88))-- == 1 ) /*0x8cc3bc*/
  {
    if ( *(_DWORD *)(v44 + 0x84) ) /*0x8cc3c4*/
    {
      if ( !*(_BYTE *)(v44 + 0x90) ) /*0x8cc3ce*/
        sub_899210(v44); /*0x8cc3da*/
    }
  }
  return v8; /*0x8cc3e1*/
}
