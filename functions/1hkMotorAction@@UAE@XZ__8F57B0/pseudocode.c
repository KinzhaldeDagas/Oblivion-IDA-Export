void __thiscall hkMotorAction::~hkMotorAction(hkMotorAction *this)
{
  int (__stdcall ***v2)(signed int); // ecx

  v2 = *((int (__stdcall ****)(signed int))this + 6); /*0x8f57b3*/
  *(_DWORD *)this = &off_A9B370; /*0x8f57b8*/
  if ( v2 ) /*0x8f57be*/
  {
    sub_8BC730(v2); /*0x8f57c0*/
    *((_DWORD *)this + 6) = 0; /*0x8f57c5*/
  }
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x8f57cc*/
}
