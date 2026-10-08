int __thiscall sub_8F7C70(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  result = *(this + 5); /*0x8f7c73*/
  if ( result >= 0 ) /*0x8f7c78*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8f7c8a*/
    if ( !v3 ) /*0x8f7c92*/
      v3 = unk_BA7D9C; /*0x8f7c94*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 3), 2 * (result & 0x3FFFFFFF), 0x14); /*0x8f7ca8*/
  }
  *this = &hkBaseObject::`vftable'; /*0x8f7cad*/
  return result; /*0x8f7cb3*/
}
