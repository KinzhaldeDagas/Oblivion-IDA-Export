unsigned int __thiscall sub_8CDBB0(int *this)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // eax

  if ( !*(this + 0x25) ) /*0x8cdbb3*/
  {
    v2 = *(this + 0x26); /*0x8cdbbd*/
    if ( v2 >= 0 ) /*0x8cdbc5*/
    {
      v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8cdbd7*/
      if ( !v3 ) /*0x8cdbdf*/
        v3 = unk_BA7D9C; /*0x8cdbe1*/
      sub_8A75D0(v3, (_DWORD *)*(this + 0x24), 4 * v2, 0x14); /*0x8cdbf9*/
    }
    v4 = *(this + 0x26) & 0x40000000 | 0x80000000; /*0x8cdc09*/
    *(this + 0x24) = 0; /*0x8cdc0e*/
    *(this + 0x25) = 0; /*0x8cdc18*/
    *(this + 0x26) = v4; /*0x8cdc22*/
  }
  return sub_8DE800(this); /*0x8cdc2a*/
}
