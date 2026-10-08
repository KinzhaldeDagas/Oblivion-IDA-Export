void __thiscall sub_8B7CE0(unsigned int *this, char a2)
{
  unsigned int v3; // esi
  int v4; // eax
  int v5; // ecx

  if ( a2 ) /*0x8b7ce8*/
  {
    v3 = *(this + 3); /*0x8b7ceb*/
    if ( v3 ) /*0x8b7cf0*/
    {
      v4 = *(_DWORD *)(v3 + 0xC); /*0x8b7cf2*/
      if ( v4 >= 0 ) /*0x8b7cf7*/
      {
        v5 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8b7d09*/
        if ( !v5 ) /*0x8b7d11*/
          v5 = unk_BA7D9C; /*0x8b7d13*/
        sub_8A75D0(v5, *(_DWORD **)(v3 + 4), 0x10 * v4, 0x14); /*0x8b7d28*/
      }
      FormHeapFree(v3); /*0x8b7d2e*/
    }
    *(this + 3) = 0; /*0x8b7d36*/
  }
}
