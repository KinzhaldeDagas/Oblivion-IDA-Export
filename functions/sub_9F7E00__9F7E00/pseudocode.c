int *sub_9F7E00()
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
  int *result; // eax

  v0 = (int *)FormHeapAlloc(8u);
  if ( v0 )
    v1 = GameSetting_ConstrAndReg(v0, (int)"sBladeOneHand", (int)"Blade - One Hand");
  else
    v1 = 0;
  dword_B39A44[0] = (int)v1;
  v2 = (int *)FormHeapAlloc(8u);
  if ( v2 )
    v3 = GameSetting_ConstrAndReg(v2, (int)"sBladeTwoHand", (int)"Blade - Two Hand");
  else
    v3 = 0;
  dword_B39A48 = (int)v3;
  v4 = (int *)FormHeapAlloc(8u);
  if ( v4 )
    v5 = GameSetting_ConstrAndReg(v4, (int)"sBluntOneHand", (int)"Blunt - One Hand");
  else
    v5 = 0;
  dword_B39A4C = (int)v5;
  v6 = (int *)FormHeapAlloc(8u);
  if ( v6 )
    v7 = GameSetting_ConstrAndReg(v6, (int)"sBluntTwoHand", (int)"Blunt - Two Hand");
  else
    v7 = 0;
  dword_B39A50 = (int)v7;
  v8 = (int *)FormHeapAlloc(8u);
  if ( v8 )
    v9 = GameSetting_ConstrAndReg(v8, (int)"sStaff", (int)"Staff");
  else
    v9 = 0;
  dword_B39A54 = (int)v9;
  v10 = (int *)FormHeapAlloc(8u);
  if ( v10 )
    result = GameSetting_ConstrAndReg(v10, (int)"sBow", (int)aBow);
  else
    result = 0;
  dword_B39A58 = (int)result;
  return result;
}
