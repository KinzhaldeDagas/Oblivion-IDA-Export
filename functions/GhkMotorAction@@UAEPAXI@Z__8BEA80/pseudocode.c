hkMotorAction *__thiscall hkMotorAction::`scalar deleting destructor'(hkMotorAction *this, char a2)
{
  hkMotorAction::~hkMotorAction(this); /*0x8bea83*/
  if ( (a2 & 1) != 0 ) /*0x8bea8d*/
    (*(void (__stdcall **)(hkMotorAction *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8beaa2*/
      this,
      *((unsigned __int16 *)this + 2),
      0x26);
  return this; /*0x8beaa6*/
}
