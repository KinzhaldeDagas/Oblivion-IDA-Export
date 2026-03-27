int __thiscall sub_90C940(_DWORD *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int result; // eax
  int v15; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v3 = *(this + 0x11);
  v4 = TlsIndex;
  if ( v3 >= 0 )
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v5 )
      v5 = dword_BA7D9C;
    sub_8A75D0(v5, (_DWORD *)*(this + 0xF), 2 * (v3 & 0x3FFFFFFF), 0x14);
  }
  v6 = *(this + 0xE);
  if ( v6 >= 0 )
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    sub_8A75D0(v7, (_DWORD *)*(this + 0xC), 4 * v6, 0x14);
  }
  v8 = *(this + 0xB);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    sub_8A75D0(v9, (_DWORD *)*(this + 9), v8 & 0x3FFFFFFF, 0x14);
  }
  v10 = *(this + 8);
  if ( v10 >= 0 )
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v11 )
      v11 = dword_BA7D9C;
    sub_8A75D0(v11, (_DWORD *)*(this + 6), 4 * v10, 0x14);
  }
  v12 = *(this + 5);
  if ( v12 >= 0 )
  {
    v13 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v13 )
      v13 = dword_BA7D9C;
    sub_8A75D0(v13, (_DWORD *)*(this + 3), 2 * (v12 & 0x3FFFFFFF), 0x14);
  }
  result = *(this + 2);
  if ( result >= 0 )
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v15 )
      v15 = dword_BA7D9C;
    return sub_8A75D0(v15, (_DWORD *)*this, 4 * result, 0x14);
  }
  return result;
}
