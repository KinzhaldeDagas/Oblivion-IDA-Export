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

  v2 = MEMORY[0xBA9DE4]; /*0x8d7925*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d792d*/
  v4 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d7934*/
  if ( *(_DWORD *)(v4 + 0x1A4) < *(_DWORD *)(v4 + 0x1A8) ) /*0x8d7943*/
  {
    v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d7945*/
    v6 = *(_DWORD **)(v4 + 0x1A4); /*0x8d7947*/
    *v6 = "LtSimulate"; /*0x8d794d*/
    v6[3] = "Collide"; /*0x8d7953*/
    v7 = __rdtsc(); /*0x8d795a*/
    v6[1] = v7; /*0x8d7964*/
    *(_DWORD *)(v5 + 0x1A4) = v6 + 4; /*0x8d796a*/
  }
  *(float *)(a1 + 0x160) = *a2; /*0x8d7982*/
  *(float *)(a1 + 0x164) = a2[1]; /*0x8d7987*/
  *(float *)(a1 + 0x168) = a2[2]; /*0x8d798d*/
  *(float *)(a1 + 0x16C) = a2[3]; /*0x8d7993*/
  v9 = (float *)(*(_DWORD *)(a1 + 0x74) + 0x10); /*0x8d7999*/
  *v9 = *a2; /*0x8d79a0*/
  v9[1] = a2[1]; /*0x8d79a5*/
  v9[2] = a2[2]; /*0x8d79ab*/
  v9[3] = a2[3]; /*0x8d79b1*/
  v10 = 0; /*0x8d79bd*/
  *(float *)(a1 + 0x264) = *(float *)(a1 + 0x270) * a2[2]; /*0x8d79bf*/
  *(float *)(a1 + 0x268) = (double)*(int *)(a1 + 0x26C) * a2[3]; /*0x8d79ce*/
  v11 = *(_DWORD *)(a1 + 0x3C); /*0x8d79da*/
  ++*(_DWORD *)(a1 + 0x88); /*0x8d79e0*/
  if ( v11 <= 0 ) /*0x8d79e6*/
  {
LABEL_6:
    v13 = (*(_DWORD *)(a1 + 0x88))-- == 1; /*0x8d7a20*/
    if ( v13 ) /*0x8d7a26*/
    {
      if ( *(_DWORD *)(a1 + 0x84) ) /*0x8d7a28*/
      {
        if ( !*(_BYTE *)(a1 + 0x90) ) /*0x8d7a32*/
          sub_899210(a1); /*0x8d7a3e*/
      }
    }
    v14 = *(_DWORD *)(a1 + 0x3C); /*0x8d7a49*/
    ++*(_DWORD *)(a1 + 0x88); /*0x8d7a4f*/
    v41 = 0; /*0x8d7a55*/
    if ( v14 <= 0 ) /*0x8d7a5d*/
    {
LABEL_26:
      v13 = (*(_DWORD *)(a1 + 0x88))-- == 1; /*0x8d7bfc*/
      if ( v13 ) /*0x8d7c02*/
      {
        if ( *(_DWORD *)(a1 + 0x84) ) /*0x8d7c04*/
        {
          if ( !*(_BYTE *)(a1 + 0x90) ) /*0x8d7c0e*/
            sub_899210(a1); /*0x8d7c1a*/
        }
      }
      if ( *(_DWORD *)(a1 + 0x128) ) /*0x8d7c1f*/
      {
        v33 = ThreadLocalStoragePointer[v2]; /*0x8d7c29*/
        if ( *(_DWORD *)(v33 + 0x1A4) < *(_DWORD *)(v33 + 0x1A8) ) /*0x8d7c38*/
        {
          v34 = ThreadLocalStoragePointer[v2]; /*0x8d7c3a*/
          v35 = *(_DWORD **)(v33 + 0x1A4); /*0x8d7c3c*/
          *v35 = "StPostCollideCB"; /*0x8d7c42*/
          v36 = __rdtsc(); /*0x8d7c48*/
          v35[1] = v36; /*0x8d7c52*/
          *(_DWORD *)(v34 + 0x1A4) = v35 + 3; /*0x8d7c58*/
        }
        sub_8DCE80((int)a2, a1, (int)a2); /*0x8d7c64*/
      }
      LODWORD(v37) = ThreadLocalStoragePointer[v2]; /*0x8d7c6c*/
      if ( *(_DWORD *)(v37 + 0x1A4) >= *(_DWORD *)(v37 + 0x1A8) ) /*0x8d7c7b*/
        return v37; /*0x8d7c7b*/
    }
    else
    {
      while ( 1 ) /*0x8d7a6a*/
      {
        v15 = *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 4 * v41); /*0x8d7a6a*/
        v16 = *(_DWORD *)(a1 + 0x74); /*0x8d7a72*/
        v43 = v15; /*0x8d7a75*/
        if ( *(_DWORD *)(v15 + 0x60) ) /*0x8d7a6d*/
        {
          v42 = *(_DWORD *)(**(_DWORD **)(v15 + 0x5C) + 0x14); /*0x8d7a85*/
          if ( v42 ) /*0x8d7a89*/
          {
            v17 = ThreadLocalStoragePointer[v2]; /*0x8d7a8b*/
            if ( *(_DWORD *)(v17 + 0x1A4) < *(_DWORD *)(v17 + 0x1A8) ) /*0x8d7a9a*/
            {
              v18 = *(_DWORD **)(v17 + 0x1A4); /*0x8d7a9c*/
              *v18 = v42; /*0x8d7aa6*/
              v18[1] = 0x3F800000; /*0x8d7aa8*/
              *(_DWORD *)(v17 + 0x1A4) = v18 + 2; /*0x8d7ab2*/
              v15 = v43; /*0x8d7ab8*/
            }
          }
        }
        v19 = ThreadLocalStoragePointer[v2]; /*0x8d7abc*/
        if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) ) /*0x8d7acb*/
        {
          v20 = *(_DWORD **)(v19 + 0x1A4); /*0x8d7acf*/
          *v20 = "TtNarrowPhase"; /*0x8d7ad5*/
          v21 = __rdtsc(); /*0x8d7adb*/
          v20[1] = v21; /*0x8d7ae5*/
          *(_DWORD *)(ThreadLocalStoragePointer[v2] + 0x1A4) = v20 + 3; /*0x8d7aee*/
          v15 = v43; /*0x8d7af4*/
        }
        *(_DWORD *)(v16 + 0x28) = *(_DWORD *)v16 + 0x1A50; /*0x8d7b04*/
        *(_BYTE *)(v16 + 0xC) = 0; /*0x8d7b08*/
        sub_8E7180(v15 + 0x44, v16); /*0x8d7b0c*/
        v22 = ThreadLocalStoragePointer[v2]; /*0x8d7b11*/
        if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) ) /*0x8d7b25*/
        {
          v23 = ThreadLocalStoragePointer[v2]; /*0x8d7b27*/
          v24 = *(_DWORD **)(v22 + 0x1A4); /*0x8d7b29*/
          *v24 = "Et"; /*0x8d7b2f*/
          v25 = __rdtsc(); /*0x8d7b35*/
          v24[1] = v25; /*0x8d7b3f*/
          *(_DWORD *)(v23 + 0x1A4) = v24 + 3; /*0x8d7b45*/
        }
        if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d7b55*/
          break; /*0x8d7b55*/
        if ( *(_DWORD *)(a1 + 0x140) ) /*0x8d7b5b*/
        {
          LODWORD(v26) = ThreadLocalStoragePointer[v2]; /*0x8d7b69*/
          if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x8d7b78*/
          {
            v27 = ThreadLocalStoragePointer[v2]; /*0x8d7b7a*/
            v28 = *(_DWORD **)(v26 + 0x1A4); /*0x8d7b7c*/
            *v28 = "TtIslandPostCollideCb"; /*0x8d7b82*/
            v26 = __rdtsc(); /*0x8d7b88*/
            v28[1] = v26; /*0x8d7b92*/
            *(_DWORD *)(v27 + 0x1A4) = v28 + 3; /*0x8d7b98*/
          }
          sub_8DCFA0(v26, a1, v43, (int)a2); /*0x8d7ba9*/
          v29 = ThreadLocalStoragePointer[v2]; /*0x8d7bae*/
          if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) ) /*0x8d7bc2*/
          {
            v30 = ThreadLocalStoragePointer[v2]; /*0x8d7bc4*/
            v31 = *(_DWORD **)(v29 + 0x1A4); /*0x8d7bc6*/
            *v31 = "Et"; /*0x8d7bcc*/
            v32 = __rdtsc(); /*0x8d7bd2*/
            v31[1] = v32; /*0x8d7bdc*/
            *(_DWORD *)(v30 + 0x1A4) = v31 + 3; /*0x8d7be2*/
          }
        }
        if ( ++v41 >= *(_DWORD *)(a1 + 0x3C) ) /*0x8d7bf6*/
          goto LABEL_26; /*0x8d7bf6*/
      }
      v13 = (*(_DWORD *)(a1 + 0x88))-- == 1; /*0x8d7cf5*/
      if ( v13 ) /*0x8d7cfb*/
      {
        if ( *(_DWORD *)(a1 + 0x84) ) /*0x8d7cfd*/
        {
          if ( !*(_BYTE *)(a1 + 0x90) ) /*0x8d7d07*/
            sub_899210(a1); /*0x8d7d13*/
        }
      }
      LODWORD(v37) = ThreadLocalStoragePointer[v2]; /*0x8d7d18*/
      if ( *(_DWORD *)(v37 + 0x1A4) >= *(_DWORD *)(v37 + 0x1A8) ) /*0x8d7d27*/
        return v37; /*0x8d7d27*/
    }
