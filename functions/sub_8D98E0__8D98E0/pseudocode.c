int __thiscall sub_8D98E0(int (__thiscall ****this)(int (__stdcall ***)(signed int), int))
{
  int (__thiscall ***v2)(int (__stdcall ***)(signed int), int); // ecx
  int result; // eax
  int (__thiscall ***v4)(int (__stdcall ***)(signed int), int); // ecx
  int v5; // ecx

  v2 = *(this + 4);
  *this = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))&off_A9A274;
  if ( v2 )
    result = sub_8BC730(v2);
  v4 = *(this + 5);
  if ( v4 )
    result = sub_8BC730(v4);
  v5 = (int)*(this + 3);
  if ( v5 )
  {
    if ( *(_WORD *)(v5 + 4) )
    {
      if ( !--*(_WORD *)(v5 + 6) )
        result = (**(int (__thiscall ***)(int, int))v5)(v5, 1);
    }
  }
  *this = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))&hkBaseObject::`vftable';
  return result;
}
