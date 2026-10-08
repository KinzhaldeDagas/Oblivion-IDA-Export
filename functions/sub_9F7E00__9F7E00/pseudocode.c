GameSettingString *sub_9F7E00()
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
  GameSettingString *result; // eax

  v0 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f7e24*/
  if ( v0 ) /*0x9f7e3a*/
    v1 = GameSetting_ConstrAndReg(v0, "sBladeOneHand", "Blade - One Hand"); /*0x9f7e48*/
  else
    v1 = 0; /*0x9f7e4f*/
  unk_B39A44[0] = (int)v1; /*0x9f7e5a*/
  v2 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f7e5f*/
  if ( v2 ) /*0x9f7e75*/
    v3 = GameSetting_ConstrAndReg(v2, "sBladeTwoHand", "Blade - Two Hand"); /*0x9f7e83*/
  else
    v3 = 0; /*0x9f7e8a*/
  unk_B39A48 = v3; /*0x9f7e92*/
  v4 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f7e97*/
  if ( v4 ) /*0x9f7ead*/
    v5 = GameSetting_ConstrAndReg(v4, "sBluntOneHand", "Blunt - One Hand"); /*0x9f7ebb*/
  else
    v5 = 0; /*0x9f7ec2*/
  unk_B39A4C = v5; /*0x9f7eca*/
  v6 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f7ecf*/
  if ( v6 ) /*0x9f7ee5*/
    v7 = GameSetting_ConstrAndReg(v6, "sBluntTwoHand", "Blunt - Two Hand"); /*0x9f7ef3*/
  else
    v7 = 0; /*0x9f7efa*/
  unk_B39A50 = v7; /*0x9f7f02*/
  v8 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f7f07*/
  if ( v8 ) /*0x9f7f1d*/
    v9 = GameSetting_ConstrAndReg(v8, "sStaff", "Staff"); /*0x9f7f2b*/
  else
    v9 = 0; /*0x9f7f32*/
  unk_B39A54 = v9; /*0x9f7f3a*/
  v10 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f7f3f*/
  if ( v10 ) /*0x9f7f55*/
    result = GameSetting_ConstrAndReg(v10, "sBow", aBow); /*0x9f7f63*/
  else
    result = 0; /*0x9f7f6a*/
  unk_B39A58 = result; /*0x9f7f6c*/
  return result; /*0x9f7f71*/
}
