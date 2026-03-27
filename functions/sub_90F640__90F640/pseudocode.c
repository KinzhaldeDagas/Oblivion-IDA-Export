int __thiscall sub_90F640(_DWORD *this)
{
  int v2; // esi
  int v3; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // edx

  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x130, 0x2E);
  *(_WORD *)(v2 + 4) = 0x130;
  v3 = *(this + 0xC);
  sub_8ABC40((char *)v2, *(this + 5), (_OWORD *)this + 7);
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  *(_DWORD *)v2 = &off_A9CAB8;
  *(_DWORD *)(v2 + 0x120) = 0;
  *(_DWORD *)(v2 + 0x124) = 0;
  *(_DWORD *)(v2 + 0x128) = 0x80000000;
  *(_DWORD *)(v2 + 0x30) = v3;
  v5 = TlsIndex;
  if ( (*(_DWORD *)(v2 + 0x58) & 0x3FFFFFFF) < *(this + 0x15) )
  {
    if ( *(int *)(v2 + 0x58) >= 0 )
    {
      v6 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
      if ( !v6 )
        v6 = dword_BA7D9C;
      sub_8A75D0(v6, *(_DWORD **)(v2 + 0x50), 4 * *(_DWORD *)(v2 + 0x58), 0x14);
    }
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    *(_DWORD *)(v2 + 0x50) = sub_8A7560(v7, 4 * *(this + 0x15), 0x14);
    *(_DWORD *)(v2 + 0x58) = *(this + 0x15) | *(_DWORD *)(v2 + 0x58) & 0x40000000;
  }
  v8 = *(this + 0x15);
  v9 = *(_DWORD **)(v2 + 0x50);
  *(_DWORD *)(v2 + 0x54) = v8;
  if ( v8 > 0 )
  {
    v10 = *(this + 0x14) - (_DWORD)v9;
    do
    {
      *v9 = *(_DWORD *)((char *)v9 + v10);
      ++v9;
      --v8;
    }
    while ( v8 );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  if ( (*(_DWORD *)(v2 + 0x64) & 0x3FFFFFFF) < *(this + 0x18) )
  {
    if ( *(int *)(v2 + 0x64) >= 0 )
    {
      v11 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
      if ( !v11 )
        v11 = dword_BA7D9C;
      sub_8A75D0(v11, *(_DWORD **)(v2 + 0x5C), 4 * *(_DWORD *)(v2 + 0x64), 0x14);
    }
    v12 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
    if ( !v12 )
      v12 = dword_BA7D9C;
    *(_DWORD *)(v2 + 0x5C) = sub_8A7560(v12, 4 * *(this + 0x18), 0x14);
    *(_DWORD *)(v2 + 0x64) = *(this + 0x18) | *(_DWORD *)(v2 + 0x64) & 0x40000000;
  }
  v13 = *(this + 0x18);
  v14 = *(_DWORD **)(v2 + 0x5C);
  *(_DWORD *)(v2 + 0x60) = v13;
  if ( v13 > 0 )
  {
    v15 = *(this + 0x17) - (_DWORD)v14;
    do
    {
      *v14 = *(_DWORD *)((char *)v14 + v15);
      ++v14;
      --v13;
    }
    while ( v13 );
  }
  sub_8A9E50((int *)v2, (int)this);
  return v2;
}
