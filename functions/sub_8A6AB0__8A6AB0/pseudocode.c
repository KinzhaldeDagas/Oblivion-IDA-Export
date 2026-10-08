signed int __thiscall sub_8A6AB0(int *this)
{
  int v1; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // eax
  _DWORD *v18; // edx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // edx
  int v23; // eax
  _DWORD *v24; // ecx
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // edx
  int v29; // eax
  _DWORD *v30; // ecx
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // eax
  int v34; // edx
  signed int result; // eax
  _DWORD *v36; // ecx
  int v37; // eax
  int v38; // ecx

  v1 = MEMORY[0xBA9DE4]; /*0x8a6ab1*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8a6ab8*/
  if ( !*(this + 0xF) ) /*0x8a6ac2*/
  {
    v4 = *(this + 0x10); /*0x8a6acc*/
    if ( v4 >= 0 ) /*0x8a6ad1*/
    {
      v5 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C); /*0x8a6ad7*/
      if ( !v5 ) /*0x8a6adf*/
        v5 = unk_BA7D9C; /*0x8a6ae1*/
      sub_8A75D0(v5, (_DWORD *)*(this + 0xE), 8 * v4, 0x14); /*0x8a6af6*/
    }
    v6 = *(this + 0x10) & 0x40000000 | 0x80000000; /*0x8a6b03*/
    *(this + 0xE) = 0; /*0x8a6b08*/
    *(this + 0xF) = 0; /*0x8a6b0b*/
    *(this + 0x10) = v6; /*0x8a6b0e*/
  }
  if ( !*(this + 0x1B) ) /*0x8a6b11*/
  {
    v7 = *(this + 0x1C); /*0x8a6b16*/
    if ( v7 >= 0 ) /*0x8a6b1b*/
    {
      v8 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C); /*0x8a6b21*/
      if ( !v8 ) /*0x8a6b29*/
        v8 = unk_BA7D9C; /*0x8a6b2b*/
      sub_8A75D0(v8, (_DWORD *)*(this + 0x1A), 0x1C * (v7 & 0x3FFFFFFF), 0x14); /*0x8a6b40*/
    }
    v9 = *(this + 0x1C) & 0x40000000 | 0x80000000; /*0x8a6b4d*/
    *(this + 0x1A) = 0; /*0x8a6b52*/
    *(this + 0x1B) = 0; /*0x8a6b55*/
    *(this + 0x1C) = v9; /*0x8a6b58*/
  }
  if ( !*(this + 0x1E) ) /*0x8a6b5b*/
  {
    v10 = *(this + 0x1F); /*0x8a6b60*/
    if ( v10 >= 0 ) /*0x8a6b65*/
    {
      v11 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C); /*0x8a6b6b*/
      if ( !v11 ) /*0x8a6b73*/
        v11 = unk_BA7D9C; /*0x8a6b75*/
      sub_8A75D0(v11, (_DWORD *)*(this + 0x1D), 4 * v10, 0x14); /*0x8a6b8a*/
    }
    v12 = *(this + 0x1F) & 0x40000000 | 0x80000000; /*0x8a6b97*/
    *(this + 0x1D) = 0; /*0x8a6b9c*/
    *(this + 0x1E) = 0; /*0x8a6b9f*/
    *(this + 0x1F) = v12; /*0x8a6ba2*/
  }
  if ( !*(this + 0x21) ) /*0x8a6ba5*/
  {
    v13 = *(this + 0x22); /*0x8a6bad*/
    if ( v13 >= 0 ) /*0x8a6bb5*/
    {
      v14 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C); /*0x8a6bbb*/
      if ( !v14 ) /*0x8a6bc3*/
        v14 = unk_BA7D9C; /*0x8a6bc5*/
      sub_8A75D0(v14, (_DWORD *)*(this + 0x20), v13 & 0x3FFFFFFF, 0x14); /*0x8a6bda*/
    }
    v15 = *(this + 0x22) & 0x40000000 | 0x80000000; /*0x8a6bea*/
    *(this + 0x20) = 0; /*0x8a6bef*/
    *(this + 0x21) = 0; /*0x8a6bf5*/
    *(this + 0x22) = v15; /*0x8a6bfb*/
  }
  v16 = *(this + 0x26); /*0x8a6c01*/
  v17 = 0; /*0x8a6c07*/
  if ( v16 <= 0 ) /*0x8a6c0b*/
  {
LABEL_29:
    v19 = *(this + 0x27); /*0x8a6c1f*/
    if ( v19 >= 0 ) /*0x8a6c27*/
    {
      v20 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C); /*0x8a6c2d*/
      if ( !v20 ) /*0x8a6c35*/
        v20 = unk_BA7D9C; /*0x8a6c37*/
      sub_8A75D0(v20, (_DWORD *)*(this + 0x25), 4 * v19, 0x14); /*0x8a6c4f*/
    }
    v21 = *(this + 0x27) & 0x40000000 | 0x80000000; /*0x8a6c5f*/
    *(this + 0x25) = 0; /*0x8a6c64*/
    *(this + 0x26) = 0; /*0x8a6c6a*/
    *(this + 0x27) = v21; /*0x8a6c70*/
  }
  else
  {
    v18 = (_DWORD *)*(this + 0x25); /*0x8a6c0d*/
    while ( !*v18 ) /*0x8a6c15*/
    {
      ++v17; /*0x8a6c17*/
      ++v18; /*0x8a6c18*/
      if ( v17 >= v16 ) /*0x8a6c1d*/
        goto LABEL_29; /*0x8a6c1d*/
    }
  }
  v22 = *(this + 0x29); /*0x8a6c76*/
  v23 = 0; /*0x8a6c7c*/
  if ( v22 <= 0 ) /*0x8a6c80*/
  {
LABEL_38:
    v25 = *(this + 0x2A); /*0x8a6c94*/
    if ( v25 >= 0 ) /*0x8a6c9c*/
    {
      v26 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C); /*0x8a6ca2*/
      if ( !v26 ) /*0x8a6caa*/
        v26 = unk_BA7D9C; /*0x8a6cac*/
      sub_8A75D0(v26, (_DWORD *)*(this + 0x28), 4 * v25, 0x14); /*0x8a6cc4*/
    }
    v27 = *(this + 0x2A) & 0x40000000 | 0x80000000; /*0x8a6cd4*/
    *(this + 0x28) = 0; /*0x8a6cd9*/
    *(this + 0x29) = 0; /*0x8a6cdf*/
    *(this + 0x2A) = v27; /*0x8a6ce5*/
  }
  else
  {
    v24 = (_DWORD *)*(this + 0x28); /*0x8a6c82*/
    while ( !*v24 ) /*0x8a6c8a*/
    {
      ++v23; /*0x8a6c8c*/
      ++v24; /*0x8a6c8d*/
      if ( v23 >= v22 ) /*0x8a6c92*/
        goto LABEL_38; /*0x8a6c92*/
    }
  }
  v28 = *(this + 0x2C); /*0x8a6ceb*/
  v29 = 0; /*0x8a6cf1*/
  if ( v28 <= 0 ) /*0x8a6cf5*/
  {
LABEL_47:
    v31 = *(this + 0x2D); /*0x8a6d0c*/
    if ( v31 >= 0 ) /*0x8a6d14*/
    {
      v32 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C); /*0x8a6d1a*/
      if ( !v32 ) /*0x8a6d22*/
        v32 = unk_BA7D9C; /*0x8a6d24*/
      sub_8A75D0(v32, (_DWORD *)*(this + 0x2B), 4 * v31, 0x14); /*0x8a6d3c*/
    }
    v33 = *(this + 0x2D) & 0x40000000 | 0x80000000; /*0x8a6d4c*/
    *(this + 0x2B) = 0; /*0x8a6d51*/
    *(this + 0x2C) = 0; /*0x8a6d57*/
    *(this + 0x2D) = v33; /*0x8a6d5d*/
  }
  else
  {
    v30 = (_DWORD *)*(this + 0x2B); /*0x8a6cf7*/
    while ( !*v30 ) /*0x8a6d02*/
    {
      ++v29; /*0x8a6d04*/
      ++v30; /*0x8a6d05*/
      if ( v29 >= v28 ) /*0x8a6d0a*/
        goto LABEL_47; /*0x8a6d0a*/
    }
  }
  v34 = *(this + 0x2F); /*0x8a6d63*/
  result = 0; /*0x8a6d69*/
  if ( v34 <= 0 ) /*0x8a6d6d*/
  {
LABEL_56:
    v37 = *(this + 0x30); /*0x8a6d81*/
    if ( v37 >= 0 ) /*0x8a6d89*/
    {
      v38 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C); /*0x8a6d8f*/
      if ( !v38 ) /*0x8a6d97*/
        v38 = unk_BA7D9C; /*0x8a6d99*/
      sub_8A75D0(v38, (_DWORD *)*(this + 0x2E), 4 * v37, 0x14); /*0x8a6db1*/
    }
    result = *(this + 0x30) & 0x40000000 | 0x80000000; /*0x8a6dc1*/
    *(this + 0x2E) = 0; /*0x8a6dc6*/
    *(this + 0x2F) = 0; /*0x8a6dcc*/
    *(this + 0x30) = result; /*0x8a6dd2*/
  }
  else
  {
    v36 = (_DWORD *)*(this + 0x2E); /*0x8a6d6f*/
    while ( !*v36 ) /*0x8a6d77*/
    {
      ++result; /*0x8a6d79*/
      ++v36; /*0x8a6d7a*/
      if ( result >= v34 ) /*0x8a6d7f*/
        goto LABEL_56; /*0x8a6d7f*/
    }
  }
  return result; /*0x8a6dd8*/
}
