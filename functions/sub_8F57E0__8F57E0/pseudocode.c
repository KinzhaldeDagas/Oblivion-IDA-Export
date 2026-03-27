int (__thiscall ****__thiscall sub_8F57E0(
        int (__thiscall ****this)(int (__stdcall ***)(signed int), int),
        char a2))(int (__stdcall ***)(signed int), int)
{
  int (__thiscall ***v3)(int (__stdcall ***)(signed int), int); // ecx

  v3 = *(this + 6);
  *this = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))&off_A9B370;
  if ( v3 )
  {
    sub_8BC730(v3);
    *(this + 6) = 0;
  }
  *this = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))&hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(int (__thiscall ****)(int (__stdcall ***)(signed int), int), _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x26);
  return this;
}
