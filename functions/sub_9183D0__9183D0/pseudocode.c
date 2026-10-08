_DWORD *__thiscall sub_9183D0(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 2); /*0x9183d3*/
  *this = &off_A9D1B8; /*0x9183d6*/
  if ( *(_WORD *)(v3 + 4) ) /*0x9183dc*/
  {
    if ( !--*(_WORD *)(v3 + 6) ) /*0x9183e7*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x9183f2*/
  }
  *this = &hkBaseObject::`vftable'; /*0x9183f9*/
  if ( (a2 & 1) != 0 ) /*0x9183ff*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x918411*/
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this; /*0x918416*/
}
