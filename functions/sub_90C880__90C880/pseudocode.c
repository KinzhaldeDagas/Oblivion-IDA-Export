int __thiscall sub_90C880(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  result = *(this + 0xB); /*0x90c883*/
  if ( result >= 0 ) /*0x90c888*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x90c89a*/
    if ( !v3 ) /*0x90c8a2*/
      v3 = unk_BA7D9C; /*0x90c8a4*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 9), 0x30 * (result & 0x3FFFFFFF), 0x14); /*0x90c8bc*/
  }
  *this = &hkBaseObject::`vftable'; /*0x90c8c1*/
  return result; /*0x90c8c7*/
}
