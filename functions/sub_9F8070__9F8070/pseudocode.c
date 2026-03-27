int *sub_9F8070()
{
  int *v0; // eax
  int *v1; // eax
  int *v2; // eax
  int *v3; // eax
  int *v4; // eax
  int *v5; // eax
  int *v6; // eax
  int *v7; // eax
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int *v11; // eax
  int *v12; // eax
  int *v13; // eax
  int *v14; // eax
  int *v15; // eax
  int *v16; // eax
  int *v17; // eax
  int *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int *v22; // eax
  int *v23; // eax
  int *v24; // eax
  int *v25; // eax
  int *v26; // eax
  int *v27; // eax
  int *v28; // eax
  int *v29; // eax
  int *v30; // eax
  int *v31; // eax
  int *v32; // eax
  int *v33; // eax
  int *v34; // eax
  int *v35; // eax
  int *v36; // eax
  int *result; // eax

  v0 = (int *)FormHeapAlloc(8u);
  if ( v0 )
    v1 = GameSetting_ConstrAndReg(v0, (int)"sTargetTypeTake", (int)"Take");
  else
    v1 = 0;
  dword_B39A64 = (int)v1;
  v2 = (int *)FormHeapAlloc(8u);
  if ( v2 )
    v3 = GameSetting_ConstrAndReg(v2, (int)"sTargetTypeOpen", (int)"Open");
  else
    v3 = 0;
  dword_B39A68 = (int)v3;
  v4 = (int *)FormHeapAlloc(8u);
  if ( v4 )
    v5 = GameSetting_ConstrAndReg(v4, (int)"sTargetTypeSit", (int)&off_A64100);
  else
    v5 = 0;
  dword_B39A6C = (int)v5;
  v6 = (int *)FormHeapAlloc(8u);
  if ( v6 )
    v7 = GameSetting_ConstrAndReg(v6, (int)"sTargetTypeActivate", (int)"Activate");
  else
    v7 = 0;
  dword_B39A70 = (int)v7;
  v8 = (int *)FormHeapAlloc(8u);
  if ( v8 )
    v9 = GameSetting_ConstrAndReg(v8, (int)"sTargetTypeSleep", (int)"Sleep");
  else
    v9 = 0;
  dword_B39A74 = (int)v9;
  v10 = (int *)FormHeapAlloc(8u);
  if ( v10 )
    v11 = GameSetting_ConstrAndReg(v10, (int)"sTargetTypeRead", (int)"Read");
  else
    v11 = 0;
  dword_B39A78 = (int)v11;
  v12 = (int *)FormHeapAlloc(8u);
  if ( v12 )
    v13 = GameSetting_ConstrAndReg(v12, (int)"sTargetTypeTalk", (int)"Talk");
  else
    v13 = 0;
  dword_B39A7C = (int)v13;
  v14 = (int *)FormHeapAlloc(8u);
  if ( v14 )
    v15 = GameSetting_ConstrAndReg(v14, (int)"sTargetTypeOpenDoor", (int)"Open");
  else
    v15 = 0;
  dword_B39A80 = (int)v15;
  v16 = (int *)FormHeapAlloc(8u);
  if ( v16 )
    v17 = GameSetting_ConstrAndReg(v16, (int)"sTargetTypeHorse", (int)"Ride");
  else
    v17 = 0;
  dword_B39A84 = (int)v17;
  v18 = (int *)FormHeapAlloc(8u);
  if ( v18 )
    v19 = GameSetting_ConstrAndReg(v18, (int)"sTargetTypeCrown", (int)"Talk");
  else
    v19 = 0;
  dword_B39A88 = (int)v19;
  v20 = (int *)FormHeapAlloc(8u);
  if ( v20 )
    v21 = GameSetting_ConstrAndReg(v20, (int)"sTargetTypeVampire", (int)"Feed/Talk");
  else
    v21 = 0;
  dword_B39A8C = (int)v21;
  v22 = (int *)FormHeapAlloc(8u);
  if ( v22 )
    v23 = GameSetting_ConstrAndReg(v22, (int)"sTargetTypeEquip", (int)&aEquip);
  else
    v23 = 0;
  dword_B39A90 = (int)v23;
  v24 = (int *)FormHeapAlloc(8u);
  if ( v24 )
    v25 = GameSetting_ConstrAndReg(v24, (int)"sTargetTypeUnequip", (int)"Unequip");
  else
    v25 = 0;
  dword_B39A94 = (int)v25;
  v26 = (int *)FormHeapAlloc(8u);
  if ( v26 )
    v27 = GameSetting_ConstrAndReg(v26, (int)"sTargetTypeDrink", (int)"Drink");
  else
    v27 = 0;
  dword_B39A98 = (int)v27;
  v28 = (int *)FormHeapAlloc(8u);
  if ( v28 )
    v29 = GameSetting_ConstrAndReg(v28, (int)"sTargetTypeEat", (int)&off_A63FF4);
  else
    v29 = 0;
  dword_B39A9C = (int)v29;
  v30 = (int *)FormHeapAlloc(8u);
  if ( v30 )
    v31 = GameSetting_ConstrAndReg(v30, (int)"sTargetTypeRecharge", (int)"Recharge");
  else
    v31 = 0;
  dword_B39AA0 = (int)v31;
  v32 = (int *)FormHeapAlloc(8u);
  if ( v32 )
    v33 = GameSetting_ConstrAndReg(v32, (int)"sTargetTypeBrew", (int)"Brew");
  else
    v33 = 0;
  dword_B39AA4 = (int)v33;
  v34 = (int *)FormHeapAlloc(8u);
  if ( v34 )
    v35 = GameSetting_ConstrAndReg(v34, (int)"sTargetTypeApply", (int)"Apply");
  else
    v35 = 0;
  dword_B39AA8 = (int)v35;
  v36 = (int *)FormHeapAlloc(8u);
  if ( v36 )
    result = GameSetting_ConstrAndReg(v36, (int)"sTargetTypeRepair", (int)"Repair");
  else
    result = 0;
  dword_B39AAC = (int)result;
  return result;
}
