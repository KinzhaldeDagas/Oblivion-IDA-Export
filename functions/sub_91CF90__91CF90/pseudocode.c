int __thiscall sub_91CF90(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  result = *(this + 4); /*0x91cf93*/
  if ( result >= 0 ) /*0x91cf98*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91cfaa*/
    if ( !v3 ) /*0x91cfb2*/
      v3 = unk_BA7D9C; /*0x91cfb4*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 2), 4 * result, 0x14); /*0x91cfc9*/
  }
  *this = &hkBaseObject::`vftable'; /*0x91cfce*/
  return result; /*0x91cfd4*/
}
