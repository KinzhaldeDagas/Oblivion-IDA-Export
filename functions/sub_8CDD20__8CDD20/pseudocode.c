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

  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xA0, 0x2E); /*0x8cdd35*/
  *(_WORD *)(v2 + 4) = 0xA0; /*0x8cdd38*/
  v3 = sub_8CDCB0((char *)v2, (_OWORD *)(this + 0x70), *(_DWORD *)(this + 0x30)); /*0x8cdd48*/
  v4 = MEMORY[0xBA9DE4]; /*0x8cdd50*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8cdd56*/
  v6 = v3; /*0x8cdd5d*/
  v7 = *((_DWORD *)v3 + 0x16); /*0x8cdd5f*/
  v8 = v7 & 0x3FFFFFFF; /*0x8cdd64*/
  if ( (v7 & 0x3FFFFFFF) < *(_DWORD *)(this + 0x54) ) /*0x8cdd6b*/
  {
    if ( v7 >= 0 ) /*0x8cdd6f*/
    {
      v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8cdd75*/
      if ( !v9 ) /*0x8cdd7d*/
        v9 = unk_BA7D9C; /*0x8cdd7f*/
      sub_8A75D0(v9, *((_DWORD **)v6 + 0x14), 4 * v8, 0x14); /*0x8cdd8f*/
    }
    v10 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8cdd98*/
    if ( !v10 ) /*0x8cdda0*/
      v10 = unk_BA7D9C; /*0x8cdda2*/
    v11 = sub_8A7560(v10, 4 * *(_DWORD *)(this + 0x54), 0x14); /*0x8cddb2*/
    v12 = *((_DWORD *)v6 + 0x16); /*0x8cddb7*/
    *((_DWORD *)v6 + 0x14) = v11; /*0x8cddba*/
    *((_DWORD *)v6 + 0x16) = *(_DWORD *)(this + 0x54) | v12 & 0x40000000; /*0x8cddc8*/
  }
  v13 = *(_DWORD *)(this + 0x54); /*0x8cddcb*/
  v14 = *((_DWORD **)v6 + 0x14); /*0x8cddd0*/
  *((_DWORD *)v6 + 0x15) = v13; /*0x8cddd3*/
  if ( v13 > 0 ) /*0x8cddd9*/
  {
    v15 = *(_DWORD *)(this + 0x50) - (_DWORD)v14; /*0x8cdddb*/
    do /*0x8cdde9*/
    {
      *v14 = *(_DWORD *)((char *)v14 + v15); /*0x8cdde3*/
      ++v14; /*0x8cdde5*/
      --v13; /*0x8cdde8*/
    }
    while ( v13 ); /*0x8cdde9*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8cddeb*/
  }
  if ( (*((_DWORD *)v6 + 0x19) & 0x3FFFFFFF) < *(_DWORD *)(this + 0x60) ) /*0x8cde01*/
  {
    if ( *((int *)v6 + 0x19) >= 0 ) /*0x8cde05*/
    {
      v16 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8cde0b*/
      if ( !v16 ) /*0x8cde13*/
        v16 = unk_BA7D9C; /*0x8cde15*/
      sub_8A75D0(v16, *((_DWORD **)v6 + 0x17), 4 * *((_DWORD *)v6 + 0x19), 0x14); /*0x8cde29*/
    }
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8cde32*/
    if ( !v17 ) /*0x8cde3a*/
      v17 = unk_BA7D9C; /*0x8cde3c*/
    *((_DWORD *)v6 + 0x17) = sub_8A7560(v17, 4 * *(_DWORD *)(this + 0x60), 0x14); /*0x8cde51*/
    *((_DWORD *)v6 + 0x19) = *(_DWORD *)(this + 0x60) | *((_DWORD *)v6 + 0x19) & 0x40000000; /*0x8cde61*/
  }
  v18 = *(_DWORD *)(this + 0x60); /*0x8cde64*/
  v19 = *((_DWORD **)v6 + 0x17); /*0x8cde69*/
  *((_DWORD *)v6 + 0x18) = v18; /*0x8cde6c*/
  if ( v18 > 0 ) /*0x8cde72*/
  {
    v20 = *(_DWORD *)(this + 0x5C) - (_DWORD)v19; /*0x8cde74*/
    do /*0x8cde7f*/
    {
      *v19 = *(_DWORD *)((char *)v19 + v20); /*0x8cde79*/
      ++v19; /*0x8cde7b*/
      --v18; /*0x8cde7e*/
    }
    while ( v18 ); /*0x8cde7f*/
  }
  sub_8A9E50((int *)v6, this); /*0x8cde84*/
  return v6; /*0x8cde8b*/
}
