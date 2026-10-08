_DWORD *__thiscall sub_91C520(int *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ecx

  v2 = *(this + 0xD) - 1; /*0x91c527*/
  *this = (int)&off_A9D5E0; /*0x91c528*/
  *(this + 2) = (int)&off_A9D5C8; /*0x91c52e*/
  *(this + 8) = (int)off_A9D5C0; /*0x91c535*/
  *(this + 0xA) = (int)off_A9D5AC; /*0x91c53c*/
  for ( *(this + 0xB) = (int)&off_A9D5A0; v2 >= 0; --v2 ) /*0x91c54a*/
    sub_91C470(this, v2); /*0x91c553*/
  v3 = *(this + 0xE); /*0x91c55b*/
  if ( v3 >= 0 ) /*0x91c560*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91c572*/
    if ( !v4 ) /*0x91c57a*/
      v4 = unk_BA7D9C; /*0x91c57c*/
    sub_8A75D0(v4, (_DWORD *)*(this + 0xC), 4 * v3, 0x14); /*0x91c591*/
  }
  *(this + 0xB) = (int)&off_A9D2B4; /*0x91c596*/
  *(this + 0xA) = (int)&hkEntityListener::`vftable'; /*0x91c59e*/
  return sub_949180(this); /*0x91c59d*/
}
