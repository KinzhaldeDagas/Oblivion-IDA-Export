_DWORD *__userpurge sub_9187A0@<eax>(int a1@<ecx>, int a2@<ebx>, _DWORD *a3, int a4, int a5)
{
  int *v6; // edi
  char **v7; // ebp
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

  *(_WORD *)(a1 + 6) = 1; /*0x9187aa*/
  *(_DWORD *)(a1 + 8) = &off_A9D1D8; /*0x9187ae*/
  *(_DWORD *)(a1 + 0xC) = &off_A9D1C0; /*0x9187b5*/
  *(_BYTE *)(a1 + 0x10) = 0; /*0x9187bc*/
  v6 = (int *)(a1 + 0xC); /*0x9187c1*/
  v7 = (char **)(a1 + 0x24); /*0x9187c4*/
  *(_DWORD *)a1 = &off_A9D230; /*0x9187c7*/
  *(_DWORD *)(a1 + 8) = &off_A9D214; /*0x9187cd*/
  *(_DWORD *)(a1 + 0xC) = &off_A9D1FC; /*0x9187d4*/
  *(_WORD *)(a1 + 0x2A) = 1; /*0x9187dd*/
  *(_DWORD *)(a1 + 0x24) = &off_A9D1F4; /*0x9187e1*/
  sub_8B0E10((char **)(a1 + 0x2C), a2); /*0x9187e8*/
  *(_DWORD *)(a1 + 0x38) = 0; /*0x9187ef*/
  *(_DWORD *)(a1 + 0x3C) = 0; /*0x9187f2*/
  *(_DWORD *)(a1 + 0x40) = 0x80000000; /*0x9187fa*/
  *(_DWORD *)(a1 + 0x44) = 0; /*0x918800*/
  *(_DWORD *)(a1 + 0x48) = 0; /*0x918803*/
  *(_DWORD *)(a1 + 0x4C) = 0x80000000; /*0x918806*/
  sub_947EE0(v7, v6); /*0x918809*/
  if ( (*(_DWORD *)(a1 + 0x4C) & 0x3FFFFFFF) < a3[1] ) /*0x918821*/
  {
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x918823*/
    v9 = MEMORY[0xBA9DE4]; /*0x91882c*/
    if ( *(int *)(a1 + 0x4C) >= 0 ) /*0x918832*/
    {
      v10 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C); /*0x918838*/
      if ( !v10 ) /*0x918840*/
        v10 = unk_BA7D9C; /*0x918842*/
      sub_8A75D0(v10, *(_DWORD **)(a1 + 0x44), 4 * *(_DWORD *)(a1 + 0x4C), 0x14); /*0x918856*/
    }
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C); /*0x91885f*/
    if ( !v11 ) /*0x918867*/
      v11 = unk_BA7D9C; /*0x918869*/
    *(_DWORD *)(a1 + 0x44) = sub_8A7560(v11, 4 * a3[1], 0x14); /*0x91887e*/
    *(_DWORD *)(a1 + 0x4C) = a3[1] | *(_DWORD *)(a1 + 0x4C) & 0x40000000; /*0x91888e*/
  }
  v12 = a3[1]; /*0x918891*/
  v13 = *(_DWORD **)(a1 + 0x44); /*0x918896*/
  *(_DWORD *)(a1 + 0x48) = v12; /*0x918899*/
  if ( v12 > 0 ) /*0x91889e*/
  {
    v14 = *a3 - (_DWORD)v13; /*0x9188a0*/
    do /*0x9188ab*/
    {
      *v13 = *(_DWORD *)((char *)v13 + v14); /*0x9188a5*/
      ++v13; /*0x9188a7*/
      --v12; /*0x9188aa*/
    }
    while ( v12 ); /*0x9188ab*/
  }
  if ( a4 ) /*0x9188b8*/
  {
    v15 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x17); /*0x9188c5*/
    v15[2] = 0x10; /*0x9188cb*/
    v16 = sub_948C30(v15, a4); /*0x9188cf*/
  }
  else
  {
    v16 = 0; /*0x9188d6*/
  }
  *(_DWORD *)(a1 + 0x14) = v16; /*0x9188de*/
  if ( a5 ) /*0x9188e1*/
  {
    v17 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x17); /*0x9188ee*/
    *(_WORD *)(v17 + 4) = 0x10; /*0x9188f4*/
    v18 = sub_948770((_DWORD *)v17, a5); /*0x9188f8*/
  }
  else
  {
    v18 = 0; /*0x9188ff*/
  }
  *(_DWORD *)(a1 + 0x18) = v18; /*0x918901*/
  v19 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x32); /*0x91890f*/
  v19[2] = 0x10; /*0x918912*/
  v20 = sub_9484E0(v19, *(_DWORD *)(a1 + 0x18)); /*0x91891c*/
  if ( v20 ) /*0x918923*/
    *(_DWORD *)(a1 + 0x1C) = v20 + 4; /*0x918928*/
  else
    *(_DWORD *)(a1 + 0x1C) = 0; /*0x91893c*/
  *(_DWORD *)(a1 + 0x20) = a1 + 8; /*0x91892f*/
  return (_DWORD *)a1; /*0x91892e*/
}
