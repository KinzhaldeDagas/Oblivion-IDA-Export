int __thiscall sub_8DEED0(int (__thiscall ****this)(int (__stdcall ***)(signed int), int))
{
  int (__thiscall ****v2)(int (__stdcall ***)(signed int), int); // esi
  int v3; // ebx
  int result; // eax

  *this = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))&off_A9A574;
  *(this + 2) = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))&off_A9A56C;
  *(this + 3) = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))off_A9A560;
  v2 = this + 5;
  v3 = 6;
  do
  {
    if ( *v2 )
    {
      result = sub_8BC730(*v2);
      *v2 = 0;
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  *(this + 3) = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))&hkPhantomOverlapListener::`vftable';
  *(this + 2) = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))&off_A99B50;
  *this = (int (__thiscall ***)(int (__stdcall ***)(signed int), int))&hkBaseObject::`vftable';
  return result;
}
