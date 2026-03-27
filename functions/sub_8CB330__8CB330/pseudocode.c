int __thiscall sub_8CB330(int *this)
{
  int v2; // edi
  int *v3; // ebp
  int v4; // eax
  int v5; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int result; // eax

  v2 = *(this + 0x18) - 1;
  v3 = this + 2;
  *this = (int)&off_A99BD0;
  *(this + 2) = (int)&off_A99BC4;
  *(this + 0x12) = (int)off_A99BBC;
  *(this + 0x13) = (int)off_A99BA8;
  *(this + 0x14) = (int)off_A99B94;
  *(this + 0x15) = (int)off_A99B88;
  for ( *(this + 0x16) = (int)off_A99B7C; v2 >= 0; --v2 )
    sub_8CAFF0(this, *(int **)(*(this + 0x17) + 4 * v2));
  v4 = *(this + 0x1C);
  v5 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v4 >= 0 )
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    sub_8A75D0(v7, (_DWORD *)*(this + 0x1A), 4 * v4, 0x14);
  }
  v8 = *(this + 0x19);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    sub_8A75D0(v9, (_DWORD *)*(this + 0x17), 4 * v8, 0x14);
  }
  *(this + 0x16) = (int)&off_A99B58;
  *(this + 0x15) = (int)&off_A99B58;
  *(this + 0x14) = (int)&hkPhantomListener::`vftable';
  *(this + 0x13) = (int)&hkEntityListener::`vftable';
  *(this + 0x12) = (int)&off_A99B50;
  result = sub_8CB180(v3);
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
