_DWORD *__thiscall sub_928520(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 3); /*0x928523*/
  *this = &off_AA1990; /*0x928528*/
  if ( v3 ) /*0x92852e*/
  {
    if ( *(_WORD *)(v3 + 4) ) /*0x928530*/
    {
      if ( !--*(_WORD *)(v3 + 6) ) /*0x92853b*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x928546*/
    }
  }
  *this = &hkBaseObject::`vftable'; /*0x92854d*/
  if ( (a2 & 1) != 0 ) /*0x928553*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x928565*/
      this,
      *((unsigned __int16 *)this + 2),
      0x29);
  return this; /*0x92856a*/
}
