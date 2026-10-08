// [Controller decode 2026-07-09] Initializes input-device label settings for keyboard, mouse, and joystick.
GameSettingString *GameSetting_InitInputDeviceLabels()
{
  GameSettingString *v0; // eax
  GameSettingString *v1; // eax
  GameSettingString *v2; // eax
  GameSettingString *v3; // eax
  GameSettingString *v4; // eax
  GameSettingString *result; // eax

  v0 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f3333*/
  if ( v0 ) /*0x9f3349*/
    v1 = GameSetting_ConstrAndReg(v0, "sDeviceKeyboard", "Keyboard"); /*0x9f3357*/
  else
    v1 = 0; /*0x9f335e*/
  unk_B39548[0] = (int)v1; /*0x9f336a*/
  v2 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f336f*/
  if ( v2 ) /*0x9f3385*/
    v3 = GameSetting_ConstrAndReg(v2, "sDeviceMouse", "Mouse"); /*0x9f3393*/
  else
    v3 = 0; /*0x9f339a*/
  unk_B3954C = (int)v3; /*0x9f33a6*/
  v4 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f33ab*/
  if ( v4 ) /*0x9f33c1*/
  {
    result = GameSetting_ConstrAndReg(v4, "sDeviceJoystick", "Joystick"); /*0x9f33cf*/
    g_deviceLabelSetting_Joystick = (int)result; /*0x9f33d4*/
  }
  else
  {
    g_deviceLabelSetting_Joystick = 0; /*0x9f33eb*/
    return 0; /*0x9f33e9*/
  }
  return result; /*0x9f33d9*/
}
