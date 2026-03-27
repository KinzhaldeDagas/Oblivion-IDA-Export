int __thiscall sub_8D9F00(int *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebx
  int i; // edi
  int v6; // ebx
  int j; // edi
  int v8; // ecx
  int v9; // ebx
  int k; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int result; // eax
  int v21; // ecx

  v2 = *(this + 3);
  v3 = 0;
  for ( *this = (int)&off_A9A2A0; v3 < v2; ++v3 )
    sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(*(this + 2) + 4 * v3));
  v4 = *(this + 0xC);
  for ( i = 0; i < v4; ++i )
    sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(*(this + 0xB) + 4 * i));
  v6 = *(this + 6);
  for ( j = 0; j < v6; ++j )
  {
    v8 = *(_DWORD *)(*(this + 5) + 4 * j);
    if ( *(_WORD *)(v8 + 4) )
    {
      if ( !--*(_WORD *)(v8 + 6) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
  }
  v9 = *(this + 9);
  for ( k = 0; k < v9; ++k )
  {
    v11 = *(_DWORD *)(*(this + 8) + 4 * k);
    if ( v11 )
    {
      if ( *(_WORD *)(v11 + 4) )
      {
        if ( !--*(_WORD *)(v11 + 6) )
          (**(void (__thiscall ***)(int, int))v11)(v11, 1);
      }
    }
  }
  v12 = *(this + 0xD);
  v13 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v12 >= 0 )
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C);
    if ( !v15 )
      v15 = dword_BA7D9C;
    sub_8A75D0(v15, (_DWORD *)*(this + 0xB), 4 * v12, 0x14);
  }
  v16 = *(this + 0xA);
  if ( v16 >= 0 )
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C);
    if ( !v17 )
      v17 = dword_BA7D9C;
    sub_8A75D0(v17, (_DWORD *)*(this + 8), 4 * v16, 0x14);
  }
  v18 = *(this + 7);
  if ( v18 >= 0 )
  {
    v19 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C);
    if ( !v19 )
      v19 = dword_BA7D9C;
    sub_8A75D0(v19, (_DWORD *)*(this + 5), 4 * v18, 0x14);
  }
  result = *(this + 4);
  if ( result >= 0 )
  {
    v21 = *(_DWORD *)(ThreadLocalStoragePointer[v13] + 0x19C);
    if ( !v21 )
      v21 = dword_BA7D9C;
    result = sub_8A75D0(v21, (_DWORD *)*(this + 2), 4 * result, 0x14);
  }
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
