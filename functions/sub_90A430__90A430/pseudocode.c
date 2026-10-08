int __thiscall sub_90A430(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  result = *(this + 5); /*0x90a433*/
  if ( result >= 0 ) /*0x90a438*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x90a44a*/
    if ( !v3 ) /*0x90a452*/
      v3 = unk_BA7D9C; /*0x90a454*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 3), 8 * result, 0x14); /*0x90a469*/
  }
  *this = &hkBaseObject::`vftable'; /*0x90a46e*/
  return result; /*0x90a474*/
}
