GameSettingString *sub_9F54D0()
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
  GameSettingString *v15; // eax
  GameSettingString *v16; // eax
  GameSettingString *result; // eax

  v0 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f54f4*/
  if ( v0 ) /*0x9f550a*/
    v1 = GameSetting_ConstrAndReg(v0, "sMouseLeftButton", "L-Button"); /*0x9f5518*/
  else
    v1 = 0; /*0x9f551f*/
  unk_B39554[0] = (int)v1; /*0x9f552a*/
  v2 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f552f*/
  if ( v2 ) /*0x9f5545*/
    v3 = GameSetting_ConstrAndReg(v2, "sMouseRightButton", "R-Button"); /*0x9f5553*/
  else
    v3 = 0; /*0x9f555a*/
  unk_B39558 = v3; /*0x9f5562*/
  v4 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5567*/
  if ( v4 ) /*0x9f557d*/
    v5 = GameSetting_ConstrAndReg(v4, "sMouseMiddleButton", "Wheel"); /*0x9f558b*/
  else
    v5 = 0; /*0x9f5592*/
  unk_B3955C = v5; /*0x9f559a*/
  v6 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f559f*/
  if ( v6 ) /*0x9f55b5*/
    v7 = GameSetting_ConstrAndReg(v6, "sMouseButton3", "Button 3"); /*0x9f55c3*/
  else
    v7 = 0; /*0x9f55ca*/
  unk_B39560 = v7; /*0x9f55d2*/
  v8 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f55d7*/
  if ( v8 ) /*0x9f55ed*/
    v9 = GameSetting_ConstrAndReg(v8, "sMouseButton4", "Button 4"); /*0x9f55fb*/
  else
    v9 = 0; /*0x9f5602*/
  unk_B39564 = v9; /*0x9f560a*/
  v10 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f560f*/
  if ( v10 ) /*0x9f5625*/
    v11 = GameSetting_ConstrAndReg(v10, "sMouseButton5", "Button 5"); /*0x9f5633*/
  else
    v11 = 0; /*0x9f563a*/
  unk_B39568 = v11; /*0x9f5642*/
  v12 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5647*/
  if ( v12 ) /*0x9f565d*/
    v13 = GameSetting_ConstrAndReg(v12, "sMouseButton6", "Button 6"); /*0x9f566b*/
  else
    v13 = 0; /*0x9f5672*/
  unk_B3956C = v13; /*0x9f567a*/
  v14 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f567f*/
  if ( v14 ) /*0x9f5695*/
    v15 = GameSetting_ConstrAndReg(v14, "sMouseButton7", "Button 7"); /*0x9f56a3*/
  else
    v15 = 0; /*0x9f56aa*/
  unk_B39570 = v15; /*0x9f56b2*/
  v16 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f56b7*/
  if ( v16 ) /*0x9f56cd*/
    result = GameSetting_ConstrAndReg(v16, "sMouseButton8", "Button 8"); /*0x9f56db*/
  else
    result = 0; /*0x9f56e2*/
  unk_B39574 = result; /*0x9f56e4*/
  return result; /*0x9f56e9*/
}
