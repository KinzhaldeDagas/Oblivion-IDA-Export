void __thiscall hkMotorAction::~hkMotorAction(hkMotorAction *this)
{
  int (__thiscall ***v2)(int (__stdcall ***)(signed int), int); // ecx

  v2 = *((int (__thiscall ****)(int (__stdcall ***)(signed int), int))this + 6);
  *(_DWORD *)this = &off_A9B370;
  if ( v2 )
  {
    sub_8BC730(v2);
    *((_DWORD *)this + 6) = 0;
  }
  *(_DWORD *)this = &hkBaseObject::`vftable';
}
