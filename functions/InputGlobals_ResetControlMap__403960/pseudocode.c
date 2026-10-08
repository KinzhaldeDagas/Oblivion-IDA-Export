// [Controller decode 2026-07-09] Resets requested binding scheme. Scheme 0 keyboard, 1 mouse, 2 joystick/controller, 3 all. Joystick defaults are installed only when joystick flag bit0 is active; AlwaysRunControlBoh at +0x1BD5 is adjacent to but outside the persisted 29-row joystick block.
char __thiscall InputGlobals::ResetControlMap(DIDEVCAPS *this, UInt16 scheme)
{
  unsigned int i; // eax
  char result; // al

  for ( i = 0; (int)i < 0x1D; ++i ) /*0x403965*/
  {
    if ( (int)scheme >= 0 ) /*0x403972*/
    {
      if ( (int)scheme <= 2 ) /*0x403977*/
      {
        *((_BYTE *)this + 0x1D * scheme + i + 0x1B7E) = 0xFF; /*0x40399c*/
      }
      else if ( scheme == 3 ) /*0x40397c*/
      {
        *((_BYTE *)this + i + 0x1B7E) = 0xFF; /*0x40397e*/
        *((_BYTE *)this + i + 0x1B9B) = 0xFF; /*0x403985*/
        *((_BYTE *)this + i + 0x1BB8) = 0xFF; /*0x40398c*/
      }
    }
  }
  result = 9; /*0x4039af*/
  if ( !scheme || scheme == 3 ) /*0x4039b7*/
  {
    *((_BYTE *)this + 7038) = 0x11; /*0x4039bd*/
    *((_BYTE *)this + 0x1B7F) = 0x1F; /*0x4039c4*/
    *((_BYTE *)this + 0x1B80) = 0x1E; /*0x4039cb*/
    *((_BYTE *)this + 0x1B81) = 0x20; /*0x4039d2*/
    *((_BYTE *)this + 0x1B83) = 0x39; /*0x4039d9*/
    *((_DWORD *)this + 0x6E1) = 0x1D212E38; /*0x4039e0*/
    *((_DWORD *)this + 0x6E2) = 0x12103A2A; /*0x4039fc*/
    *((_DWORD *)this + 0x6E3) = 0x3B140F13; /*0x403a18*/
    *((_DWORD *)this + 0x6E4) = 0x5040302; /*0x403a34*/
    *((_DWORD *)this + 0x6E5) = 0x9080706; /*0x403a50*/
    *((_BYTE *)this + 0x1B98) = 0x3F; /*0x403a6a*/
    *((_BYTE *)this + 0x1B99) = 0x43; /*0x403a71*/
    *((_BYTE *)this + 0x1B9A) = 0x2C; /*0x403a78*/
  }
  if ( scheme == 1 || scheme == 3 ) /*0x403a87*/
  {
    *((_BYTE *)this + 0x1B9F) = 0; /*0x403a89*/
    *((_BYTE *)this + 0x1BA1) = 1; /*0x403a90*/
    *((_BYTE *)this + 0x1BA9) = 2; /*0x403a97*/
  }
  if ( (scheme == 2 || scheme == 3) && (this->dwSize & 1) != 0 ) /*0x403aaf*/
  {
    *((_BYTE *)this + 0x1BC1) = 0; /*0x403ab5*/
    *((_BYTE *)this + 0x1BC5) = 1; /*0x403abc*/
    *((_BYTE *)this + 0x1BC0) = 2; /*0x403ac3*/
    *((_BYTE *)this + 0x1BBD) = 3; /*0x403aca*/
    *((_BYTE *)this + 0x1BC7) = 4; /*0x403ad1*/
    *((_BYTE *)this + 0x1BC6) = 5; /*0x403ad8*/
    *((_BYTE *)this + 0x1BBF) = 6; /*0x403adf*/
    *((_BYTE *)this + 0x1BD4) = 7; /*0x403ae6*/
    *((_BYTE *)this + 0x1BBE) = 8; /*0x403aed*/
    *((_BYTE *)this + 0x1BBC) = 9; /*0x403af3*/
    *((_BYTE *)this + 0x1BC8) = 0xA; /*0x403af9*/
    *((_BYTE *)this + 0x1BD5) = 0xB; /*0x403b00*/
    *((_BYTE *)this + 0x1BCA) = 0x20; /*0x403b07*/
    *((_BYTE *)this + 0x1BCB) = 0x21; /*0x403b0e*/
    *((_DWORD *)this + 0x6F3) = 0x25242322; /*0x403b15*/
    *((_BYTE *)this + 0x1BD0) = 0x26; /*0x403b31*/
    *((_BYTE *)this + 0x1BD1) = 0x27; /*0x403b38*/
  }
  return result; /*0x4039b1*/
}
