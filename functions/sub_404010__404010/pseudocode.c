// [Controller decode 2026-07-09] Enable/disable joystick support. Enable reruns enumeration; disable unacquires/releases joystick interfaces, clears bit0, sets numJoysticks=0, and clears 0x500 bytes of joystick state.
void __thiscall InputGlobals::SetJoystickEnabled(_DWORD *this, char a2)
{
  int v3; // eax
  int v4; // ebx
  _DWORD *v5; // edi

  if ( a2 ) /*0x404018*/
  {
    v3 = *(this + 1); /*0x40401a*/
    *this |= 1u; /*0x40401d*/
    (*(void (__stdcall **)(int, _DWORD, BOOL (__stdcall *)(_BYTE *, InputGlobal *), _DWORD *, int))(*(_DWORD *)v3 + 0x10))( /*0x404030*/
      v3,
      0,
      InputGlobals::InitializeJoystickProperties,
      this,
      1);
    if ( !*(this + 0x63C) ) /*0x404032*/
      *this &= ~1u; /*0x40403b*/
  }
  else
  {
    v4 = 0; /*0x404043*/
    if ( (int)*(this + 0x63C) > 0 ) /*0x40404b*/
    {
      v5 = this + 2; /*0x40404e*/
      do /*0x404071*/
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v5 + 0x20))(*v5); /*0x404059*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v5 + 8))(*v5); /*0x404063*/
        ++v4; /*0x404065*/
        ++v5; /*0x404068*/
      }
      while ( v4 < *(this + 0x63C) ); /*0x404071*/
    }
    *this &= ~1u; /*0x404074*/
    *(this + 0x63C) = 0; /*0x40407c*/
    _memset((int)(this + 0xC), 0, 0x500u); /*0x40408c*/
  }
}
