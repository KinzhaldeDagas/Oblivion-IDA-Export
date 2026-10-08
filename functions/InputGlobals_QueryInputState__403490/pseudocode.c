// [Controller decode 2026-07-09] Low-level input query. Scheme 0 keyboard, 1 mouse, 2+ joystick index scheme-2; rejects scheme 0xFF and joystick schemes beyond numJoysticks.
bool __thiscall InputGlobals::QueryInputState(InputGlobal *this, int scheme, unsigned __int8 keycode, int query)
{
  if ( !scheme ) /*0x403499*/
    return InputGlobals::QueryKeyboardState(this, keycode, query); /*0x40350a*/
  if ( scheme == 1 ) /*0x40349e*/
    return InputGlobals::QueryMouseKeyState(this, keycode, query); /*0x4034f7*/
  if ( scheme == 0xFF || scheme - 2 >= (signed int)this->numJoysticks ) /*0x4034b0*/
    return 0; /*0x4034e7*/
  if ( keycode >= 0x20u ) /*0x4034ba*/
    return InputGlobals::GetJoystickPOVVirtualButton((DIDEVCAPS *)this, scheme - 2, 0) == keycode; /*0x4034e2*/
  return InputGlobals::QueryJoystickButtonState(this, scheme - 2, keycode, query); /*0x4034cc*/
}
