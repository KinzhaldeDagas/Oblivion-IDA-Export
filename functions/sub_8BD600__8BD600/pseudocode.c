int *__thiscall sub_8BD600(int *this, char a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(this + 5); /*0x8bd603*/
  if ( v3 >= 0 ) /*0x8bd608*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8bd61a*/
    if ( !v4 ) /*0x8bd622*/
      v4 = unk_BA7D9C; /*0x8bd624*/
    sub_8A75D0(v4, (_DWORD *)*(this + 3), 8 * v3, 0x14); /*0x8bd63c*/
  }
  if ( (a2 & 1) != 0 ) /*0x8bd646*/
  {
    if ( this ) /*0x8bd64a*/
      MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF)); /*0x8bd65a*/
  }
  return this; /*0x8bd661*/
}
