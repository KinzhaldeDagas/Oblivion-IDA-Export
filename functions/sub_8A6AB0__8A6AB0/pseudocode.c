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

  v1 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(this + 0xF) )
  {
    v4 = *(this + 0x10);
    if ( v4 >= 0 )
    {
      v5 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C);
      if ( !v5 )
        v5 = dword_BA7D9C;
      sub_8A75D0(v5, (_DWORD *)*(this + 0xE), 8 * v4, 0x14);
    }
    v6 = *(this + 0x10) & 0x40000000 | 0x80000000;
    *(this + 0xE) = 0;
    *(this + 0xF) = 0;
    *(this + 0x10) = v6;
  }
  if ( !*(this + 0x1B) )
  {
    v7 = *(this + 0x1C);
    if ( v7 >= 0 )
    {
      v8 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C);
      if ( !v8 )
        v8 = dword_BA7D9C;
      sub_8A75D0(v8, (_DWORD *)*(this + 0x1A), 0x1C * (v7 & 0x3FFFFFFF), 0x14);
    }
    v9 = *(this + 0x1C) & 0x40000000 | 0x80000000;
    *(this + 0x1A) = 0;
    *(this + 0x1B) = 0;
    *(this + 0x1C) = v9;
  }
  if ( !*(this + 0x1E) )
  {
    v10 = *(this + 0x1F);
    if ( v10 >= 0 )
    {
      v11 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C);
      if ( !v11 )
        v11 = dword_BA7D9C;
      sub_8A75D0(v11, (_DWORD *)*(this + 0x1D), 4 * v10, 0x14);
    }
    v12 = *(this + 0x1F) & 0x40000000 | 0x80000000;
    *(this + 0x1D) = 0;
    *(this + 0x1E) = 0;
    *(this + 0x1F) = v12;
  }
  if ( !*(this + 0x21) )
  {
    v13 = *(this + 0x22);
    if ( v13 >= 0 )
    {
      v14 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C);
      if ( !v14 )
        v14 = dword_BA7D9C;
      sub_8A75D0(v14, (_DWORD *)*(this + 0x20), v13 & 0x3FFFFFFF, 0x14);
    }
    v15 = *(this + 0x22) & 0x40000000 | 0x80000000;
    *(this + 0x20) = 0;
    *(this + 0x21) = 0;
    *(this + 0x22) = v15;
  }
  v16 = *(this + 0x26);
  v17 = 0;
  if ( v16 <= 0 )
  {
LABEL_29:
    v19 = *(this + 0x27);
    if ( v19 >= 0 )
    {
      v20 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C);
      if ( !v20 )
        v20 = dword_BA7D9C;
      sub_8A75D0(v20, (_DWORD *)*(this + 0x25), 4 * v19, 0x14);
    }
    v21 = *(this + 0x27) & 0x40000000 | 0x80000000;
    *(this + 0x25) = 0;
    *(this + 0x26) = 0;
    *(this + 0x27) = v21;
  }
  else
  {
    v18 = (_DWORD *)*(this + 0x25);
    while ( !*v18 )
    {
      ++v17;
      ++v18;
      if ( v17 >= v16 )
        goto LABEL_29;
    }
  }
  v22 = *(this + 0x29);
  v23 = 0;
  if ( v22 <= 0 )
  {
LABEL_38:
    v25 = *(this + 0x2A);
    if ( v25 >= 0 )
    {
      v26 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C);
      if ( !v26 )
        v26 = dword_BA7D9C;
      sub_8A75D0(v26, (_DWORD *)*(this + 0x28), 4 * v25, 0x14);
    }
    v27 = *(this + 0x2A) & 0x40000000 | 0x80000000;
    *(this + 0x28) = 0;
    *(this + 0x29) = 0;
    *(this + 0x2A) = v27;
  }
  else
  {
    v24 = (_DWORD *)*(this + 0x28);
    while ( !*v24 )
    {
      ++v23;
      ++v24;
      if ( v23 >= v22 )
        goto LABEL_38;
    }
  }
  v28 = *(this + 0x2C);
  v29 = 0;
  if ( v28 <= 0 )
  {
LABEL_47:
    v31 = *(this + 0x2D);
    if ( v31 >= 0 )
    {
      v32 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C);
      if ( !v32 )
        v32 = dword_BA7D9C;
      sub_8A75D0(v32, (_DWORD *)*(this + 0x2B), 4 * v31, 0x14);
    }
    v33 = *(this + 0x2D) & 0x40000000 | 0x80000000;
    *(this + 0x2B) = 0;
    *(this + 0x2C) = 0;
    *(this + 0x2D) = v33;
  }
  else
  {
    v30 = (_DWORD *)*(this + 0x2B);
    while ( !*v30 )
    {
      ++v29;
      ++v30;
      if ( v29 >= v28 )
        goto LABEL_47;
    }
  }
  v34 = *(this + 0x2F);
  result = 0;
  if ( v34 <= 0 )
  {
LABEL_56:
    v37 = *(this + 0x30);
    if ( v37 >= 0 )
    {
      v38 = *(_DWORD *)(ThreadLocalStoragePointer[v1] + 0x19C);
      if ( !v38 )
        v38 = dword_BA7D9C;
      sub_8A75D0(v38, (_DWORD *)*(this + 0x2E), 4 * v37, 0x14);
    }
    result = *(this + 0x30) & 0x40000000 | 0x80000000;
    *(this + 0x2E) = 0;
    *(this + 0x2F) = 0;
    *(this + 0x30) = result;
  }
  else
  {
    v36 = (_DWORD *)*(this + 0x2E);
    while ( !*v36 )
    {
      ++result;
      ++v36;
      if ( result >= v34 )
        goto LABEL_56;
    }
  }
  return result;
}
