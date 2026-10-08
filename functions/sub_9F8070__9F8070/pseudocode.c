GameSettingString *sub_9F8070()
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
  GameSettingString *v17; // eax
  GameSettingString *v18; // eax
  GameSettingString *v19; // eax
  GameSettingString *v20; // eax
  GameSettingString *v21; // eax
  GameSettingString *v22; // eax
  GameSettingString *v23; // eax
  GameSettingString *v24; // eax
  GameSettingString *v25; // eax
  GameSettingString *v26; // eax
  GameSettingString *v27; // eax
  GameSettingString *v28; // eax
  GameSettingString *v29; // eax
  GameSettingString *v30; // eax
  GameSettingString *v31; // eax
  GameSettingString *v32; // eax
  GameSettingString *v33; // eax
  GameSettingString *v34; // eax
  GameSettingString *v35; // eax
  GameSettingString *v36; // eax
  GameSettingString *result; // eax

  v0 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f8094*/
  if ( v0 ) /*0x9f80aa*/
    v1 = GameSetting_ConstrAndReg(v0, "sTargetTypeTake", "Take"); /*0x9f80b8*/
  else
    v1 = 0; /*0x9f80bf*/
  unk_B39A64 = v1; /*0x9f80ca*/
  v2 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f80cf*/
  if ( v2 ) /*0x9f80e5*/
    v3 = GameSetting_ConstrAndReg(v2, "sTargetTypeOpen", "Open"); /*0x9f80f3*/
  else
    v3 = 0; /*0x9f80fa*/
  unk_B39A68 = v3; /*0x9f8102*/
  v4 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f8107*/
  if ( v4 ) /*0x9f811d*/
    v5 = GameSetting_ConstrAndReg(v4, "sTargetTypeSit", (const char *)&off_A64100); /*0x9f812b*/
  else
    v5 = 0; /*0x9f8132*/
  unk_B39A6C = v5; /*0x9f813a*/
  v6 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f813f*/
  if ( v6 ) /*0x9f8155*/
    v7 = GameSetting_ConstrAndReg(v6, "sTargetTypeActivate", "Activate"); /*0x9f8163*/
  else
    v7 = 0; /*0x9f816a*/
  unk_B39A70 = v7; /*0x9f8172*/
  v8 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f8177*/
  if ( v8 ) /*0x9f818d*/
    v9 = GameSetting_ConstrAndReg(v8, "sTargetTypeSleep", "Sleep"); /*0x9f819b*/
  else
    v9 = 0; /*0x9f81a2*/
  unk_B39A74 = v9; /*0x9f81aa*/
  v10 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f81af*/
  if ( v10 ) /*0x9f81c5*/
    v11 = GameSetting_ConstrAndReg(v10, "sTargetTypeRead", "Read"); /*0x9f81d3*/
  else
    v11 = 0; /*0x9f81da*/
  unk_B39A78 = v11; /*0x9f81e2*/
  v12 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f81e7*/
  if ( v12 ) /*0x9f81fd*/
    v13 = GameSetting_ConstrAndReg(v12, "sTargetTypeTalk", "Talk"); /*0x9f820b*/
  else
    v13 = 0; /*0x9f8212*/
  unk_B39A7C = v13; /*0x9f821a*/
  v14 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f821f*/
  if ( v14 ) /*0x9f8235*/
    v15 = GameSetting_ConstrAndReg(v14, "sTargetTypeOpenDoor", "Open"); /*0x9f8243*/
  else
    v15 = 0; /*0x9f824a*/
  unk_B39A80 = v15; /*0x9f8252*/
  v16 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f8257*/
  if ( v16 ) /*0x9f826d*/
    v17 = GameSetting_ConstrAndReg(v16, "sTargetTypeHorse", "Ride"); /*0x9f827b*/
  else
    v17 = 0; /*0x9f8282*/
  unk_B39A84 = v17; /*0x9f828a*/
  v18 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f828f*/
  if ( v18 ) /*0x9f82a5*/
    v19 = GameSetting_ConstrAndReg(v18, "sTargetTypeCrown", "Talk"); /*0x9f82b3*/
  else
    v19 = 0; /*0x9f82ba*/
  unk_B39A88 = v19; /*0x9f82c2*/
  v20 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f82c7*/
  if ( v20 ) /*0x9f82dd*/
    v21 = GameSetting_ConstrAndReg(v20, "sTargetTypeVampire", "Feed/Talk"); /*0x9f82eb*/
  else
    v21 = 0; /*0x9f82f2*/
  unk_B39A8C = v21; /*0x9f82fa*/
  v22 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f82ff*/
  if ( v22 ) /*0x9f8315*/
    v23 = GameSetting_ConstrAndReg(v22, "sTargetTypeEquip", aEquip); /*0x9f8323*/
  else
    v23 = 0; /*0x9f832a*/
  unk_B39A90 = v23; /*0x9f8332*/
  v24 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f8337*/
  if ( v24 ) /*0x9f834d*/
    v25 = GameSetting_ConstrAndReg(v24, "sTargetTypeUnequip", "Unequip"); /*0x9f835b*/
  else
    v25 = 0; /*0x9f8362*/
  unk_B39A94 = v25; /*0x9f836a*/
  v26 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f836f*/
  if ( v26 ) /*0x9f8385*/
    v27 = GameSetting_ConstrAndReg(v26, "sTargetTypeDrink", "Drink"); /*0x9f8393*/
  else
    v27 = 0; /*0x9f839a*/
  unk_B39A98 = v27; /*0x9f83a2*/
  v28 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f83a7*/
  if ( v28 ) /*0x9f83bd*/
    v29 = GameSetting_ConstrAndReg(v28, "sTargetTypeEat", off_A63FF4); /*0x9f83cb*/
  else
    v29 = 0; /*0x9f83d2*/
  unk_B39A9C = v29; /*0x9f83da*/
  v30 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f83df*/
  if ( v30 ) /*0x9f83f5*/
    v31 = GameSetting_ConstrAndReg(v30, "sTargetTypeRecharge", "Recharge"); /*0x9f8403*/
  else
    v31 = 0; /*0x9f840a*/
  unk_B39AA0 = v31; /*0x9f8412*/
  v32 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f8417*/
  if ( v32 ) /*0x9f842d*/
    v33 = GameSetting_ConstrAndReg(v32, "sTargetTypeBrew", "Brew"); /*0x9f843b*/
  else
    v33 = 0; /*0x9f8442*/
  unk_B39AA4 = v33; /*0x9f844a*/
  v34 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f844f*/
  if ( v34 ) /*0x9f8465*/
    v35 = GameSetting_ConstrAndReg(v34, "sTargetTypeApply", "Apply"); /*0x9f8473*/
  else
    v35 = 0; /*0x9f847a*/
  unk_B39AA8 = v35; /*0x9f8482*/
  v36 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f8487*/
  if ( v36 ) /*0x9f849d*/
    result = GameSetting_ConstrAndReg(v36, "sTargetTypeRepair", "Repair"); /*0x9f84ab*/
  else
    result = 0; /*0x9f84b2*/
  unk_B39AAC = result; /*0x9f84b4*/
  return result; /*0x9f84b9*/
}
