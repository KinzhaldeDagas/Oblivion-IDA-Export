LONG __thiscall InputGlobals::GetJoystickAxisMovement(InputGlobal *this, int whichDevice, int a3)
{
  DIMOUSESTATE2 *v3; // ecx
  LONG result; // eax

  v3 = (DIMOUSESTATE2 *)((char *)this->joystickDeviceStates + 0xA0 * whichDevice);
  switch ( a3 )
  {
    case 1:
      result = v3->lX;
      break;
    case 2:
      result = v3->lY;
      break;
    case 3:
      result = v3->lZ;
      break;
    case 4:
      result = *(_DWORD *)v3->rgbButtons;
      break;
    case 5:
      result = *(_DWORD *)&v3->rgbButtons[4];
      break;
    case 6:
      result = v3[1].lX;
      break;
    default:
      JUMPOUT(0x402F94);
  }
  return result;
}
