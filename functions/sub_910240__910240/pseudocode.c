int (__thiscall ****__thiscall sub_910240(
        int (__thiscall ****this)(int (__stdcall ***)(signed int), int),
        char a2))(int (__stdcall ***)(signed int), int)
{
  sub_8E7C70(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(int (__thiscall ****)(int (__stdcall ***)(signed int), int), _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x26);
  return this;
}
