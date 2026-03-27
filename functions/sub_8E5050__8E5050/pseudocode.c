int __thiscall sub_8E5050(int *this)
{
  int v1; // ebp
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  _DWORD **v7; // edi
  int v8; // ebx
  int v9; // eax
  int result; // eax

  v1 = TlsIndex;
  v3 = *(this + 0x1C);
  v4 = 0;
  *this = (int)&off_A9A710;
  if ( v3 > 0 )
  {
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)(v5 + *(this + 0x1E) + 0xC);
      if ( v6 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v1) + 0x19C),
          *(_DWORD **)(v5 + *(this + 0x1E) + 4),
          2 * (v6 & 0x3FFFFFFF),
          0x14);
      ++v4;
      v5 += 0x10;
    }
    while ( v4 < *(this + 0x1C) );
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, *(this + 0x1E));
  v7 = (_DWORD **)(this + 0x1C);
  v8 = 3;
  do
  {
    v9 = (int)v7[0xFFFFFFFF];
    v7 += 0xFFFFFFFD;
    if ( v9 >= 0 )
      sub_8A75D0(*(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v1) + 0x19C), *v7, 4 * v9, 0x14);
    --v8;
  }
  while ( v8 );
  result = *(this + 0x12);
  if ( result >= 0 )
    result = sub_8A75D0(
               *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v1) + 0x19C),
               (_DWORD *)*(this + 0x10),
               0x10 * result,
               0x14);
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
