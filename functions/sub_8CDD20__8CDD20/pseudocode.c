char *__thiscall sub_8CDD20(int this)
{
  int v2; // eax
  char *v3; // eax
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  char *v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  _DWORD *v19; // eax
  int v20; // edx

  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xA0, 0x2E);
  *(_WORD *)(v2 + 4) = 0xA0;
  v3 = sub_8CDCB0((char *)v2, (_OWORD *)(this + 0x70), *(_DWORD *)(this + 0x30));
  v4 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = v3;
  v7 = *((_DWORD *)v3 + 0x16);
  v8 = v7 & 0x3FFFFFFF;
  if ( (v7 & 0x3FFFFFFF) < *(_DWORD *)(this + 0x54) )
  {
    if ( v7 >= 0 )
    {
      v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
      if ( !v9 )
        v9 = dword_BA7D9C;
      sub_8A75D0(v9, *((_DWORD **)v6 + 0x14), 4 * v8, 0x14);
    }
    v10 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v10 )
      v10 = dword_BA7D9C;
    v11 = sub_8A7560(v10, 4 * *(_DWORD *)(this + 0x54), 0x14);
    v12 = *((_DWORD *)v6 + 0x16);
    *((_DWORD *)v6 + 0x14) = v11;
    *((_DWORD *)v6 + 0x16) = *(_DWORD *)(this + 0x54) | v12 & 0x40000000;
  }
  v13 = *(_DWORD *)(this + 0x54);
  v14 = *((_DWORD **)v6 + 0x14);
  *((_DWORD *)v6 + 0x15) = v13;
  if ( v13 > 0 )
  {
    v15 = *(_DWORD *)(this + 0x50) - (_DWORD)v14;
    do
    {
      *v14 = *(_DWORD *)((char *)v14 + v15);
      ++v14;
      --v13;
    }
    while ( v13 );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  if ( (*((_DWORD *)v6 + 0x19) & 0x3FFFFFFF) < *(_DWORD *)(this + 0x60) )
  {
    if ( *((int *)v6 + 0x19) >= 0 )
    {
      v16 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
      if ( !v16 )
        v16 = dword_BA7D9C;
      sub_8A75D0(v16, *((_DWORD **)v6 + 0x17), 4 * *((_DWORD *)v6 + 0x19), 0x14);
    }
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v17 )
      v17 = dword_BA7D9C;
    *((_DWORD *)v6 + 0x17) = sub_8A7560(v17, 4 * *(_DWORD *)(this + 0x60), 0x14);
    *((_DWORD *)v6 + 0x19) = *(_DWORD *)(this + 0x60) | *((_DWORD *)v6 + 0x19) & 0x40000000;
  }
  v18 = *(_DWORD *)(this + 0x60);
  v19 = *((_DWORD **)v6 + 0x17);
  *((_DWORD *)v6 + 0x18) = v18;
  if ( v18 > 0 )
  {
    v20 = *(_DWORD *)(this + 0x5C) - (_DWORD)v19;
    do
    {
      *v19 = *(_DWORD *)((char *)v19 + v20);
      ++v19;
      --v18;
    }
    while ( v18 );
  }
  sub_8A9E50((int *)v6, this);
  return v6;
}
