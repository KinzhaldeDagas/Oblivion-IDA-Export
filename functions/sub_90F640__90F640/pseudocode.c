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

  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x130, 0x2E); /*0x90f658*/
  *(_WORD *)(v2 + 4) = 0x130; /*0x90f65a*/
  v3 = *(this + 0xC); /*0x90f663*/
  sub_8ABC40((char *)v2, *(this + 5), (_OWORD *)this + 7); /*0x90f66d*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90f672*/
  *(_DWORD *)v2 = &off_A9CAB8; /*0x90f679*/
  *(_DWORD *)(v2 + 0x120) = 0; /*0x90f681*/
  *(_DWORD *)(v2 + 0x124) = 0; /*0x90f687*/
  *(_DWORD *)(v2 + 0x128) = 0x80000000; /*0x90f68d*/
  *(_DWORD *)(v2 + 0x30) = v3; /*0x90f697*/
  v5 = MEMORY[0xBA9DE4]; /*0x90f6a9*/
  if ( (*(_DWORD *)(v2 + 0x58) & 0x3FFFFFFF) < *(this + 0x15) ) /*0x90f6af*/
  {
    if ( *(int *)(v2 + 0x58) >= 0 ) /*0x90f6b3*/
    {
      v6 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x90f6b9*/
      if ( !v6 ) /*0x90f6c1*/
        v6 = unk_BA7D9C; /*0x90f6c3*/
      sub_8A75D0(v6, *(_DWORD **)(v2 + 0x50), 4 * *(_DWORD *)(v2 + 0x58), 0x14); /*0x90f6d7*/
    }
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x90f6e0*/
    if ( !v7 ) /*0x90f6e8*/
      v7 = unk_BA7D9C; /*0x90f6ea*/
    *(_DWORD *)(v2 + 0x50) = sub_8A7560(v7, 4 * *(this + 0x15), 0x14); /*0x90f6ff*/
    *(_DWORD *)(v2 + 0x58) = *(this + 0x15) | *(_DWORD *)(v2 + 0x58) & 0x40000000; /*0x90f70f*/
  }
  v8 = *(this + 0x15); /*0x90f712*/
  v9 = *(_DWORD **)(v2 + 0x50); /*0x90f717*/
  *(_DWORD *)(v2 + 0x54) = v8; /*0x90f71a*/
  if ( v8 > 0 ) /*0x90f720*/
  {
    v10 = *(this + 0x14) - (_DWORD)v9; /*0x90f722*/
    do /*0x90f72d*/
    {
      *v9 = *(_DWORD *)((char *)v9 + v10); /*0x90f727*/
      ++v9; /*0x90f729*/
      --v8; /*0x90f72c*/
    }
    while ( v8 ); /*0x90f72d*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90f72f*/
  }
  if ( (*(_DWORD *)(v2 + 0x64) & 0x3FFFFFFF) < *(this + 0x18) ) /*0x90f745*/
  {
    if ( *(int *)(v2 + 0x64) >= 0 ) /*0x90f749*/
    {
      v11 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x90f74f*/
      if ( !v11 ) /*0x90f757*/
        v11 = unk_BA7D9C; /*0x90f759*/
      sub_8A75D0(v11, *(_DWORD **)(v2 + 0x5C), 4 * *(_DWORD *)(v2 + 0x64), 0x14); /*0x90f76d*/
    }
    v12 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x90f776*/
    if ( !v12 ) /*0x90f77e*/
      v12 = unk_BA7D9C; /*0x90f780*/
    *(_DWORD *)(v2 + 0x5C) = sub_8A7560(v12, 4 * *(this + 0x18), 0x14); /*0x90f795*/
    *(_DWORD *)(v2 + 0x64) = *(this + 0x18) | *(_DWORD *)(v2 + 0x64) & 0x40000000; /*0x90f7a5*/
  }
  v13 = *(this + 0x18); /*0x90f7a8*/
  v14 = *(_DWORD **)(v2 + 0x5C); /*0x90f7ad*/
  *(_DWORD *)(v2 + 0x60) = v13; /*0x90f7b0*/
  if ( v13 > 0 ) /*0x90f7b6*/
  {
    v15 = *(this + 0x17) - (_DWORD)v14; /*0x90f7b8*/
    do /*0x90f7c9*/
    {
      *v14 = *(_DWORD *)((char *)v14 + v15); /*0x90f7c3*/
      ++v14; /*0x90f7c5*/
      --v13; /*0x90f7c8*/
    }
    while ( v13 ); /*0x90f7c9*/
  }
  sub_8A9E50((int *)v2, (int)this); /*0x90f7ce*/
  return v2; /*0x90f7d3*/
}
