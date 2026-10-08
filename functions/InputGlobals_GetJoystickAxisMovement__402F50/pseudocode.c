// [Controller decode 2026-07-09] Returns one cached DirectInput joystick axis from joystick index n. Axis selectors: 1 lX, 2 lY, 3 lZ, 4 lRx, 5 lRy, 6 lRz. State stride is 0xA0.
LONG __thiscall InputGlobals::GetJoystickAxisMovement(InputGlobal *this, int whichDevice, int a3)
{
  DIMOUSESTATE2 *v3; // ecx
  LONG result; // eax

  v3 = (DIMOUSESTATE2 *)((char *)this->joystickDeviceStates + 0xA0 * whichDevice); /*0x402f5a*/
  switch ( a3 ) /*0x402f6a*/
  {
    case 1: /*0x402f6a*/
      result = v3->lX; /*0x402f71*/
      break; /*0x402f73*/
    case 2: /*0x402f6a*/
      result = v3->lY; /*0x402f76*/
      break; /*0x402f79*/
    case 3: /*0x402f6a*/
      result = v3->lZ; /*0x402f7c*/
      break; /*0x402f7f*/
    case 4: /*0x402f6a*/
      result = *(_DWORD *)v3->rgbButtons; /*0x402f82*/
      break; /*0x402f85*/
    case 5: /*0x402f6a*/
      result = *(_DWORD *)&v3->rgbButtons[4]; /*0x402f88*/
      break; /*0x402f8b*/
    case 6: /*0x402f6a*/
      result = v3[1].lX; /*0x402f8e*/
      break; /*0x402f91*/
    default:
      JUMPOUT(0x402F94); /*0x402f94*/
  }
  return result; /*0x402f73*/
}
