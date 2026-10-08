int __thiscall sub_8ED000(int *this)
{
  int v2; // eax
  int v3; // ecx

  *this = (int)&off_A9AFFC; /*0x8ed003*/
  v2 = *(this + 0x4A); /*0x8ed009*/
  if ( v2 >= 0 ) /*0x8ed011*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8ed023*/
    if ( !v3 ) /*0x8ed02b*/
      v3 = unk_BA7D9C; /*0x8ed02d*/
    sub_8A75D0(v3, (_DWORD *)*(this + 0x48), 4 * v2, 0x14); /*0x8ed045*/
  }
  return sub_8DE8B0(this); /*0x8ed04c*/
}
