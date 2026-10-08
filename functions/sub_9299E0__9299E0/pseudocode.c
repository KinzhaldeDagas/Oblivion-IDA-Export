int __thiscall sub_9299E0(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  result = *(this + 5); /*0x9299e3*/
  if ( result >= 0 ) /*0x9299e8*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x9299fa*/
    if ( !v3 ) /*0x929a02*/
      v3 = unk_BA7D9C; /*0x929a04*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 3), 0x20 * result, 0x14); /*0x929a19*/
  }
  *this = &hkBaseObject::`vftable'; /*0x929a1e*/
  return result; /*0x929a24*/
}
