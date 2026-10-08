hkMotorAction *__thiscall sub_8B8AB0(hkMotorAction *this, char a2)
{
  hkMotorAction::~hkMotorAction(this); /*0x8b8ab3*/
  if ( (a2 & 1) != 0 ) /*0x8b8abd*/
    (*(void (__stdcall **)(hkMotorAction *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8b8acf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x26);
  return this; /*0x8b8ad4*/
}
