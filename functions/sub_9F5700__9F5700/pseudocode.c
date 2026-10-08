// [Controller decode 2026-07-09] Initializes joystick POV/D-pad direction labels sJoyUp through sJoyUpLeft.
GameSettingString *GameSetting_Init_JoystickPOVDirectionLabels()
{
  GameSettingString *v0; // eax
  GameSettingString *v1; // eax
  GameSettingString *v2; // eax
  GameSettingString *v3; // eax
  GameSettingString *v4; // eax
  GameSettingString *v5; // eax
  GameSettingString *v6; // eax
  GameSettingString *v7; // eax
  GameSettingString *v8; // eax
  GameSettingString *v9; // eax
  GameSettingString *v10; // eax
  GameSettingString *v11; // eax
  GameSettingString *v12; // eax
  GameSettingString *v13; // eax
  GameSettingString *v14; // eax
  GameSettingString *result; // eax

  v0 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5724*/
  if ( v0 ) /*0x9f573a*/
    v1 = GameSetting_ConstrAndReg(v0, "sJoyUp", "Up"); /*0x9f5748*/
  else
    v1 = 0; /*0x9f574f*/
  g_joyPOVLabelSetting_Up[0] = (int)v1; /*0x9f575a*/
  v2 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f575f*/
  if ( v2 ) /*0x9f5775*/
    v3 = GameSetting_ConstrAndReg(v2, "sJoyUpRight", "Up-Rt"); /*0x9f5783*/
  else
    v3 = 0; /*0x9f578a*/
  g_joyPOVLabelSetting_UpRight = v3; /*0x9f5792*/
  v4 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5797*/
  if ( v4 ) /*0x9f57ad*/
    v5 = GameSetting_ConstrAndReg(v4, "sJoyRight", "Right"); /*0x9f57bb*/
  else
    v5 = 0; /*0x9f57c2*/
  g_joyPOVLabelSetting_Right = v5; /*0x9f57ca*/
  v6 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f57cf*/
  if ( v6 ) /*0x9f57e5*/
    v7 = GameSetting_ConstrAndReg(v6, "sJoyDownRight", "Dn-Rt"); /*0x9f57f3*/
  else
    v7 = 0; /*0x9f57fa*/
  g_joyPOVLabelSetting_DownRight = v7; /*0x9f5802*/
  v8 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5807*/
  if ( v8 ) /*0x9f581d*/
    v9 = GameSetting_ConstrAndReg(v8, "sJoyDown", "Down"); /*0x9f582b*/
  else
    v9 = 0; /*0x9f5832*/
  g_joyPOVLabelSetting_Down = v9; /*0x9f583a*/
  v10 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f583f*/
  if ( v10 ) /*0x9f5855*/
    v11 = GameSetting_ConstrAndReg(v10, "sJoyDownLeft", "Dn-Left"); /*0x9f5863*/
  else
    v11 = 0; /*0x9f586a*/
  g_joyPOVLabelSetting_DownLeft = v11; /*0x9f5872*/
  v12 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5877*/
  if ( v12 ) /*0x9f588d*/
    v13 = GameSetting_ConstrAndReg(v12, "sJoyLeft", "Left"); /*0x9f589b*/
  else
    v13 = 0; /*0x9f58a2*/
  g_joyPOVLabelSetting_Left = v13; /*0x9f58aa*/
  v14 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f58af*/
  if ( v14 ) /*0x9f58c5*/
    result = GameSetting_ConstrAndReg(v14, "sJoyUpLeft", "Up-Left"); /*0x9f58d3*/
  else
    result = 0; /*0x9f58da*/
  g_joyPOVLabelSetting_UpLeft = result; /*0x9f58dc*/
  return result; /*0x9f58e1*/
}
