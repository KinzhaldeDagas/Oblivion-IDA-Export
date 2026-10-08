int __thiscall sub_893510(int *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ecx
  int result; // eax
  int v7; // ecx

  v2 = *(this + 6); /*0x89353a*/
  v3 = MEMORY[0xBA9DE4]; /*0x89353f*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x893545*/
  if ( v2 >= 0 ) /*0x893554*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x893559*/
    if ( !v5 ) /*0x893561*/
      v5 = unk_BA7D9C; /*0x893563*/
    sub_8A75D0(v5, (_DWORD *)*(this + 4), 4 * v2, 0x14); /*0x893579*/
  }
  result = *(this + 3); /*0x89357e*/
  if ( result >= 0 ) /*0x89358b*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x893590*/
    if ( !v7 ) /*0x893598*/
      v7 = unk_BA7D9C; /*0x89359a*/
    return sub_8A75D0(v7, (_DWORD *)*(this + 1), 4 * result, 0x14); /*0x8935b0*/
  }
  return result; /*0x8935b5*/
}
