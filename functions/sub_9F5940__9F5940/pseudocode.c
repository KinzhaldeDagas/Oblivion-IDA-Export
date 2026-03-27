int *sub_9F5940()
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
  int *v57; // eax
  int *v58; // eax
  int *v59; // eax
  int *v60; // eax
  int *result; // eax

  v0 = (int *)FormHeapAlloc(8u);
  if ( v0 )
    v1 = GameSetting_ConstrAndReg(v0, (int)"sXboxDPadY", (int)"tilt the D-Pad up or down");
  else
    v1 = 0;
  dword_B39950[0] = (int)v1;
  v2 = (int *)FormHeapAlloc(8u);
  if ( v2 )
    v3 = GameSetting_ConstrAndReg(v2, (int)"sXboxDPadUp", (int)"tilt the D-Pad up");
  else
    v3 = 0;
  dword_B39954 = (int)v3;
  v4 = (int *)FormHeapAlloc(8u);
  if ( v4 )
    v5 = GameSetting_ConstrAndReg(v4, (int)"sXboxDPadDown", (int)"tilt the D-Pad down");
  else
    v5 = 0;
  dword_B39958 = (int)v5;
  v6 = (int *)FormHeapAlloc(8u);
  if ( v6 )
    v7 = GameSetting_ConstrAndReg(v6, (int)"sXboxDPadX", (int)"tilt the D-Pad left or right");
  else
    v7 = 0;
  dword_B3995C = (int)v7;
  v8 = (int *)FormHeapAlloc(8u);
  if ( v8 )
    v9 = GameSetting_ConstrAndReg(v8, (int)"sXboxDPadRight", (int)"tilt the D-Pad right");
  else
    v9 = 0;
  dword_B39960 = (int)v9;
  v10 = (int *)FormHeapAlloc(8u);
  if ( v10 )
    v11 = GameSetting_ConstrAndReg(v10, (int)"sXboxDPadLeft", (int)"tilt the D-Pad left");
  else
    v11 = 0;
  dword_B39964 = (int)v11;
  v12 = (int *)FormHeapAlloc(8u);
  if ( v12 )
    v13 = GameSetting_ConstrAndReg(v12, (int)"sXboxStart", (int)"press the Start button");
  else
    v13 = 0;
  dword_B39968 = (int)v13;
  v14 = (int *)FormHeapAlloc(8u);
  if ( v14 )
    v15 = GameSetting_ConstrAndReg(v14, (int)"sXboxBack", (int)"press the Back button");
  else
    v15 = 0;
  dword_B3996C = (int)v15;
  v16 = (int *)FormHeapAlloc(8u);
  if ( v16 )
    v17 = GameSetting_ConstrAndReg(v16, (int)"sXboxLThumb", (int)"click the Left Stick");
  else
    v17 = 0;
  dword_B39970 = (int)v17;
  v18 = (int *)FormHeapAlloc(8u);
  if ( v18 )
    v19 = GameSetting_ConstrAndReg(v18, (int)"sXboxRThumb", (int)"click the Right Stick");
  else
    v19 = 0;
  dword_B39974 = (int)v19;
  v20 = (int *)FormHeapAlloc(8u);
  if ( v20 )
    v21 = GameSetting_ConstrAndReg(v20, (int)"sXboxA", (int)"press the A button");
  else
    v21 = 0;
  dword_B39978 = (int)v21;
  v22 = (int *)FormHeapAlloc(8u);
  if ( v22 )
    v23 = GameSetting_ConstrAndReg(v22, (int)"sXboxB", (int)"press the B button");
  else
    v23 = 0;
  dword_B3997C = (int)v23;
  v24 = (int *)FormHeapAlloc(8u);
  if ( v24 )
    v25 = GameSetting_ConstrAndReg(v24, (int)"sXboxX", (int)"press the X button");
  else
    v25 = 0;
  dword_B39980 = (int)v25;
  v26 = (int *)FormHeapAlloc(8u);
  if ( v26 )
    v27 = GameSetting_ConstrAndReg(v26, (int)"sXboxY", (int)"press the Y button");
  else
    v27 = 0;
  dword_B39984 = (int)v27;
  v28 = (int *)FormHeapAlloc(8u);
  if ( v28 )
    v29 = GameSetting_ConstrAndReg(v28, (int)"sXboxRBumper", (int)"press the Right Bumper");
  else
    v29 = 0;
  dword_B39988 = (int)v29;
  v30 = (int *)FormHeapAlloc(8u);
  if ( v30 )
    v31 = GameSetting_ConstrAndReg(v30, (int)"sXboxLBumper", (int)"press the Left Bumper");
  else
    v31 = 0;
  dword_B3998C = (int)v31;
  v32 = (int *)FormHeapAlloc(8u);
  if ( v32 )
    v33 = GameSetting_ConstrAndReg(v32, (int)"sXboxLTrigger", (int)"pull the Left Trigger");
  else
    v33 = 0;
  dword_B39990 = (int)v33;
  v34 = (int *)FormHeapAlloc(8u);
  if ( v34 )
    v35 = GameSetting_ConstrAndReg(v34, (int)"sXboxRTrigger", (int)"pull the Right Trigger");
  else
    v35 = 0;
  dword_B39994 = (int)v35;
  v36 = (int *)FormHeapAlloc(8u);
  if ( v36 )
    v37 = GameSetting_ConstrAndReg(v36, (int)"sXboxLThumbY", (int)"move the Left Stick up or down");
  else
    v37 = 0;
  dword_B39998 = (int)v37;
  v38 = (int *)FormHeapAlloc(8u);
  if ( v38 )
    v39 = GameSetting_ConstrAndReg(v38, (int)"sXboxLThumbUp", (int)"move the Left Stick up");
  else
    v39 = 0;
  dword_B3999C = (int)v39;
  v40 = (int *)FormHeapAlloc(8u);
  if ( v40 )
    v41 = GameSetting_ConstrAndReg(v40, (int)"sXboxLThumbDown", (int)"move the Left Stick down");
  else
    v41 = 0;
  dword_B399A0 = (int)v41;
  v42 = (int *)FormHeapAlloc(8u);
  if ( v42 )
    v43 = GameSetting_ConstrAndReg(v42, (int)"sXboxLThumbX", (int)"move the Left Stick left or right");
  else
    v43 = 0;
  dword_B399A4 = (int)v43;
  v44 = (int *)FormHeapAlloc(8u);
  if ( v44 )
    v45 = GameSetting_ConstrAndReg(v44, (int)"sXboxLThumbLeft", (int)"move the Left Stick left");
  else
    v45 = 0;
  dword_B399A8 = (int)v45;
  v46 = (int *)FormHeapAlloc(8u);
  if ( v46 )
    v47 = GameSetting_ConstrAndReg(v46, (int)"sXboxLThumbRight", (int)"move the Left Stick right");
  else
    v47 = 0;
  dword_B399AC = (int)v47;
  v48 = (int *)FormHeapAlloc(8u);
  if ( v48 )
    v49 = GameSetting_ConstrAndReg(v48, (int)"sXboxRThumbY", (int)"move the Right Stick up or down");
  else
    v49 = 0;
  dword_B399B0 = (int)v49;
  v50 = (int *)FormHeapAlloc(8u);
  if ( v50 )
    v51 = GameSetting_ConstrAndReg(v50, (int)"sXboxRThumbUp", (int)"move the Right Stick up");
  else
    v51 = 0;
  dword_B399B4 = (int)v51;
  v52 = (int *)FormHeapAlloc(8u);
  if ( v52 )
    v53 = GameSetting_ConstrAndReg(v52, (int)"sXboxRThumbDown", (int)"move the Right Stick down");
  else
    v53 = 0;
  dword_B399B8 = (int)v53;
  v54 = (int *)FormHeapAlloc(8u);
  if ( v54 )
    v55 = GameSetting_ConstrAndReg(v54, (int)"sXboxRThumbX", (int)"move the Right Stick left or right");
  else
    v55 = 0;
  dword_B399BC = (int)v55;
  v56 = (int *)FormHeapAlloc(8u);
  if ( v56 )
    v57 = GameSetting_ConstrAndReg(v56, (int)"sXboxRThumbLeft", (int)"move the Right Stick left");
  else
    v57 = 0;
  dword_B399C0 = (int)v57;
  v58 = (int *)FormHeapAlloc(8u);
  if ( v58 )
    v59 = GameSetting_ConstrAndReg(v58, (int)"sXboxRThumbRight", (int)"move the Right Stick right");
  else
    v59 = 0;
  dword_B399C4 = (int)v59;
  v60 = (int *)FormHeapAlloc(8u);
  if ( v60 )
    result = GameSetting_ConstrAndReg(v60, (int)"sXboxNone", (int)"assign a button in the Controls menu");
  else
    result = 0;
  dword_B399C8 = (int)result;
  return result;
}
