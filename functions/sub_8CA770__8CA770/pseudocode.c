int __usercall sub_8CA770@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int i; // edi
  int v4; // ecx
  int j; // ebx
  _DWORD *v6; // edi
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int result; // eax
  int v23; // ecx

  *(_DWORD *)a1 = &off_A99AE8;
  sub_8CA2A0((_DWORD *)a1, a2);
  for ( i = 0; i < *(_DWORD *)(a1 + 0x1C); ++i )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 0x18) + 4 * i);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 8))(v4, 0);
  }
  for ( j = 0; j < *(_DWORD *)(a1 + 0x50); ++j )
  {
    v6 = *(_DWORD **)(*(_DWORD *)(a1 + 0x4C) + 4 * j);
    if ( v6 )
    {
      v7 = (_DWORD *)(*v6 - 0xC);
      v8 = *(_DWORD *)(*v6 - 4) - 1;
      v7[2] = v8;
      if ( v8 < 0 )
        sub_8B1930(v7);
      (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v6, 4, 0x13);
    }
  }
  v9 = *(_DWORD *)(a1 + 0x48);
  *(_DWORD *)(a1 + 0x50) = 0;
  if ( v9 )
  {
    if ( *(_WORD *)(v9 + 4) )
    {
      if ( !--*(_WORD *)(v9 + 6) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
  }
  v10 = *(_DWORD *)(a1 + 0x54);
  v11 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v10 >= 0 )
  {
    v13 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C);
    if ( !v13 )
      v13 = dword_BA7D9C;
    sub_8A75D0(v13, *(_DWORD **)(a1 + 0x4C), 4 * v10, 0x14);
  }
  v14 = *(_DWORD *)(a1 + 0x44);
  if ( v14 >= 0 )
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C);
    if ( !v15 )
      v15 = dword_BA7D9C;
    sub_8A75D0(v15, *(_DWORD **)(a1 + 0x3C), 4 * v14, 0x14);
  }
  v16 = *(_DWORD *)(a1 + 0x38);
  if ( v16 >= 0 )
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C);
    if ( !v17 )
      v17 = dword_BA7D9C;
    sub_8A75D0(v17, *(_DWORD **)(a1 + 0x30), 4 * v16, 0x14);
  }
  v18 = *(_DWORD *)(a1 + 0x2C);
  if ( v18 >= 0 )
  {
    v19 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C);
    if ( !v19 )
      v19 = dword_BA7D9C;
    sub_8A75D0(v19, *(_DWORD **)(a1 + 0x24), 8 * v18, 0x14);
  }
  v20 = *(_DWORD *)(a1 + 0x20);
  if ( v20 >= 0 )
  {
    v21 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C);
    if ( !v21 )
      v21 = dword_BA7D9C;
    sub_8A75D0(v21, *(_DWORD **)(a1 + 0x18), 4 * v20, 0x14);
  }
  result = *(_DWORD *)(a1 + 0x14);
  if ( result >= 0 )
  {
    v23 = *(_DWORD *)(ThreadLocalStoragePointer[v11] + 0x19C);
    if ( !v23 )
      v23 = dword_BA7D9C;
    result = sub_8A75D0(v23, *(_DWORD **)(a1 + 0xC), 8 * result, 0x14);
  }
  *(_DWORD *)a1 = &hkBaseObject::`vftable';
  return result;
}
