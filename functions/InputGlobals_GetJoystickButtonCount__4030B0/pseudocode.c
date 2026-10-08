// [Controller decode 2026-07-09] Returns DIDEVCAPS.dwButtons for the selected joystick/controller.
int __thiscall InputGlobals::GetJoystickButtonCount(InputGlobal *this, UInt8 whichJoystick)
{
  return this->joystickDevCaps[whichJoystick].dwButtons; /*0x4030bf*/
}
