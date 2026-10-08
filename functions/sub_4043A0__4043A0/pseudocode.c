// [Controller decode 2026-07-09] Input shutdown: disables joystick/controller support first, then releases keyboard, mouse, and root DirectInput interface.
int __thiscall InputGlobals::ShutdownInputSystem(_BYTE *this)
{
  if ( (*this & 1) != 0 ) /*0x4043a6*/
    InputGlobals::SetJoystickEnabled(this, 0); /*0x4043aa*/
  if ( *((_DWORD *)this + 0xA) ) /*0x4043af*/
  {
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 0xA) + 0x20))(*((_DWORD *)this + 0xA)); /*0x4043be*/
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 0xA) + 8))(*((_DWORD *)this + 0xA)); /*0x4043c9*/
  }
  if ( *((_DWORD *)this + 0xB) ) /*0x4043cb*/
  {
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x20))(*((_DWORD *)this + 0xB)); /*0x4043da*/
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 0xB) + 8))(*((_DWORD *)this + 0xB)); /*0x4043e5*/
  }
  return (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 1) + 8))(*((_DWORD *)this + 1)); /*0x4043f2*/
}