LABEL_35:
    v38 = ThreadLocalStoragePointer[v2]; /*0x8d7c7d*/
    v39 = *(_DWORD **)(v37 + 0x1A4); /*0x8d7c7f*/
    *v39 = "lt"; /*0x8d7c85*/
    v37 = __rdtsc(); /*0x8d7c8b*/
    v39[1] = v37; /*0x8d7c95*/
    *(_DWORD *)(v38 + 0x1A4) = v39 + 3; /*0x8d7c9b*/
    return v37; /*0x8d7c9b*/
  }
  while ( 1 ) /*0x8d79f3*/
  {
    v12 = *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 4 * v10); /*0x8d79f3*/
    sub_8D7400(*(_DWORD **)(v12 + 0x34), *(_DWORD *)(v12 + 0x38), a1); /*0x8d79ff*/
    if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8d7a12*/
      break; /*0x8d7a12*/
    if ( ++v10 >= *(_DWORD *)(a1 + 0x3C) ) /*0x8d7a1e*/
      goto LABEL_6; /*0x8d7a1e*/
  }
  v13 = (*(_DWORD *)(a1 + 0x88))-- == 1; /*0x8d7cab*/
  if ( v13 ) /*0x8d7cb1*/
  {
    if ( *(_DWORD *)(a1 + 0x84) ) /*0x8d7cb3*/
    {
      if ( !*(_BYTE *)(a1 + 0x90) ) /*0x8d7cbd*/
        sub_899210(a1); /*0x8d7cc9*/
    }
  }
  LODWORD(v37) = ThreadLocalStoragePointer[v2]; /*0x8d7cce*/
  if ( *(_DWORD *)(v37 + 0x1A4) < *(_DWORD *)(v37 + 0x1A8) ) /*0x8d7cdd*/
    goto LABEL_35; /*0x8d7cdd*/
  return v37; /*0x8d7ca1*/
}
