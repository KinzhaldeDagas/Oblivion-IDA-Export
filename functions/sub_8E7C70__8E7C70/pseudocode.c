int __thiscall sub_8E7C70(int (__thiscall ****this)(int (__stdcall ***)(signed int), int))
{
  int (__thiscall ***v2)(int (__stdcall ***)(signed int), int); // ecx
  int result; // eax
  int (__thiscall ***v4)(int (__stdcall ***)(signed int), int); // ecx

  v2 = *(this + 6);
  *this = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))&off_A9A77C;
  if ( v2 )
  {
    result = sub_8BC730(v2);
    *(this + 6) = 0;
  }
  v4 = *(this + 7);
  if ( v4 )
  {
    result = sub_8BC730(v4);
    *(this + 7) = 0;
  }
  *this = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))&hkBaseObject::`vftable';
  return result;
}
