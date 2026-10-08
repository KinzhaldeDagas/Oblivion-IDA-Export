int __thiscall sub_8A6900(int *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx

  *this = (int)&off_A975A8; /*0x8a6906*/
  sub_8DBF50((int)this); /*0x8a690c*/
  v2 = *(this + 0x19); /*0x8a6911*/
  if ( v2 ) /*0x8a6919*/
  {
    if ( *(_WORD *)(v2 + 4) ) /*0x8a691b*/
    {
      if ( !--*(_WORD *)(v2 + 6) ) /*0x8a6926*/
        (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x8a6931*/
    }
  }
  v3 = *(this + 0x30); /*0x8a6933*/
  v4 = MEMORY[0xBA9DE4]; /*0x8a693b*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8a6941*/
  if ( v3 >= 0 ) /*0x8a6948*/
  {
    v6 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8a694d*/
    if ( !v6 ) /*0x8a6955*/
      v6 = unk_BA7D9C; /*0x8a6957*/
    sub_8A75D0(v6, (_DWORD *)*(this + 0x2E), 4 * v3, 0x14); /*0x8a696f*/
  }
  v7 = *(this + 0x2D); /*0x8a6974*/
  if ( v7 >= 0 ) /*0x8a697c*/
  {
    v8 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8a6981*/
    if ( !v8 ) /*0x8a6989*/
      v8 = unk_BA7D9C; /*0x8a698b*/
    sub_8A75D0(v8, (_DWORD *)*(this + 0x2B), 4 * v7, 0x14); /*0x8a69a3*/
  }
  v9 = *(this + 0x2A); /*0x8a69a8*/
  if ( v9 >= 0 ) /*0x8a69b0*/
  {
    v10 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8a69b5*/
    if ( !v10 ) /*0x8a69bd*/
      v10 = unk_BA7D9C; /*0x8a69bf*/
    sub_8A75D0(v10, (_DWORD *)*(this + 0x28), 4 * v9, 0x14); /*0x8a69d7*/
  }
  v11 = *(this + 0x27); /*0x8a69dc*/
  if ( v11 >= 0 ) /*0x8a69e4*/
  {
    v12 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8a69e9*/
    if ( !v12 ) /*0x8a69f1*/
      v12 = unk_BA7D9C; /*0x8a69f3*/
    sub_8A75D0(v12, (_DWORD *)*(this + 0x25), 4 * v11, 0x14); /*0x8a6a0b*/
  }
  v13 = *(this + 0x22); /*0x8a6a10*/
  if ( v13 >= 0 ) /*0x8a6a18*/
  {
    v14 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8a6a1d*/
    if ( !v14 ) /*0x8a6a25*/
      v14 = unk_BA7D9C; /*0x8a6a27*/
    sub_8A75D0(v14, (_DWORD *)*(this + 0x20), v13 & 0x3FFFFFFF, 0x14); /*0x8a6a3c*/
  }
  v15 = *(this + 0x1F); /*0x8a6a41*/
  if ( v15 >= 0 ) /*0x8a6a46*/
  {
    v16 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8a6a4b*/
    if ( !v16 ) /*0x8a6a53*/
      v16 = unk_BA7D9C; /*0x8a6a55*/
    sub_8A75D0(v16, (_DWORD *)*(this + 0x1D), 4 * v15, 0x14); /*0x8a6a6a*/
  }
  v17 = *(this + 0x1C); /*0x8a6a6f*/
  if ( v17 >= 0 ) /*0x8a6a74*/
  {
    v18 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8a6a79*/
    if ( !v18 ) /*0x8a6a81*/
      v18 = unk_BA7D9C; /*0x8a6a83*/
    sub_8A75D0(v18, (_DWORD *)*(this + 0x1A), 0x1C * (v17 & 0x3FFFFFFF), 0x14); /*0x8a6a98*/
  }
  return sub_8A66A0(this); /*0x8a6a9d*/
}
