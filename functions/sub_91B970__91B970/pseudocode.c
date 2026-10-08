_DWORD *__thiscall sub_91B970(int *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ecx

  v2 = *(this + 0xD) - 1; /*0x91b977*/
  *this = (int)&off_A9D528; /*0x91b978*/
  *(this + 2) = (int)&off_A9D510; /*0x91b97e*/
  *(this + 8) = (int)off_A9D508; /*0x91b985*/
  *(this + 0xA) = (int)off_A9D4F4; /*0x91b98c*/
  for ( *(this + 0xB) = (int)&off_A9D4E8; v2 >= 0; --v2 ) /*0x91b99a*/
    sub_91B8C0(this, v2); /*0x91b9a3*/
  v3 = *(this + 0xE); /*0x91b9ab*/
  if ( v3 >= 0 ) /*0x91b9b0*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91b9c2*/
    if ( !v4 ) /*0x91b9ca*/
      v4 = unk_BA7D9C; /*0x91b9cc*/
    sub_8A75D0(v4, (_DWORD *)*(this + 0xC), 4 * v3, 0x14); /*0x91b9e1*/
  }
  *(this + 0xB) = (int)&off_A9D2B4; /*0x91b9e6*/
  *(this + 0xA) = (int)&hkEntityListener::`vftable'; /*0x91b9ee*/
  return sub_949180(this); /*0x91b9ed*/
}
