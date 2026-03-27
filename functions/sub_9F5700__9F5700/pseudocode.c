int *sub_9F5700()
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
  int *result; // eax

  v0 = (int *)FormHeapAlloc(8u);
  if ( v0 )
    v1 = GameSetting_ConstrAndReg(v0, (int)"sJoyUp", (int)"Up");
  else
    v1 = 0;
  dword_B39930[0] = (int)v1;
  v2 = (int *)FormHeapAlloc(8u);
  if ( v2 )
    v3 = GameSetting_ConstrAndReg(v2, (int)"sJoyUpRight", (int)"Up-Rt");
  else
    v3 = 0;
  dword_B39934 = (int)v3;
  v4 = (int *)FormHeapAlloc(8u);
  if ( v4 )
    v5 = GameSetting_ConstrAndReg(v4, (int)"sJoyRight", (int)"Right");
  else
    v5 = 0;
  dword_B39938 = (int)v5;
  v6 = (int *)FormHeapAlloc(8u);
  if ( v6 )
    v7 = GameSetting_ConstrAndReg(v6, (int)"sJoyDownRight", (int)"Dn-Rt");
  else
    v7 = 0;
  dword_B3993C = (int)v7;
  v8 = (int *)FormHeapAlloc(8u);
  if ( v8 )
    v9 = GameSetting_ConstrAndReg(v8, (int)"sJoyDown", (int)"Down");
  else
    v9 = 0;
  dword_B39940 = (int)v9;
  v10 = (int *)FormHeapAlloc(8u);
  if ( v10 )
    v11 = GameSetting_ConstrAndReg(v10, (int)"sJoyDownLeft", (int)"Dn-Left");
  else
    v11 = 0;
  dword_B39944 = (int)v11;
  v12 = (int *)FormHeapAlloc(8u);
  if ( v12 )
    v13 = GameSetting_ConstrAndReg(v12, (int)"sJoyLeft", (int)"Left");
  else
    v13 = 0;
  dword_B39948 = (int)v13;
  v14 = (int *)FormHeapAlloc(8u);
  if ( v14 )
    result = GameSetting_ConstrAndReg(v14, (int)"sJoyUpLeft", (int)"Up-Left");
  else
    result = 0;
  dword_B3994C = (int)result;
  return result;
}
