int (__thiscall ****__thiscall sub_8D9930(
        int (__thiscall ****this)(int (__stdcall ***)(signed int), int),
        char a2))(int (__stdcall ***)(signed int), int)
{
  int (__thiscall ***v3)(int (__stdcall ***)(signed int), int); // ecx
  int (__thiscall ***v4)(int (__stdcall ***)(signed int), int); // ecx
  int v5; // ecx

  v3 = *(this + 4);
  *this = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))&off_A9A274;
  if ( v3 )
    sub_8BC730(v3);
  v4 = *(this + 5);
  if ( v4 )
    sub_8BC730(v4);
  v5 = (int)*(this + 3);
  if ( v5 )
  {
    if ( *(_WORD *)(v5 + 4) )
    {
      if ( !--*(_WORD *)(v5 + 6) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
  }
  *this = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))&hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(int (__thiscall ****)(int (__stdcall ***)(signed int), int), _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x29);
  return this;
}
