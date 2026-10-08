int __thiscall sub_90C830(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  result = *(this + 0x1A); /*0x90c833*/
  if ( result >= 0 ) /*0x90c838*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x90c84a*/
    if ( !v3 ) /*0x90c852*/
      v3 = unk_BA7D9C; /*0x90c854*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 0x18), 4 * result, 0x14); /*0x90c869*/
  }
  *this = &hkBaseObject::`vftable'; /*0x90c86e*/
  return result; /*0x90c874*/
}
