int __thiscall sub_8C6E80(int *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int result; // eax
  int v27; // ecx

  v2 = *(this + 0x2C);
  v3 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v2 >= 0 )
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v5 )
      v5 = dword_BA7D9C;
    sub_8A75D0(v5, (_DWORD *)*(this + 0x2A), 4 * v2, 0x14);
  }
  v6 = *(this + 0x29);
  if ( v6 >= 0 )
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    sub_8A75D0(v7, (_DWORD *)*(this + 0x27), 4 * v6, 0x14);
  }
  v8 = *(this + 0x26);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    sub_8A75D0(v9, (_DWORD *)*(this + 0x24), 4 * v8, 0x14);
  }
  v10 = *(this + 0x23);
  if ( v10 >= 0 )
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v11 )
      v11 = dword_BA7D9C;
    sub_8A75D0(v11, (_DWORD *)*(this + 0x21), 4 * v10, 0x14);
  }
  v12 = *(this + 0x20);
  if ( v12 >= 0 )
  {
    v13 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v13 )
      v13 = dword_BA7D9C;
    sub_8A75D0(v13, (_DWORD *)*(this + 0x1E), 4 * v12, 0x14);
  }
  v14 = *(this + 0x1D);
  if ( v14 >= 0 )
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v15 )
      v15 = dword_BA7D9C;
    sub_8A75D0(v15, (_DWORD *)*(this + 0x1B), 4 * v14, 0x14);
  }
  v16 = *(this + 0x1A);
  if ( v16 >= 0 )
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v17 )
      v17 = dword_BA7D9C;
    sub_8A75D0(v17, (_DWORD *)*(this + 0x18), 4 * v16, 0x14);
  }
  v18 = *(this + 0x17);
  if ( v18 >= 0 )
  {
    v19 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v19 )
      v19 = dword_BA7D9C;
    sub_8A75D0(v19, (_DWORD *)*(this + 0x15), v18 & 0x3FFFFFFF, 0x14);
  }
  v20 = *(this + 0x14);
  if ( v20 >= 0 )
  {
    v21 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v21 )
      v21 = dword_BA7D9C;
    sub_8A75D0(v21, (_DWORD *)*(this + 0x12), 4 * v20, 0x14);
  }
  v22 = *(this + 0x11);
  if ( v22 >= 0 )
  {
    v23 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v23 )
      v23 = dword_BA7D9C;
    sub_8A75D0(v23, (_DWORD *)*(this + 0xF), 4 * v22, 0x14);
  }
  v24 = *(this + 0xE);
  if ( v24 >= 0 )
  {
    v25 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v25 )
      v25 = dword_BA7D9C;
    sub_8A75D0(v25, (_DWORD *)*(this + 0xC), 4 * v24, 0x14);
  }
  result = *(this + 0xB);
  if ( result >= 0 )
  {
    v27 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v27 )
      v27 = dword_BA7D9C;
    return sub_8A75D0(v27, (_DWORD *)*(this + 9), 4 * result, 0x14);
  }
  return result;
}
