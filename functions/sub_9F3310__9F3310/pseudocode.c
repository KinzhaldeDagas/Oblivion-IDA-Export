int *sub_9F3310()
{
  int *v0; // eax
  int *v1; // eax
  int *v2; // eax
  int *v3; // eax
  int *v4; // eax
  int *result; // eax

  v0 = (int *)FormHeapAlloc(8u);
  if ( v0 )
    v1 = GameSetting_ConstrAndReg(v0, (int)"sDeviceKeyboard", (int)"Keyboard");
  else
    v1 = 0;
  dword_B39548[0] = (int)v1;
  v2 = (int *)FormHeapAlloc(8u);
  if ( v2 )
    v3 = GameSetting_ConstrAndReg(v2, (int)"sDeviceMouse", (int)"Mouse");
  else
    v3 = 0;
  dword_B3954C = (int)v3;
  v4 = (int *)FormHeapAlloc(8u);
  if ( v4 )
  {
    result = GameSetting_ConstrAndReg(v4, (int)"sDeviceJoystick", (int)"Joystick");
    dword_B39550 = (int)result;
  }
  else
  {
    dword_B39550 = 0;
    return 0;
  }
  return result;
}
