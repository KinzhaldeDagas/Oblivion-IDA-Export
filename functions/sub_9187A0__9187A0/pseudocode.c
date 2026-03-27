_DWORD *__userpurge sub_9187A0@<eax>(int a1@<ecx>, int a2@<ebx>, _DWORD *a3, int a4, int a5)
{
  int *v6; // edi
  char *v7; // ebp
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // eax
  int v14; // edx
  _WORD *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  _DWORD *v18; // eax
  _WORD *v19; // eax
  _WORD *v20; // eax

  *(_WORD *)(a1 + 6) = 1;
  *(_DWORD *)(a1 + 8) = &off_A9D1D8;
  *(_DWORD *)(a1 + 0xC) = &off_A9D1C0;
  *(_BYTE *)(a1 + 0x10) = 0;
  v6 = (int *)(a1 + 0xC);
  v7 = (char *)(a1 + 0x24);
  *(_DWORD *)a1 = &off_A9D230;
  *(_DWORD *)(a1 + 8) = &off_A9D214;
  *(_DWORD *)(a1 + 0xC) = &off_A9D1FC;
  *(_WORD *)(a1 + 0x2A) = 1;
  *(_DWORD *)(a1 + 0x24) = &off_A9D1F4;
  sub_8B0E10((char **)(a1 + 0x2C), a2);
  *(_DWORD *)(a1 + 0x38) = 0;
  *(_DWORD *)(a1 + 0x3C) = 0;
  *(_DWORD *)(a1 + 0x40) = 0x80000000;
  *(_DWORD *)(a1 + 0x44) = 0;
  *(_DWORD *)(a1 + 0x48) = 0;
  *(_DWORD *)(a1 + 0x4C) = 0x80000000;
  sub_947EE0(v7, v6);
  if ( (*(_DWORD *)(a1 + 0x4C) & 0x3FFFFFFF) < a3[1] )
  {
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v9 = TlsIndex;
    if ( *(int *)(a1 + 0x4C) >= 0 )
    {
      v10 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C);
      if ( !v10 )
        v10 = dword_BA7D9C;
      sub_8A75D0(v10, *(_DWORD **)(a1 + 0x44), 4 * *(_DWORD *)(a1 + 0x4C), 0x14);
    }
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C);
    if ( !v11 )
      v11 = dword_BA7D9C;
    *(_DWORD *)(a1 + 0x44) = sub_8A7560(v11, 4 * a3[1], 0x14);
    *(_DWORD *)(a1 + 0x4C) = a3[1] | *(_DWORD *)(a1 + 0x4C) & 0x40000000;
  }
  v12 = a3[1];
  v13 = *(_DWORD **)(a1 + 0x44);
  *(_DWORD *)(a1 + 0x48) = v12;
  if ( v12 > 0 )
  {
    v14 = *a3 - (_DWORD)v13;
    do
    {
      *v13 = *(_DWORD *)((char *)v13 + v14);
      ++v13;
      --v12;
    }
    while ( v12 );
  }
  if ( a4 )
  {
    v15 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x10, 0x17);
    v15[2] = 0x10;
    v16 = sub_948C30(v15, a4);
  }
  else
  {
    v16 = 0;
  }
  *(_DWORD *)(a1 + 0x14) = v16;
  if ( a5 )
  {
    v17 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x10, 0x17);
    *(_WORD *)(v17 + 4) = 0x10;
    v18 = sub_948770((_DWORD *)v17, a5);
  }
  else
  {
    v18 = 0;
  }
  *(_DWORD *)(a1 + 0x18) = v18;
  v19 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x10, 0x32);
  v19[2] = 0x10;
  v20 = sub_9484E0(v19, *(_DWORD *)(a1 + 0x18));
  if ( v20 )
    *(_DWORD *)(a1 + 0x1C) = v20 + 4;
  else
    *(_DWORD *)(a1 + 0x1C) = 0;
  *(_DWORD *)(a1 + 0x20) = a1 + 8;
  return (_DWORD *)a1;
}
