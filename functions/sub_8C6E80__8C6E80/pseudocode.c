int __thiscall sub_8C6E80(int *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int result; // eax
  int v27; // ecx

  v2 = *(this + 0x2C); /*0x8c6eaa*/
  v3 = MEMORY[0xBA9DE4]; /*0x8c6eb2*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8c6eb8*/
  if ( v2 >= 0 ) /*0x8c6ec7*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c6ecc*/
    if ( !v5 ) /*0x8c6ed4*/
      v5 = unk_BA7D9C; /*0x8c6ed6*/
    sub_8A75D0(v5, (_DWORD *)*(this + 0x2A), 4 * v2, 0x14); /*0x8c6eef*/
  }
  v6 = *(this + 0x29); /*0x8c6ef4*/
  if ( v6 >= 0 ) /*0x8c6f01*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c6f06*/
    if ( !v7 ) /*0x8c6f0e*/
      v7 = unk_BA7D9C; /*0x8c6f10*/
    sub_8A75D0(v7, (_DWORD *)*(this + 0x27), 4 * v6, 0x14); /*0x8c6f29*/
  }
  v8 = *(this + 0x26); /*0x8c6f2e*/
  if ( v8 >= 0 ) /*0x8c6f3b*/
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c6f40*/
    if ( !v9 ) /*0x8c6f48*/
      v9 = unk_BA7D9C; /*0x8c6f4a*/
    sub_8A75D0(v9, (_DWORD *)*(this + 0x24), 4 * v8, 0x14); /*0x8c6f63*/
  }
  v10 = *(this + 0x23); /*0x8c6f68*/
  if ( v10 >= 0 ) /*0x8c6f75*/
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c6f7a*/
    if ( !v11 ) /*0x8c6f82*/
      v11 = unk_BA7D9C; /*0x8c6f84*/
    sub_8A75D0(v11, (_DWORD *)*(this + 0x21), 4 * v10, 0x14); /*0x8c6f9d*/
  }
  v12 = *(this + 0x20); /*0x8c6fa2*/
  if ( v12 >= 0 ) /*0x8c6faf*/
  {
    v13 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c6fb4*/
    if ( !v13 ) /*0x8c6fbc*/
      v13 = unk_BA7D9C; /*0x8c6fbe*/
    sub_8A75D0(v13, (_DWORD *)*(this + 0x1E), 4 * v12, 0x14); /*0x8c6fd4*/
  }
  v14 = *(this + 0x1D); /*0x8c6fd9*/
  if ( v14 >= 0 ) /*0x8c6fe3*/
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c6fe8*/
    if ( !v15 ) /*0x8c6ff0*/
      v15 = unk_BA7D9C; /*0x8c6ff2*/
    sub_8A75D0(v15, (_DWORD *)*(this + 0x1B), 4 * v14, 0x14); /*0x8c7008*/
  }
  v16 = *(this + 0x1A); /*0x8c700d*/
  if ( v16 >= 0 ) /*0x8c7017*/
  {
    v17 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c701c*/
    if ( !v17 ) /*0x8c7024*/
      v17 = unk_BA7D9C; /*0x8c7026*/
    sub_8A75D0(v17, (_DWORD *)*(this + 0x18), 4 * v16, 0x14); /*0x8c703c*/
  }
  v18 = *(this + 0x17); /*0x8c7041*/
  if ( v18 >= 0 ) /*0x8c704b*/
  {
    v19 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c7050*/
    if ( !v19 ) /*0x8c7058*/
      v19 = unk_BA7D9C; /*0x8c705a*/
    sub_8A75D0(v19, (_DWORD *)*(this + 0x15), v18 & 0x3FFFFFFF, 0x14); /*0x8c706c*/
  }
  v20 = *(this + 0x14); /*0x8c7071*/
  if ( v20 >= 0 ) /*0x8c707b*/
  {
    v21 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c7080*/
    if ( !v21 ) /*0x8c7088*/
      v21 = unk_BA7D9C; /*0x8c708a*/
    sub_8A75D0(v21, (_DWORD *)*(this + 0x12), 4 * v20, 0x14); /*0x8c70a0*/
  }
  v22 = *(this + 0x11); /*0x8c70a5*/
  if ( v22 >= 0 ) /*0x8c70af*/
  {
    v23 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c70b4*/
    if ( !v23 ) /*0x8c70bc*/
      v23 = unk_BA7D9C; /*0x8c70be*/
    sub_8A75D0(v23, (_DWORD *)*(this + 0xF), 4 * v22, 0x14); /*0x8c70d4*/
  }
  v24 = *(this + 0xE); /*0x8c70d9*/
  if ( v24 >= 0 ) /*0x8c70e3*/
  {
    v25 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c70e8*/
    if ( !v25 ) /*0x8c70f0*/
      v25 = unk_BA7D9C; /*0x8c70f2*/
    sub_8A75D0(v25, (_DWORD *)*(this + 0xC), 4 * v24, 0x14); /*0x8c7108*/
  }
  result = *(this + 0xB); /*0x8c710d*/
  if ( result >= 0 ) /*0x8c711a*/
  {
    v27 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c711f*/
    if ( !v27 ) /*0x8c7127*/
      v27 = unk_BA7D9C; /*0x8c7129*/
    return sub_8A75D0(v27, (_DWORD *)*(this + 9), 4 * result, 0x14); /*0x8c713f*/
  }
  return result; /*0x8c7144*/
}
