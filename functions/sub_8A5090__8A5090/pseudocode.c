int __thiscall sub_8A5090(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  result = *(this + 5); /*0x8a5092*/
  if ( result >= 0 ) /*0x8a5097*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8a50aa*/
    if ( !v3 ) /*0x8a50b3*/
      v3 = unk_BA7D9C; /*0x8a50b5*/
    return sub_8A75D0(v3, (_DWORD *)*(this + 3), 8 * result, 0x14); /*0x8a50cd*/
  }
  return result; /*0x8a50d2*/
}
