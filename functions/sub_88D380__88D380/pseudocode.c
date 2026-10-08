_DWORD *__thiscall sub_88D380(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 2); /*0x88d383*/
  *this = &off_A96248; /*0x88d386*/
  if ( *(_WORD *)(v3 + 4) ) /*0x88d38c*/
  {
    if ( !--*(_WORD *)(v3 + 6) ) /*0x88d397*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x88d3a2*/
  }
  *this = &hkBaseObject::`vftable'; /*0x88d3a9*/
  if ( (a2 & 1) != 0 ) /*0x88d3af*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x88d3c1*/
      this,
      *((unsigned __int16 *)this + 2),
      0x31);
  return this; /*0x88d3c6*/
}
