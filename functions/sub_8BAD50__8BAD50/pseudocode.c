int __thiscall sub_8BAD50(_DWORD *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8bad51*/
  v3 = *(this + 8); /*0x8bad5b*/
  v4 = MEMORY[0xBA9DE4]; /*0x8bad61*/
  if ( v3 >= 0 ) /*0x8bad67*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8bad6c*/
    if ( !v5 ) /*0x8bad74*/
      v5 = unk_BA7D9C; /*0x8bad76*/
    sub_8A75D0(v5, (_DWORD *)*(this + 6), v3 & 0x3FFFFFFF, 0x14); /*0x8bad88*/
  }
  v6 = *(this + 5); /*0x8bad8d*/
  if ( v6 >= 0 ) /*0x8bad92*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8bad97*/
    if ( !v7 ) /*0x8bad9f*/
      v7 = unk_BA7D9C; /*0x8bada1*/
    sub_8A75D0(v7, (_DWORD *)*(this + 3), 4 * v6, 0x14); /*0x8badb6*/
  }
  result = *(this + 2); /*0x8badbb*/
  if ( result >= 0 ) /*0x8badc0*/
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8badc5*/
    if ( !v9 ) /*0x8badcd*/
      v9 = unk_BA7D9C; /*0x8badcf*/
    return sub_8A75D0(v9, (_DWORD *)*this, 0x18 * (result & 0x3FFFFFFF), 0x14); /*0x8bade6*/
  }
  return result; /*0x8badeb*/
}
