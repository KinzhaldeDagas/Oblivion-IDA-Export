// [Controller decode 2026-07-09] Returns DIDEVCAPS.dwPOVs for the selected joystick/controller.
DWORD __thiscall InputGlobals::GetJoystickPOVControlCount(InputGlobal *this, int a2)
{
  return this->joystickDevCaps[a2].dwPOVs; /*0x4030de*/
}
