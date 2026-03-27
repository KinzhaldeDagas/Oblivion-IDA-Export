int __thiscall InputGlobals::GetJoystickButtonCount(InputGlobal *this, UInt8 whichJoystick)
{
  return this->joysticDevCaps[whichJoystick].dwButtons;
}
