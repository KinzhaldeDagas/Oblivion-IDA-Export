int __thiscall sub_8C8DB0(int *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ecx
  int result; // eax
  int v7; // ecx

  v2 = *(this + 7); /*0x8c8dda*/
  v3 = MEMORY[0xBA9DE4]; /*0x8c8ddf*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8c8de5*/
  if ( v2 >= 0 ) /*0x8c8df4*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c8df9*/
    if ( !v5 ) /*0x8c8e01*/
      v5 = unk_BA7D9C; /*0x8c8e03*/
    sub_8A75D0(v5, (_DWORD *)*(this + 5), 0x10 * v2, 0x14); /*0x8c8e18*/
  }
  result = *(this + 4); /*0x8c8e1d*/
  if ( result >= 0 ) /*0x8c8e2a*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8c8e2f*/
    if ( !v7 ) /*0x8c8e37*/
      v7 = unk_BA7D9C; /*0x8c8e39*/
    return sub_8A75D0(v7, (_DWORD *)*(this + 2), 0x10 * result, 0x14); /*0x8c8e4e*/
  }
  return result; /*0x8c8e53*/
}
