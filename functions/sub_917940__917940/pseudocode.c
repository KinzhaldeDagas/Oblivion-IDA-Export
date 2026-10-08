_DWORD *__thiscall sub_917940(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 4); /*0x917943*/
  *this = &off_A9D0E8; /*0x917946*/
  if ( *(_WORD *)(v3 + 4) ) /*0x91794c*/
  {
    if ( !--*(_WORD *)(v3 + 6) ) /*0x917957*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x917962*/
  }
  *this = &hkBaseObject::`vftable'; /*0x917969*/
  if ( (a2 & 1) != 0 ) /*0x91796f*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x917981*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x917986*/
}
