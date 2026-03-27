hkMotorAction *__thiscall hkMotorAction::`scalar deleting destructor'(hkMotorAction *this, char a2)
{
  hkMotorAction::~hkMotorAction(this);
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(hkMotorAction *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x26);
  return this;
}
