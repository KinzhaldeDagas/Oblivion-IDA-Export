int __thiscall sub_8B44C0(_DWORD *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int result; // eax
  int v7; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8b44c1*/
  v3 = *(this + 5); /*0x8b44cb*/
  v4 = MEMORY[0xBA9DE4]; /*0x8b44d1*/
  if ( v3 >= 0 ) /*0x8b44d7*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8b44dc*/
    if ( !v5 ) /*0x8b44e4*/
      v5 = unk_BA7D9C; /*0x8b44e6*/
    sub_8A75D0(v5, (_DWORD *)*(this + 3), 0xC * (v3 & 0x3FFFFFFF), 0x14); /*0x8b44fe*/
  }
  result = *(this + 2); /*0x8b4503*/
  if ( result >= 0 ) /*0x8b4508*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8b450d*/
    if ( !v7 ) /*0x8b4515*/
      v7 = unk_BA7D9C; /*0x8b4517*/
    return sub_8A75D0(v7, (_DWORD *)*this, 0x10 * result, 0x14); /*0x8b452b*/
  }
  return result; /*0x8b4530*/
}
