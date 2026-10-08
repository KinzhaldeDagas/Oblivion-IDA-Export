int __thiscall sub_91F720(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  result = *(this + 6); /*0x91f723*/
  if ( result >= 0 ) /*0x91f728*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91f73a*/
    if ( !v3 ) /*0x91f742*/
      v3 = unk_BA7D9C; /*0x91f744*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 4), 0x20 * result, 0x14); /*0x91f759*/
  }
  *this = &hkBaseObject::`vftable'; /*0x91f75e*/
  return result; /*0x91f764*/
}
