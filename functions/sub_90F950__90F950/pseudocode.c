unsigned int __thiscall sub_90F950(int *this)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // eax

  if ( !*(this + 0x49) ) /*0x90f953*/
  {
    v2 = *(this + 0x4A); /*0x90f95d*/
    if ( v2 >= 0 ) /*0x90f965*/
    {
      v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x90f977*/
      if ( !v3 ) /*0x90f97f*/
        v3 = unk_BA7D9C; /*0x90f981*/
      sub_8A75D0(v3, (_DWORD *)*(this + 0x48), 8 * v2, 0x14); /*0x90f999*/
    }
    v4 = *(this + 0x4A) & 0x40000000 | 0x80000000; /*0x90f9a9*/
    *(this + 0x48) = 0; /*0x90f9ae*/
    *(this + 0x49) = 0; /*0x90f9b8*/
    *(this + 0x4A) = v4; /*0x90f9c2*/
  }
  return sub_8ABA30(this); /*0x90f9ca*/
}
