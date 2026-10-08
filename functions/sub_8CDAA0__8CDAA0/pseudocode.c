int __thiscall sub_8CDAA0(int *this)
{
  int v2; // eax
  int v3; // ecx

  *this = (int)&off_A99BF0; /*0x8cdaa3*/
  v2 = *(this + 0x26); /*0x8cdaa9*/
  if ( v2 >= 0 ) /*0x8cdab1*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8cdac3*/
    if ( !v3 ) /*0x8cdacb*/
      v3 = unk_BA7D9C; /*0x8cdacd*/
    sub_8A75D0(v3, (_DWORD *)*(this + 0x24), 4 * v2, 0x14); /*0x8cdae5*/
  }
  return sub_8DE8B0(this); /*0x8cdaec*/
}
