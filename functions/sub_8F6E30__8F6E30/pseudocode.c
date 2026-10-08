int __thiscall sub_8F6E30(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  *this = &off_A9B510; /*0x8f6e33*/
  result = *(this + 0xE); /*0x8f6e39*/
  if ( result >= 0 ) /*0x8f6e3e*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8f6e50*/
    if ( !v3 ) /*0x8f6e58*/
      v3 = unk_BA7D9C; /*0x8f6e5a*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 0xC), 4 * result, 0x14); /*0x8f6e6f*/
  }
  *this = &hkBaseObject::`vftable'; /*0x8f6e74*/
  return result; /*0x8f6e7a*/
}
