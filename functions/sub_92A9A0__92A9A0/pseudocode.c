_DWORD *__thiscall sub_92A9A0(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 4); /*0x92a9a3*/
  *this = &off_AA1B38; /*0x92a9a6*/
  if ( *(_WORD *)(v3 + 4) ) /*0x92a9ac*/
  {
    if ( !--*(_WORD *)(v3 + 6) ) /*0x92a9b7*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x92a9c2*/
  }
  *this = &hkBaseObject::`vftable'; /*0x92a9c9*/
  if ( (a2 & 1) != 0 ) /*0x92a9cf*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x92a9e1*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x92a9e6*/
}
