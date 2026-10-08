_DWORD *__thiscall sub_8F5C20(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 2); /*0x8f5c23*/
  *this = &off_A9B38C; /*0x8f5c26*/
  if ( *(_WORD *)(v3 + 4) ) /*0x8f5c2c*/
  {
    if ( !--*(_WORD *)(v3 + 6) ) /*0x8f5c37*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8f5c42*/
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_BA7D98 + 0xC))(unk_BA7D98, *(this + 3)); /*0x8f5c50*/
  *this = &hkBaseObject::`vftable'; /*0x8f5c58*/
  if ( (a2 & 1) != 0 ) /*0x8f5c5e*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8f5c70*/
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this; /*0x8f5c75*/
}
