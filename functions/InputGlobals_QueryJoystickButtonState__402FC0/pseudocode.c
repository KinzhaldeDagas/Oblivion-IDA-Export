// [Controller decode 2026-07-09] Queries cached joystick physical button state. queryMode 0 held, 1 newly pressed, 2 released, 3 changed. Current button byte at +0x60+n*0xA0; previous at +0xB0+n*0xA0.
signed int __thiscall InputGlobals::QueryJoystickButtonState(InputGlobal *this, int a2, int a3, int a4)
{
  char *v4; // ecx
  BOOL v5; // esi
  signed int result; // eax

  v4 = (char *)this + 0xA0 * a2; /*0x402fcf*/
  v5 = 0; /*0x402fd1*/
  switch ( a4 ) /*0x402fd8*/
  {
    case 0: /*0x402fd8*/
      if ( v4[a3 + 0x60] >= 0 ) /*0x402fe8*/
        goto LABEL_11; /*0x402fe8*/
      result = 1; /*0x402fef*/
      break; /*0x402ff2*/
    case 1: /*0x402fd8*/
      if ( v4[a3 + 0xB0] < 0 || v4[a3 + 0x60] >= 0 ) /*0x403008*/
        goto LABEL_11; /*0x403008*/
      result = 1; /*0x40300f*/
      break; /*0x403012*/
    case 2: /*0x402fd8*/
      if ( v4[a3 + 0x60] < 0 || v4[a3 + 0xB0] >= 0 ) /*0x403028*/
        goto LABEL_11; /*0x403028*/
      result = 1; /*0x40302f*/
      break; /*0x403032*/
    case 3: /*0x402fd8*/
      v5 = (char)(v4[a3 + 0x60] ^ v4[a3 + 0xB0]) < 0; /*0x403048*/
      goto LABEL_11; /*0x403048*/
    default:
LABEL_11:
      result = v5; /*0x40304d*/
      break; /*0x40304d*/
  }
  return result; /*0x402ff1*/
}
