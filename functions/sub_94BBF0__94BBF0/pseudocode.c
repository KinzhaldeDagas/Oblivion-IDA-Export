int __thiscall sub_94BBF0(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  result = *(this + 4); /*0x94bbf3*/
  if ( result >= 0 ) /*0x94bbf8*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x94bc0a*/
    if ( !v3 ) /*0x94bc12*/
      v3 = unk_BA7D9C; /*0x94bc14*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 2), 8 * result, 0x14); /*0x94bc29*/
  }
  *this = &hkBaseObject::`vftable'; /*0x94bc2e*/
  return result; /*0x94bc34*/
}
