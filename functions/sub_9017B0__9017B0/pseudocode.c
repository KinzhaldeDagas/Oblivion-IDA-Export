int __thiscall sub_9017B0(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  *this = &off_A9BB10; /*0x9017b3*/
  result = *(this + 5); /*0x9017b9*/
  if ( result >= 0 ) /*0x9017be*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x9017d0*/
    if ( !v3 ) /*0x9017d8*/
      v3 = unk_BA7D9C; /*0x9017da*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 3), 2 * (result & 0x3FFFFFFF), 0x14); /*0x9017ee*/
  }
  *this = &hkBaseObject::`vftable'; /*0x9017f3*/
  return result; /*0x9017f9*/
}
