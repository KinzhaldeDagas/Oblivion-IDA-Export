int *sub_9F54D0()
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
  int *result; // eax

  v0 = (int *)FormHeapAlloc(8u);
  if ( v0 )
    v1 = GameSetting_ConstrAndReg(v0, (int)"sMouseLeftButton", (int)"L-Button");
  else
    v1 = 0;
  dword_B39554[0] = (int)v1;
  v2 = (int *)FormHeapAlloc(8u);
  if ( v2 )
    v3 = GameSetting_ConstrAndReg(v2, (int)"sMouseRightButton", (int)"R-Button");
  else
    v3 = 0;
  dword_B39558 = (int)v3;
  v4 = (int *)FormHeapAlloc(8u);
  if ( v4 )
    v5 = GameSetting_ConstrAndReg(v4, (int)"sMouseMiddleButton", (int)"Wheel");
  else
    v5 = 0;
  dword_B3955C = (int)v5;
  v6 = (int *)FormHeapAlloc(8u);
  if ( v6 )
    v7 = GameSetting_ConstrAndReg(v6, (int)"sMouseButton3", (int)"Button 3");
  else
    v7 = 0;
  dword_B39560 = (int)v7;
  v8 = (int *)FormHeapAlloc(8u);
  if ( v8 )
    v9 = GameSetting_ConstrAndReg(v8, (int)"sMouseButton4", (int)"Button 4");
  else
    v9 = 0;
  dword_B39564 = (int)v9;
  v10 = (int *)FormHeapAlloc(8u);
  if ( v10 )
    v11 = GameSetting_ConstrAndReg(v10, (int)"sMouseButton5", (int)"Button 5");
  else
    v11 = 0;
  dword_B39568 = (int)v11;
  v12 = (int *)FormHeapAlloc(8u);
  if ( v12 )
    v13 = GameSetting_ConstrAndReg(v12, (int)"sMouseButton6", (int)"Button 6");
  else
    v13 = 0;
  dword_B3956C = (int)v13;
  v14 = (int *)FormHeapAlloc(8u);
  if ( v14 )
    v15 = GameSetting_ConstrAndReg(v14, (int)"sMouseButton7", (int)"Button 7");
  else
    v15 = 0;
  dword_B39570 = (int)v15;
  v16 = (int *)FormHeapAlloc(8u);
  if ( v16 )
    result = GameSetting_ConstrAndReg(v16, (int)"sMouseButton8", (int)"Button 8");
  else
    result = 0;
  dword_B39574 = (int)result;
  return result;
}
