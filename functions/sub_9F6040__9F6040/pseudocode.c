// [Controller decode 2026-07-09] Initializes 29 control action label GameSetting pointers.
GameSettingString *GameSetting_Init_ControlActionLabels()
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
  GameSettingString *v37; // eax
  GameSettingString *v38; // eax
  GameSettingString *v39; // eax
  GameSettingString *v40; // eax
  GameSettingString *v41; // eax
  GameSettingString *v42; // eax
  GameSettingString *v43; // eax
  GameSettingString *v44; // eax
  GameSettingString *v45; // eax
  GameSettingString *v46; // eax
  GameSettingString *v47; // eax
  GameSettingString *v48; // eax
  GameSettingString *v49; // eax
  GameSettingString *v50; // eax
  GameSettingString *v51; // eax
  GameSettingString *v52; // eax
  GameSettingString *v53; // eax
  GameSettingString *v54; // eax
  GameSettingString *v55; // eax
  GameSettingString *v56; // eax
  GameSettingString *result; // eax

  v0 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f6064*/
  if ( v0 ) /*0x9f607a*/
    v1 = GameSetting_ConstrAndReg(v0, "sUActnForward", "Forward"); /*0x9f6088*/
  else
    v1 = 0; /*0x9f608f*/
  g_controlActionLabelSetting_Forward[0] = (int)v1; /*0x9f609a*/
  v2 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f609f*/
  if ( v2 ) /*0x9f60b5*/
    v3 = GameSetting_ConstrAndReg(v2, "sUActnBack", "Back"); /*0x9f60c3*/
  else
    v3 = 0; /*0x9f60ca*/
  g_controlActionLabelSetting_Back = (int)v3; /*0x9f60d2*/
  v4 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f60d7*/
  if ( v4 ) /*0x9f60ed*/
    v5 = GameSetting_ConstrAndReg(v4, "sUActnSldleft", "Slide Left"); /*0x9f60fb*/
  else
    v5 = 0; /*0x9f6102*/
  g_controlActionLabelSetting_SlideLeft = (int)v5; /*0x9f610a*/
  v6 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f610f*/
  if ( v6 ) /*0x9f6125*/
    v7 = GameSetting_ConstrAndReg(v6, "sUActnSldright", "Slide Right"); /*0x9f6133*/
  else
    v7 = 0; /*0x9f613a*/
  g_controlActionLabelSetting_SlideRight = (int)v7; /*0x9f6142*/
  v8 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f6147*/
  if ( v8 ) /*0x9f615d*/
    v9 = GameSetting_ConstrAndReg(v8, "sUActnUse", "Attack"); /*0x9f616b*/
  else
    v9 = 0; /*0x9f6172*/
  g_controlActionLabelSetting_Attack = (int)v9; /*0x9f617a*/
  v10 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f617f*/
  if ( v10 ) /*0x9f6195*/
    v11 = GameSetting_ConstrAndReg(v10, "sUActnActivate", "Activate"); /*0x9f61a3*/
  else
    v11 = 0; /*0x9f61aa*/
  g_controlActionLabelSetting_Activate = (int)v11; /*0x9f61b2*/
  v12 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f61b7*/
  if ( v12 ) /*0x9f61cd*/
    v13 = GameSetting_ConstrAndReg(v12, "sUActnBlock", "Block"); /*0x9f61db*/
  else
    v13 = 0; /*0x9f61e2*/
  g_controlActionLabelSetting_Block = (int)v13; /*0x9f61ea*/
  v14 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f61ef*/
  if ( v14 ) /*0x9f6205*/
    v15 = GameSetting_ConstrAndReg(v14, "sUActnCast", "Cast"); /*0x9f6213*/
  else
    v15 = 0; /*0x9f621a*/
  g_controlActionLabelSetting_Cast = (int)v15; /*0x9f6222*/
  v16 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f6227*/
  if ( v16 ) /*0x9f623d*/
    v17 = GameSetting_ConstrAndReg(v16, "sUActnRdyitem", "Ready Weapon"); /*0x9f624b*/
  else
    v17 = 0; /*0x9f6252*/
  g_controlActionLabelSetting_ReadyWeapon = (int)v17; /*0x9f625a*/
  v18 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f625f*/
  if ( v18 ) /*0x9f6275*/
    v19 = GameSetting_ConstrAndReg(v18, "sUActnCrouch", "Sneak"); /*0x9f6283*/
  else
    v19 = 0; /*0x9f628a*/
  g_controlActionLabelSetting_Sneak = (int)v19; /*0x9f6292*/
  v20 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f6297*/
  if ( v20 ) /*0x9f62ad*/
    v21 = GameSetting_ConstrAndReg(v20, "sUActnRun", (const char *)&off_A2FA0C); /*0x9f62bb*/
  else
    v21 = 0; /*0x9f62c2*/
  g_controlActionLabelSetting_Run = (int)v21; /*0x9f62ca*/
  v22 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f62cf*/
  if ( v22 ) /*0x9f62e5*/
    v23 = GameSetting_ConstrAndReg(v22, "sUActnTogglerun", "Always Run"); /*0x9f62f3*/
  else
    v23 = 0; /*0x9f62fa*/
  g_controlActionLabelSetting_AlwaysRun = (int)v23; /*0x9f6302*/
  v24 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f6307*/
  if ( v24 ) /*0x9f631d*/
    v25 = GameSetting_ConstrAndReg(v24, "sUActnAutomove", "Auto Move"); /*0x9f632b*/
  else
    v25 = 0; /*0x9f6332*/
  g_controlActionLabelSetting_AutoMove = (int)v25; /*0x9f633a*/
  v26 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f633f*/
  if ( v26 ) /*0x9f6355*/
    v27 = GameSetting_ConstrAndReg(v26, "sUActnJump", "Jump"); /*0x9f6363*/
  else
    v27 = 0; /*0x9f636a*/
  g_controlActionLabelSetting_Jump = (int)v27; /*0x9f6372*/
  v28 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f6377*/
  if ( v28 ) /*0x9f638d*/
    v29 = GameSetting_ConstrAndReg(v28, "sUActnTogglepov", "Change View"); /*0x9f639b*/
  else
    v29 = 0; /*0x9f63a2*/
  g_controlActionLabelSetting_ChangeView = (int)v29; /*0x9f63aa*/
  v30 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f63af*/
  if ( v30 ) /*0x9f63c5*/
    v31 = GameSetting_ConstrAndReg(v30, "sUActnMenumode", "Journal"); /*0x9f63d3*/
  else
    v31 = 0; /*0x9f63da*/
  g_controlActionLabelSetting_Journal = (int)v31; /*0x9f63e2*/
  v32 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f63e7*/
  if ( v32 ) /*0x9f63fd*/
    v33 = GameSetting_ConstrAndReg(v32, "sUActnRestmenu", "Wait"); /*0x9f640b*/
  else
    v33 = 0; /*0x9f6412*/
  g_controlActionLabelSetting_Wait = (int)v33; /*0x9f641a*/
  v34 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f641f*/
  if ( v34 ) /*0x9f6435*/
    v35 = GameSetting_ConstrAndReg(v34, "sUActnQuickmenu", "Quick Menu"); /*0x9f6443*/
  else
    v35 = 0; /*0x9f644a*/
  g_controlActionLabelSetting_QuickMenu = (int)v35; /*0x9f6452*/
  v36 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f6457*/
  if ( v36 ) /*0x9f646d*/
    v37 = GameSetting_ConstrAndReg(v36, "sUActnQuick1", "Quick1");// MorrowindDialogueText: constructs sUActnQuick1 with default string value Quick1; plugin maps dialogue alias &sUActnQuick1; to %PCName instead. /*0x9f647b*/
  else
    v37 = 0; /*0x9f6482*/
  g_controlActionLabelSetting_Quick1 = (int)v37; /*0x9f648a*/
  v38 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f648f*/
  if ( v38 ) /*0x9f64a5*/
    v39 = GameSetting_ConstrAndReg(v38, "sUActnQuick2", "Quick2");// MorrowindDialogueText: constructs sUActnQuick2 with default string value Quick2; plugin maps dialogue alias &sUActnQuick2; to %Name instead. /*0x9f64b3*/
  else
    v39 = 0; /*0x9f64ba*/
  g_controlActionLabelSetting_Quick2 = (int)v39; /*0x9f64c2*/
  v40 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f64c7*/
  if ( v40 ) /*0x9f64dd*/
    v41 = GameSetting_ConstrAndReg(v40, "sUActnQuick3", "Quick3"); /*0x9f64eb*/
  else
    v41 = 0; /*0x9f64f2*/
  g_controlActionLabelSetting_Quick3 = (int)v41; /*0x9f64fa*/
  v42 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f64ff*/
  if ( v42 ) /*0x9f6515*/
    v43 = GameSetting_ConstrAndReg(v42, "sUActnQuick4", "Quick4"); /*0x9f6523*/
  else
    v43 = 0; /*0x9f652a*/
  g_controlActionLabelSetting_Quick4 = (int)v43; /*0x9f6532*/
  v44 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f6537*/
  if ( v44 ) /*0x9f654d*/
    v45 = GameSetting_ConstrAndReg(v44, "sUActnQuick5", "Quick5"); /*0x9f655b*/
  else
    v45 = 0; /*0x9f6562*/
  g_controlActionLabelSetting_Quick5 = (int)v45; /*0x9f656a*/
  v46 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f656f*/
  if ( v46 ) /*0x9f6585*/
    v47 = GameSetting_ConstrAndReg(v46, "sUActnQuick6", "Quick6"); /*0x9f6593*/
  else
    v47 = 0; /*0x9f659a*/
  g_controlActionLabelSetting_Quick6 = (int)v47; /*0x9f65a2*/
  v48 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f65a7*/
  if ( v48 ) /*0x9f65bd*/
    v49 = GameSetting_ConstrAndReg(v48, "sUActnQuick7", "Quick7"); /*0x9f65cb*/
  else
    v49 = 0; /*0x9f65d2*/
  g_controlActionLabelSetting_Quick7 = (int)v49; /*0x9f65da*/
  v50 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f65df*/
  if ( v50 ) /*0x9f65f5*/
    v51 = GameSetting_ConstrAndReg(v50, "sUActnQuick8", "Quick8"); /*0x9f6603*/
  else
    v51 = 0; /*0x9f660a*/
  g_controlActionLabelSetting_Quick8 = (int)v51; /*0x9f6612*/
  v52 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f6617*/
  if ( v52 ) /*0x9f662d*/
    v53 = GameSetting_ConstrAndReg(v52, "sUActnQuicksave", "QuickSave"); /*0x9f663b*/
  else
    v53 = 0; /*0x9f6642*/
  g_controlActionLabelSetting_QuickSave = (int)v53; /*0x9f664a*/
  v54 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f664f*/
  if ( v54 ) /*0x9f6665*/
    v55 = GameSetting_ConstrAndReg(v54, "sUActnQuickload", "QuickLoad"); /*0x9f6673*/
  else
    v55 = 0; /*0x9f667a*/
  g_controlActionLabelSetting_QuickLoad = (int)v55; /*0x9f6682*/
  v56 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f6687*/
  if ( v56 ) /*0x9f669d*/
    result = GameSetting_ConstrAndReg(v56, "sUActnGrab", "Grab"); /*0x9f66ab*/
  else
    result = 0; /*0x9f66b2*/
  g_controlActionLabelSetting_Grab = (int)result; /*0x9f66b4*/
  return result; /*0x9f66b9*/
}
