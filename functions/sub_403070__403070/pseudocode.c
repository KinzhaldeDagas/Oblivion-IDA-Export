// [Controller decode 2026-07-09] Converts DirectInput POV angle into Oblivion virtual joystick button. Neutral 0xFFFF/0xFFFFFFFF returns -1; non-neutral maps povValue/4500 + 0x20.
int __thiscall InputGlobals::GetJoystickPOVVirtualButton(DIDEVCAPS *this, int a2, int a3)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 0x28 * a2 + a3 + 0x14); /*0x40307e*/
  if ( (_WORD)v3 == 0xFFFF ) /*0x403087*/
    return 0xFFFFFFFF; /*0x403089*/
  else
    return v3 / 0x1194 + 0x20; /*0x40309e*/
}
