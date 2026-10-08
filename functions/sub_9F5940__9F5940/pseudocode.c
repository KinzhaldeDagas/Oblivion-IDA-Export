// [Controller decode 2026-07-09] Initializes Xbox-style UI prompt labels. These are prompt strings, not live DirectInput/XInput polling state.
GameSettingString *GameSetting_Init_XboxControlPromptLabels()
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
  GameSettingString *v57; // eax
  GameSettingString *v58; // eax
  GameSettingString *v59; // eax
  GameSettingString *v60; // eax
  GameSettingString *result; // eax

  v0 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5964*/
  if ( v0 ) /*0x9f597a*/
    v1 = GameSetting_ConstrAndReg(v0, "sXboxDPadY", "tilt the D-Pad up or down"); /*0x9f5988*/
  else
    v1 = 0; /*0x9f598f*/
  g_xboxPromptSetting_DPadY[0] = (int)v1; /*0x9f599a*/
  v2 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f599f*/
  if ( v2 ) /*0x9f59b5*/
    v3 = GameSetting_ConstrAndReg(v2, "sXboxDPadUp", "tilt the D-Pad up"); /*0x9f59c3*/
  else
    v3 = 0; /*0x9f59ca*/
  g_xboxPromptSetting_DPadUp = v3; /*0x9f59d2*/
  v4 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f59d7*/
  if ( v4 ) /*0x9f59ed*/
    v5 = GameSetting_ConstrAndReg(v4, "sXboxDPadDown", "tilt the D-Pad down"); /*0x9f59fb*/
  else
    v5 = 0; /*0x9f5a02*/
  g_xboxPromptSetting_DPadDown = v5; /*0x9f5a0a*/
  v6 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5a0f*/
  if ( v6 ) /*0x9f5a25*/
    v7 = GameSetting_ConstrAndReg(v6, "sXboxDPadX", "tilt the D-Pad left or right"); /*0x9f5a33*/
  else
    v7 = 0; /*0x9f5a3a*/
  g_xboxPromptSetting_DPadX = v7; /*0x9f5a42*/
  v8 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5a47*/
  if ( v8 ) /*0x9f5a5d*/
    v9 = GameSetting_ConstrAndReg(v8, "sXboxDPadRight", "tilt the D-Pad right"); /*0x9f5a6b*/
  else
    v9 = 0; /*0x9f5a72*/
  g_xboxPromptSetting_DPadRight = v9; /*0x9f5a7a*/
  v10 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5a7f*/
  if ( v10 ) /*0x9f5a95*/
    v11 = GameSetting_ConstrAndReg(v10, "sXboxDPadLeft", "tilt the D-Pad left"); /*0x9f5aa3*/
  else
    v11 = 0; /*0x9f5aaa*/
  g_xboxPromptSetting_DPadLeft = v11; /*0x9f5ab2*/
  v12 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5ab7*/
  if ( v12 ) /*0x9f5acd*/
    v13 = GameSetting_ConstrAndReg(v12, "sXboxStart", "press the Start button"); /*0x9f5adb*/
  else
    v13 = 0; /*0x9f5ae2*/
  g_xboxPromptSetting_Start = v13; /*0x9f5aea*/
  v14 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5aef*/
  if ( v14 ) /*0x9f5b05*/
    v15 = GameSetting_ConstrAndReg(v14, "sXboxBack", "press the Back button"); /*0x9f5b13*/
  else
    v15 = 0; /*0x9f5b1a*/
  g_xboxPromptSetting_Back = v15; /*0x9f5b22*/
  v16 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5b27*/
  if ( v16 ) /*0x9f5b3d*/
    v17 = GameSetting_ConstrAndReg(v16, "sXboxLThumb", "click the Left Stick"); /*0x9f5b4b*/
  else
    v17 = 0; /*0x9f5b52*/
  g_xboxPromptSetting_LThumb = v17; /*0x9f5b5a*/
  v18 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5b5f*/
  if ( v18 ) /*0x9f5b75*/
    v19 = GameSetting_ConstrAndReg(v18, "sXboxRThumb", "click the Right Stick"); /*0x9f5b83*/
  else
    v19 = 0; /*0x9f5b8a*/
  g_xboxPromptSetting_RThumb = v19; /*0x9f5b92*/
  v20 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5b97*/
  if ( v20 ) /*0x9f5bad*/
    v21 = GameSetting_ConstrAndReg(v20, "sXboxA", "press the A button"); /*0x9f5bbb*/
  else
    v21 = 0; /*0x9f5bc2*/
  g_xboxPromptSetting_A = v21; /*0x9f5bca*/
  v22 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5bcf*/
  if ( v22 ) /*0x9f5be5*/
    v23 = GameSetting_ConstrAndReg(v22, "sXboxB", "press the B button"); /*0x9f5bf3*/
  else
    v23 = 0; /*0x9f5bfa*/
  g_xboxPromptSetting_B = v23; /*0x9f5c02*/
  v24 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5c07*/
  if ( v24 ) /*0x9f5c1d*/
    v25 = GameSetting_ConstrAndReg(v24, "sXboxX", "press the X button"); /*0x9f5c2b*/
  else
    v25 = 0; /*0x9f5c32*/
  g_xboxPromptSetting_X = v25; /*0x9f5c3a*/
  v26 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5c3f*/
  if ( v26 ) /*0x9f5c55*/
    v27 = GameSetting_ConstrAndReg(v26, "sXboxY", "press the Y button"); /*0x9f5c63*/
  else
    v27 = 0; /*0x9f5c6a*/
  g_xboxPromptSetting_Y = v27; /*0x9f5c72*/
  v28 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5c77*/
  if ( v28 ) /*0x9f5c8d*/
    v29 = GameSetting_ConstrAndReg(v28, "sXboxRBumper", "press the Right Bumper"); /*0x9f5c9b*/
  else
    v29 = 0; /*0x9f5ca2*/
  g_xboxPromptSetting_RBumper = v29; /*0x9f5caa*/
  v30 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5caf*/
  if ( v30 ) /*0x9f5cc5*/
    v31 = GameSetting_ConstrAndReg(v30, "sXboxLBumper", "press the Left Bumper"); /*0x9f5cd3*/
  else
    v31 = 0; /*0x9f5cda*/
  g_xboxPromptSetting_LBumper = v31; /*0x9f5ce2*/
  v32 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5ce7*/
  if ( v32 ) /*0x9f5cfd*/
    v33 = GameSetting_ConstrAndReg(v32, "sXboxLTrigger", "pull the Left Trigger"); /*0x9f5d0b*/
  else
    v33 = 0; /*0x9f5d12*/
  g_xboxPromptSetting_LTrigger = v33; /*0x9f5d1a*/
  v34 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5d1f*/
  if ( v34 ) /*0x9f5d35*/
    v35 = GameSetting_ConstrAndReg(v34, "sXboxRTrigger", "pull the Right Trigger"); /*0x9f5d43*/
  else
    v35 = 0; /*0x9f5d4a*/
  g_xboxPromptSetting_RTrigger = v35; /*0x9f5d52*/
  v36 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5d57*/
  if ( v36 ) /*0x9f5d6d*/
    v37 = GameSetting_ConstrAndReg(v36, "sXboxLThumbY", "move the Left Stick up or down"); /*0x9f5d7b*/
  else
    v37 = 0; /*0x9f5d82*/
  g_xboxPromptSetting_LThumbY = v37; /*0x9f5d8a*/
  v38 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5d8f*/
  if ( v38 ) /*0x9f5da5*/
    v39 = GameSetting_ConstrAndReg(v38, "sXboxLThumbUp", "move the Left Stick up"); /*0x9f5db3*/
  else
    v39 = 0; /*0x9f5dba*/
  g_xboxPromptSetting_LThumbUp = v39; /*0x9f5dc2*/
  v40 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5dc7*/
  if ( v40 ) /*0x9f5ddd*/
    v41 = GameSetting_ConstrAndReg(v40, "sXboxLThumbDown", "move the Left Stick down"); /*0x9f5deb*/
  else
    v41 = 0; /*0x9f5df2*/
  g_xboxPromptSetting_LThumbDown = v41; /*0x9f5dfa*/
  v42 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5dff*/
  if ( v42 ) /*0x9f5e15*/
    v43 = GameSetting_ConstrAndReg(v42, "sXboxLThumbX", "move the Left Stick left or right"); /*0x9f5e23*/
  else
    v43 = 0; /*0x9f5e2a*/
  g_xboxPromptSetting_LThumbX = v43; /*0x9f5e32*/
  v44 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5e37*/
  if ( v44 ) /*0x9f5e4d*/
    v45 = GameSetting_ConstrAndReg(v44, "sXboxLThumbLeft", "move the Left Stick left"); /*0x9f5e5b*/
  else
    v45 = 0; /*0x9f5e62*/
  g_xboxPromptSetting_LThumbLeft = v45; /*0x9f5e6a*/
  v46 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5e6f*/
  if ( v46 ) /*0x9f5e85*/
    v47 = GameSetting_ConstrAndReg(v46, "sXboxLThumbRight", "move the Left Stick right"); /*0x9f5e93*/
  else
    v47 = 0; /*0x9f5e9a*/
  g_xboxPromptSetting_LThumbRight = v47; /*0x9f5ea2*/
  v48 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5ea7*/
  if ( v48 ) /*0x9f5ebd*/
    v49 = GameSetting_ConstrAndReg(v48, "sXboxRThumbY", "move the Right Stick up or down"); /*0x9f5ecb*/
  else
    v49 = 0; /*0x9f5ed2*/
  g_xboxPromptSetting_RThumbY = v49; /*0x9f5eda*/
  v50 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5edf*/
  if ( v50 ) /*0x9f5ef5*/
    v51 = GameSetting_ConstrAndReg(v50, "sXboxRThumbUp", "move the Right Stick up"); /*0x9f5f03*/
  else
    v51 = 0; /*0x9f5f0a*/
  g_xboxPromptSetting_RThumbUp = v51; /*0x9f5f12*/
  v52 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5f17*/
  if ( v52 ) /*0x9f5f2d*/
    v53 = GameSetting_ConstrAndReg(v52, "sXboxRThumbDown", "move the Right Stick down"); /*0x9f5f3b*/
  else
    v53 = 0; /*0x9f5f42*/
  g_xboxPromptSetting_RThumbDown = v53; /*0x9f5f4a*/
  v54 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5f4f*/
  if ( v54 ) /*0x9f5f65*/
    v55 = GameSetting_ConstrAndReg(v54, "sXboxRThumbX", "move the Right Stick left or right"); /*0x9f5f73*/
  else
    v55 = 0; /*0x9f5f7a*/
  g_xboxPromptSetting_RThumbX = v55; /*0x9f5f82*/
  v56 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5f87*/
  if ( v56 ) /*0x9f5f9d*/
    v57 = GameSetting_ConstrAndReg(v56, "sXboxRThumbLeft", "move the Right Stick left"); /*0x9f5fab*/
  else
    v57 = 0; /*0x9f5fb2*/
  g_xboxPromptSetting_RThumbLeft = v57; /*0x9f5fba*/
  v58 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5fbf*/
  if ( v58 ) /*0x9f5fd5*/
    v59 = GameSetting_ConstrAndReg(v58, "sXboxRThumbRight", "move the Right Stick right"); /*0x9f5fe3*/
  else
    v59 = 0; /*0x9f5fea*/
  g_xboxPromptSetting_RThumbRight = v59; /*0x9f5ff2*/
  v60 = (GameSettingString *)FormHeapAlloc(8u); /*0x9f5ff7*/
  if ( v60 ) /*0x9f600d*/
    result = GameSetting_ConstrAndReg(v60, "sXboxNone", "assign a button in the Controls menu"); /*0x9f601b*/
  else
    result = 0; /*0x9f6022*/
  g_xboxPromptSetting_None = result; /*0x9f6024*/
  return result; /*0x9f6029*/
}
