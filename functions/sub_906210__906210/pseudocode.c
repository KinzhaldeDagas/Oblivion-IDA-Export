int __thiscall sub_906210(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  *this = &off_A9BE50; /*0x906213*/
  result = *(this + 5); /*0x906219*/
  if ( result >= 0 ) /*0x90621e*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x906230*/
    if ( !v3 ) /*0x906238*/
      v3 = unk_BA7D9C; /*0x90623a*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 3), 0xC * (result & 0x3FFFFFFF), 0x14); /*0x906252*/
  }
  *this = &hkBaseObject::`vftable'; /*0x906257*/
  return result; /*0x90625d*/
}
