_DWORD *__thiscall sub_92AD50(_DWORD *this, char a2)
{
  int v3; // ecx
  int v4; // ecx

  v3 = *(this + 5); /*0x92ad53*/
  *this = &off_AA1B70; /*0x92ad56*/
  if ( *(_WORD *)(v3 + 4) ) /*0x92ad5c*/
  {
    if ( !--*(_WORD *)(v3 + 6) ) /*0x92ad67*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x92ad72*/
  }
  v4 = *(this + 4); /*0x92ad74*/
  if ( *(_WORD *)(v4 + 4) ) /*0x92ad77*/
  {
    if ( !--*(_WORD *)(v4 + 6) ) /*0x92ad82*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x92ad8d*/
  }
  *this = &hkBaseObject::`vftable'; /*0x92ad94*/
  if ( (a2 & 1) != 0 ) /*0x92ad9a*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x92adac*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x92adb1*/
}
