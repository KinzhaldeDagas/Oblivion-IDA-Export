int *sub_9F6040()
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
  int *v37; // eax
  int *v38; // eax
  int *v39; // eax
  int *v40; // eax
  int *v41; // eax
  int *v42; // eax
  int *v43; // eax
  int *v44; // eax
  int *v45; // eax
  int *v46; // eax
  int *v47; // eax
  int *v48; // eax
  int *v49; // eax
  int *v50; // eax
  int *v51; // eax
  int *v52; // eax
  int *v53; // eax
  int *v54; // eax
  int *v55; // eax
  int *v56; // eax
  int *result; // eax

  v0 = (int *)FormHeapAlloc(8u);
  if ( v0 )
    v1 = GameSetting_ConstrAndReg(v0, (int)"sUActnForward", (int)"Forward");
  else
    v1 = 0;
  dword_B399D0[0] = (int)v1;
  v2 = (int *)FormHeapAlloc(8u);
  if ( v2 )
    v3 = GameSetting_ConstrAndReg(v2, (int)"sUActnBack", (int)"Back");
  else
    v3 = 0;
  dword_B399D4 = (int)v3;
  v4 = (int *)FormHeapAlloc(8u);
  if ( v4 )
    v5 = GameSetting_ConstrAndReg(v4, (int)"sUActnSldleft", (int)"Slide Left");
  else
    v5 = 0;
  dword_B399D8 = (int)v5;
  v6 = (int *)FormHeapAlloc(8u);
  if ( v6 )
    v7 = GameSetting_ConstrAndReg(v6, (int)"sUActnSldright", (int)"Slide Right");
  else
    v7 = 0;
  dword_B399DC = (int)v7;
  v8 = (int *)FormHeapAlloc(8u);
  if ( v8 )
    v9 = GameSetting_ConstrAndReg(v8, (int)"sUActnUse", (int)"Attack");
  else
    v9 = 0;
  dword_B399E0 = (int)v9;
  v10 = (int *)FormHeapAlloc(8u);
  if ( v10 )
    v11 = GameSetting_ConstrAndReg(v10, (int)"sUActnActivate", (int)"Activate");
  else
    v11 = 0;
  dword_B399E4 = (int)v11;
  v12 = (int *)FormHeapAlloc(8u);
  if ( v12 )
    v13 = GameSetting_ConstrAndReg(v12, (int)"sUActnBlock", (int)"Block");
  else
    v13 = 0;
  dword_B399E8 = (int)v13;
  v14 = (int *)FormHeapAlloc(8u);
  if ( v14 )
    v15 = GameSetting_ConstrAndReg(v14, (int)"sUActnCast", (int)"Cast");
  else
    v15 = 0;
  dword_B399EC = (int)v15;
  v16 = (int *)FormHeapAlloc(8u);
  if ( v16 )
    v17 = GameSetting_ConstrAndReg(v16, (int)"sUActnRdyitem", (int)"Ready Weapon");
  else
    v17 = 0;
  dword_B399F0 = (int)v17;
  v18 = (int *)FormHeapAlloc(8u);
  if ( v18 )
    v19 = GameSetting_ConstrAndReg(v18, (int)"sUActnCrouch", (int)"Sneak");
  else
    v19 = 0;
  dword_B399F4 = (int)v19;
  v20 = (int *)FormHeapAlloc(8u);
  if ( v20 )
    v21 = GameSetting_ConstrAndReg(v20, (int)"sUActnRun", (int)&off_A2FA0C);
  else
    v21 = 0;
  dword_B399F8 = (int)v21;
  v22 = (int *)FormHeapAlloc(8u);
  if ( v22 )
    v23 = GameSetting_ConstrAndReg(v22, (int)"sUActnTogglerun", (int)"Always Run");
  else
    v23 = 0;
  dword_B399FC = (int)v23;
  v24 = (int *)FormHeapAlloc(8u);
  if ( v24 )
    v25 = GameSetting_ConstrAndReg(v24, (int)"sUActnAutomove", (int)"Auto Move");
  else
    v25 = 0;
  dword_B39A00 = (int)v25;
  v26 = (int *)FormHeapAlloc(8u);
  if ( v26 )
    v27 = GameSetting_ConstrAndReg(v26, (int)"sUActnJump", (int)"Jump");
  else
    v27 = 0;
  dword_B39A04 = (int)v27;
  v28 = (int *)FormHeapAlloc(8u);
  if ( v28 )
    v29 = GameSetting_ConstrAndReg(v28, (int)"sUActnTogglepov", (int)"Change View");
  else
    v29 = 0;
  dword_B39A08 = (int)v29;
  v30 = (int *)FormHeapAlloc(8u);
  if ( v30 )
    v31 = GameSetting_ConstrAndReg(v30, (int)"sUActnMenumode", (int)"Journal");
  else
    v31 = 0;
  dword_B39A0C = (int)v31;
  v32 = (int *)FormHeapAlloc(8u);
  if ( v32 )
    v33 = GameSetting_ConstrAndReg(v32, (int)"sUActnRestmenu", (int)"Wait");
  else
    v33 = 0;
  dword_B39A10 = (int)v33;
  v34 = (int *)FormHeapAlloc(8u);
  if ( v34 )
    v35 = GameSetting_ConstrAndReg(v34, (int)"sUActnQuickmenu", (int)"Quick Menu");
  else
    v35 = 0;
  dword_B39A14 = (int)v35;
  v36 = (int *)FormHeapAlloc(8u);
  if ( v36 )
    v37 = GameSetting_ConstrAndReg(v36, (int)"sUActnQuick1", (int)"Quick1");
  else
    v37 = 0;
  dword_B39A18 = (int)v37;
  v38 = (int *)FormHeapAlloc(8u);
  if ( v38 )
    v39 = GameSetting_ConstrAndReg(v38, (int)"sUActnQuick2", (int)"Quick2");
  else
    v39 = 0;
  dword_B39A1C = (int)v39;
  v40 = (int *)FormHeapAlloc(8u);
  if ( v40 )
    v41 = GameSetting_ConstrAndReg(v40, (int)"sUActnQuick3", (int)"Quick3");
  else
    v41 = 0;
  dword_B39A20 = (int)v41;
  v42 = (int *)FormHeapAlloc(8u);
  if ( v42 )
    v43 = GameSetting_ConstrAndReg(v42, (int)"sUActnQuick4", (int)"Quick4");
  else
    v43 = 0;
  dword_B39A24 = (int)v43;
  v44 = (int *)FormHeapAlloc(8u);
  if ( v44 )
    v45 = GameSetting_ConstrAndReg(v44, (int)"sUActnQuick5", (int)"Quick5");
  else
    v45 = 0;
  dword_B39A28 = (int)v45;
  v46 = (int *)FormHeapAlloc(8u);
  if ( v46 )
    v47 = GameSetting_ConstrAndReg(v46, (int)"sUActnQuick6", (int)"Quick6");
  else
    v47 = 0;
  dword_B39A2C = (int)v47;
  v48 = (int *)FormHeapAlloc(8u);
  if ( v48 )
    v49 = GameSetting_ConstrAndReg(v48, (int)"sUActnQuick7", (int)"Quick7");
  else
    v49 = 0;
  dword_B39A30 = (int)v49;
  v50 = (int *)FormHeapAlloc(8u);
  if ( v50 )
    v51 = GameSetting_ConstrAndReg(v50, (int)"sUActnQuick8", (int)"Quick8");
  else
    v51 = 0;
  dword_B39A34 = (int)v51;
  v52 = (int *)FormHeapAlloc(8u);
  if ( v52 )
    v53 = GameSetting_ConstrAndReg(v52, (int)"sUActnQuicksave", (int)"QuickSave");
  else
    v53 = 0;
  dword_B39A38 = (int)v53;
  v54 = (int *)FormHeapAlloc(8u);
  if ( v54 )
    v55 = GameSetting_ConstrAndReg(v54, (int)"sUActnQuickload", (int)"QuickLoad");
  else
    v55 = 0;
  dword_B39A3C = (int)v55;
  v56 = (int *)FormHeapAlloc(8u);
  if ( v56 )
    result = GameSetting_ConstrAndReg(v56, (int)"sUActnGrab", (int)"Grab");
  else
    result = 0;
  dword_B39A40 = (int)result;
  return result;
}
