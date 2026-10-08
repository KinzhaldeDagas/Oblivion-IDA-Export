int __thiscall sub_90F5C0(int *this)
{
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  int v5; // ecx

  v2 = *(this + 0x49) - 1; /*0x90f5ca*/
  for ( *this = (int)&off_A9CAB8; v2 >= 0; --v2 ) /*0x90f5d1*/
  {
    v3 = *(_DWORD *)(*(this + 0x48) + 8 * v2); /*0x90f5d9*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3); /*0x90f5e1*/
  }
  *(this + 0x49) = 0; /*0x90f5e7*/
  v4 = *(this + 0x4A); /*0x90f5f1*/
  if ( v4 >= 0 ) /*0x90f5f9*/
  {
    v5 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x90f60b*/
    if ( !v5 ) /*0x90f613*/
      v5 = unk_BA7D9C; /*0x90f615*/
    sub_8A75D0(v5, (_DWORD *)*(this + 0x48), 8 * v4, 0x14); /*0x90f62d*/
  }
  return sub_8DE8B0(this); /*0x90f634*/
}
