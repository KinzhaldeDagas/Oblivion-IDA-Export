int __thiscall sub_8BB8A0(int *this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax

  v2 = *(this + 7); /*0x8bb8a3*/
  if ( v2 >= 0 ) /*0x8bb8a8*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8bb8ba*/
    if ( !v3 ) /*0x8bb8c2*/
      v3 = unk_BA7D9C; /*0x8bb8c4*/
    sub_8A75D0(v3, (_DWORD *)*(this + 5), 4 * v2, 0x14); /*0x8bb8d9*/
  }
  result = sub_8B0E60(this + 2); /*0x8bb8e1*/
  *this = (int)&hkBaseObject::`vftable'; /*0x8bb8e6*/
  return result; /*0x8bb8ec*/
}
