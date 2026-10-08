int __thiscall sub_948D90(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  *this = &off_AA2B8C; /*0x948d96*/
  *(this + 2) = &off_AA2B74; /*0x948d9c*/
  sub_8B0E60(this + 6); /*0x948da3*/
  result = *(this + 5); /*0x948da8*/
  if ( result >= 0 ) /*0x948dad*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x948dbf*/
    if ( !v3 ) /*0x948dc7*/
      v3 = unk_BA7D9C; /*0x948dc9*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 3), result & 0x3FFFFFFF, 0x14); /*0x948ddb*/
  }
  *this = &hkBaseObject::`vftable'; /*0x948de0*/
  return result; /*0x948de6*/
}
