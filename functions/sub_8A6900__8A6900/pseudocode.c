int __thiscall sub_8A6900(int *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx

  *this = (int)&off_A975A8;
  sub_8DBF50((int)this);
  v2 = *(this + 0x19);
  if ( v2 )
  {
    if ( *(_WORD *)(v2 + 4) )
    {
      if ( !--*(_WORD *)(v2 + 6) )
        (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    }
  }
  v3 = *(this + 0x30);
  v4 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v3 >= 0 )
  {
    v6 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    sub_8A75D0(v6, (_DWORD *)*(this + 0x2E), 4 * v3, 0x14);
  }
  v7 = *(this + 0x2D);
  if ( v7 >= 0 )
  {
    v8 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v8 )
      v8 = dword_BA7D9C;
    sub_8A75D0(v8, (_DWORD *)*(this + 0x2B), 4 * v7, 0x14);
  }
  v9 = *(this + 0x2A);
  if ( v9 >= 0 )
  {
    v10 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v10 )
      v10 = dword_BA7D9C;
    sub_8A75D0(v10, (_DWORD *)*(this + 0x28), 4 * v9, 0x14);
  }
  v11 = *(this + 0x27);
  if ( v11 >= 0 )
  {
    v12 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v12 )
      v12 = dword_BA7D9C;
    sub_8A75D0(v12, (_DWORD *)*(this + 0x25), 4 * v11, 0x14);
  }
  v13 = *(this + 0x22);
  if ( v13 >= 0 )
  {
    v14 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v14 )
      v14 = dword_BA7D9C;
    sub_8A75D0(v14, (_DWORD *)*(this + 0x20), v13 & 0x3FFFFFFF, 0x14);
  }
  v15 = *(this + 0x1F);
  if ( v15 >= 0 )
  {
    v16 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v16 )
      v16 = dword_BA7D9C;
    sub_8A75D0(v16, (_DWORD *)*(this + 0x1D), 4 * v15, 0x14);
  }
  v17 = *(this + 0x1C);
  if ( v17 >= 0 )
  {
    v18 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v18 )
      v18 = dword_BA7D9C;
    sub_8A75D0(v18, (_DWORD *)*(this + 0x1A), 0x1C * (v17 & 0x3FFFFFFF), 0x14);
  }
  return sub_8A66A0(this);
}
