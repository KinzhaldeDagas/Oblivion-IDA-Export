_DWORD *__thiscall sub_91B210(int *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ecx

  v2 = *(this + 0xD) - 1; /*0x91b217*/
  *this = (int)&off_A9D438; /*0x91b218*/
  *(this + 2) = (int)&off_A9D420; /*0x91b21e*/
  *(this + 8) = (int)off_A9D418; /*0x91b225*/
  *(this + 0xA) = (int)off_A9D404; /*0x91b22c*/
  for ( *(this + 0xB) = (int)&off_A9D3F8; v2 >= 0; --v2 ) /*0x91b23a*/
    sub_91B160(this, v2); /*0x91b243*/
  v3 = *(this + 0xE); /*0x91b24b*/
  if ( v3 >= 0 ) /*0x91b250*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91b262*/
    if ( !v4 ) /*0x91b26a*/
      v4 = unk_BA7D9C; /*0x91b26c*/
    sub_8A75D0(v4, (_DWORD *)*(this + 0xC), 4 * v3, 0x14); /*0x91b281*/
  }
  *(this + 0xB) = (int)&off_A9D2B4; /*0x91b286*/
  *(this + 0xA) = (int)&hkEntityListener::`vftable'; /*0x91b28e*/
  return sub_949180(this); /*0x91b28d*/
}
