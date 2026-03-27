int __thiscall sub_90DB10(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // edi
  int v4; // ebp
  int v5; // ecx
  int v6; // eax
  _DWORD **v7; // ecx
  int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // eax
  _DWORD **v12; // ecx
  int v13; // eax
  int v14; // eax
  int result; // eax
  int v16; // [esp+10h] [ebp-4h]
  int v17; // [esp+10h] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v3 = TlsIndex;
  if ( *(this + 0x10) > 0 )
  {
    v4 = 0;
    v16 = *(this + 0x10);
    do
    {
      v5 = *(this + 0xF);
      v6 = *(_DWORD *)(v5 + v4 + 8);
      v7 = (_DWORD **)(v4 + v5);
      if ( v6 >= 0 )
        sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C), *v7, 8 * v6, 0x14);
      v4 += 0xC;
      --v16;
    }
    while ( v16 );
  }
  v8 = *(this + 0x11);
  if ( v8 >= 0 )
    sub_8A75D0(
      *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C),
      (_DWORD *)*(this + 0xF),
      0xC * (v8 & 0x3FFFFFFF),
      0x14);
  if ( *(this + 0xD) > 0 )
  {
    v9 = 0;
    v17 = *(this + 0xD);
    do
    {
      v10 = *(this + 0xC);
      v11 = *(_DWORD *)(v10 + v9 + 8);
      v12 = (_DWORD **)(v9 + v10);
      if ( v11 >= 0 )
        sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C), *v12, 0xC * (v11 & 0x3FFFFFFF), 0x14);
      v9 += 0xC;
      --v17;
    }
    while ( v17 );
  }
  v13 = *(this + 0xE);
  if ( v13 >= 0 )
    sub_8A75D0(
      *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C),
      (_DWORD *)*(this + 0xC),
      0xC * (v13 & 0x3FFFFFFF),
      0x14);
  sub_942E10(this + 8);
  v14 = *(this + 6);
  if ( v14 >= 0 )
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C), (_DWORD *)*(this + 4), 8 * v14, 0x14);
  result = *(this + 3);
  if ( result >= 0 )
    return sub_8A75D0(
             *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C),
             (_DWORD *)*(this + 1),
             0x30 * (result & 0x3FFFFFFF),
             0x14);
  return result;
}
