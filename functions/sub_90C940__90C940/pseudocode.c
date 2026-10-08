int __thiscall sub_90C940(_DWORD *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int result; // eax
  int v15; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90c941*/
  v3 = *(this + 0x11); /*0x90c94b*/
  v4 = MEMORY[0xBA9DE4]; /*0x90c951*/
  if ( v3 >= 0 ) /*0x90c957*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x90c95c*/
    if ( !v5 ) /*0x90c964*/
      v5 = unk_BA7D9C; /*0x90c966*/
    sub_8A75D0(v5, (_DWORD *)*(this + 0xF), 2 * (v3 & 0x3FFFFFFF), 0x14); /*0x90c97a*/
  }
  v6 = *(this + 0xE); /*0x90c97f*/
  if ( v6 >= 0 ) /*0x90c984*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x90c989*/
    if ( !v7 ) /*0x90c991*/
      v7 = unk_BA7D9C; /*0x90c993*/
    sub_8A75D0(v7, (_DWORD *)*(this + 0xC), 4 * v6, 0x14); /*0x90c9a8*/
  }
  v8 = *(this + 0xB); /*0x90c9ad*/
  if ( v8 >= 0 ) /*0x90c9b2*/
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x90c9b7*/
    if ( !v9 ) /*0x90c9bf*/
      v9 = unk_BA7D9C; /*0x90c9c1*/
    sub_8A75D0(v9, (_DWORD *)*(this + 9), v8 & 0x3FFFFFFF, 0x14); /*0x90c9d3*/
  }
  v10 = *(this + 8); /*0x90c9d8*/
  if ( v10 >= 0 ) /*0x90c9dd*/
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x90c9e2*/
    if ( !v11 ) /*0x90c9ea*/
      v11 = unk_BA7D9C; /*0x90c9ec*/
    sub_8A75D0(v11, (_DWORD *)*(this + 6), 4 * v10, 0x14); /*0x90ca01*/
  }
  v12 = *(this + 5); /*0x90ca06*/
  if ( v12 >= 0 ) /*0x90ca0b*/
  {
    v13 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x90ca10*/
    if ( !v13 ) /*0x90ca18*/
      v13 = unk_BA7D9C; /*0x90ca1a*/
    sub_8A75D0(v13, (_DWORD *)*(this + 3), 2 * (v12 & 0x3FFFFFFF), 0x14); /*0x90ca2e*/
  }
  result = *(this + 2); /*0x90ca33*/
  if ( result >= 0 ) /*0x90ca38*/
  {
    v15 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x90ca3d*/
    if ( !v15 ) /*0x90ca45*/
      v15 = unk_BA7D9C; /*0x90ca47*/
    return sub_8A75D0(v15, (_DWORD *)*this, 4 * result, 0x14); /*0x90ca5b*/
  }
  return result; /*0x90ca60*/
}
