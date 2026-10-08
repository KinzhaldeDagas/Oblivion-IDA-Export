int __thiscall sub_8ED060(_DWORD *this)
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

  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x130, 0x2E); /*0x8ed078*/
  *(_WORD *)(v2 + 4) = 0x130; /*0x8ed07a*/
  v3 = *(this + 0xC); /*0x8ed083*/
  sub_8ABC40((char *)v2, *(this + 5), (_OWORD *)this + 7); /*0x8ed08d*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ed092*/
  *(_DWORD *)v2 = &off_A9AFFC; /*0x8ed099*/
  *(_DWORD *)(v2 + 0x120) = 0; /*0x8ed0a1*/
  *(_DWORD *)(v2 + 0x124) = 0; /*0x8ed0a7*/
  *(_DWORD *)(v2 + 0x128) = 0x80000000; /*0x8ed0ad*/
  *(_DWORD *)(v2 + 0x30) = v3; /*0x8ed0b7*/
  v5 = MEMORY[0xBA9DE4]; /*0x8ed0c9*/
  if ( (*(_DWORD *)(v2 + 0x58) & 0x3FFFFFFF) < *(this + 0x15) ) /*0x8ed0cf*/
  {
    if ( *(int *)(v2 + 0x58) >= 0 ) /*0x8ed0d3*/
    {
      v6 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x8ed0d9*/
      if ( !v6 ) /*0x8ed0e1*/
        v6 = unk_BA7D9C; /*0x8ed0e3*/
      sub_8A75D0(v6, *(_DWORD **)(v2 + 0x50), 4 * *(_DWORD *)(v2 + 0x58), 0x14); /*0x8ed0f7*/
    }
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x8ed100*/
    if ( !v7 ) /*0x8ed108*/
      v7 = unk_BA7D9C; /*0x8ed10a*/
    *(_DWORD *)(v2 + 0x50) = sub_8A7560(v7, 4 * *(this + 0x15), 0x14); /*0x8ed11f*/
    *(_DWORD *)(v2 + 0x58) = *(this + 0x15) | *(_DWORD *)(v2 + 0x58) & 0x40000000; /*0x8ed12f*/
  }
  v8 = *(this + 0x15); /*0x8ed132*/
  v9 = *(_DWORD **)(v2 + 0x50); /*0x8ed137*/
  *(_DWORD *)(v2 + 0x54) = v8; /*0x8ed13a*/
  if ( v8 > 0 ) /*0x8ed140*/
  {
    v10 = *(this + 0x14) - (_DWORD)v9; /*0x8ed142*/
    do /*0x8ed14d*/
    {
      *v9 = *(_DWORD *)((char *)v9 + v10); /*0x8ed147*/
      ++v9; /*0x8ed149*/
      --v8; /*0x8ed14c*/
    }
    while ( v8 ); /*0x8ed14d*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8ed14f*/
  }
  if ( (*(_DWORD *)(v2 + 0x64) & 0x3FFFFFFF) < *(this + 0x18) ) /*0x8ed165*/
  {
    if ( *(int *)(v2 + 0x64) >= 0 ) /*0x8ed169*/
    {
      v11 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x8ed16f*/
      if ( !v11 ) /*0x8ed177*/
        v11 = unk_BA7D9C; /*0x8ed179*/
      sub_8A75D0(v11, *(_DWORD **)(v2 + 0x5C), 4 * *(_DWORD *)(v2 + 0x64), 0x14); /*0x8ed18d*/
    }
    v12 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x8ed196*/
    if ( !v12 ) /*0x8ed19e*/
      v12 = unk_BA7D9C; /*0x8ed1a0*/
    *(_DWORD *)(v2 + 0x5C) = sub_8A7560(v12, 4 * *(this + 0x18), 0x14); /*0x8ed1b5*/
    *(_DWORD *)(v2 + 0x64) = *(this + 0x18) | *(_DWORD *)(v2 + 0x64) & 0x40000000; /*0x8ed1c5*/
  }
  v13 = *(this + 0x18); /*0x8ed1c8*/
  v14 = *(_DWORD **)(v2 + 0x5C); /*0x8ed1cd*/
  *(_DWORD *)(v2 + 0x60) = v13; /*0x8ed1d0*/
  if ( v13 > 0 ) /*0x8ed1d6*/
  {
    v15 = *(this + 0x17) - (_DWORD)v14; /*0x8ed1d8*/
    do /*0x8ed1e9*/
    {
      *v14 = *(_DWORD *)((char *)v14 + v15); /*0x8ed1e3*/
      ++v14; /*0x8ed1e5*/
      --v13; /*0x8ed1e8*/
    }
    while ( v13 ); /*0x8ed1e9*/
  }
  sub_8A9E50((int *)v2, (int)this); /*0x8ed1ee*/
  return v2; /*0x8ed1f3*/
}
