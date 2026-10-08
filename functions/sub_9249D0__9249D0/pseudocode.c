_DWORD *__thiscall sub_9249D0(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 0x26); /*0x9249d3*/
  *this = &off_A9DFA0; /*0x9249db*/
  if ( v3 ) /*0x9249e1*/
  {
    if ( *(_WORD *)(v3 + 4) ) /*0x9249e3*/
    {
      if ( !--*(_WORD *)(v3 + 6) ) /*0x9249ee*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x9249f9*/
    }
  }
  *this = &hkBaseObject::`vftable'; /*0x924a00*/
  if ( (a2 & 1) != 0 ) /*0x924a06*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x924a18*/
      this,
      *((unsigned __int16 *)this + 2),
      0x29);
  return this; /*0x924a1d*/
}
