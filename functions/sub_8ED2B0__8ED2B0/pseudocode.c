unsigned int __thiscall sub_8ED2B0(int *this)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // eax

  if ( !*(this + 0x49) ) /*0x8ed2b3*/
  {
    v2 = *(this + 0x4A); /*0x8ed2bd*/
    if ( v2 >= 0 ) /*0x8ed2c5*/
    {
      v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8ed2d7*/
      if ( !v3 ) /*0x8ed2df*/
        v3 = unk_BA7D9C; /*0x8ed2e1*/
      sub_8A75D0(v3, (_DWORD *)*(this + 0x48), 4 * v2, 0x14); /*0x8ed2f9*/
    }
    v4 = *(this + 0x4A) & 0x40000000 | 0x80000000; /*0x8ed309*/
    *(this + 0x48) = 0; /*0x8ed30e*/
    *(this + 0x49) = 0; /*0x8ed318*/
    *(this + 0x4A) = v4; /*0x8ed322*/
  }
  return sub_8ABA30(this); /*0x8ed32a*/
}
