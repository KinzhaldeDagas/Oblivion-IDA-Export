int __thiscall sub_903910(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  result = *(this + 5); /*0x903913*/
  if ( result >= 0 ) /*0x903918*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x90392a*/
    if ( !v3 ) /*0x903932*/
      v3 = unk_BA7D9C; /*0x903934*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 3), 4 * result, 0x14); /*0x903949*/
  }
  *this = &hkBaseObject::`vftable'; /*0x90394e*/
  return result; /*0x903954*/
}
