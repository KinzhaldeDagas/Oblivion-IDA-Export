float *sub_9F1C00()
{
  float *v0; // eax
  float *v1; // eax
  float *v2; // eax
  float *v3; // eax
  float *v4; // eax
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  float *v8; // eax
  float *result; // eax

  v0 = (float *)FormHeapAlloc(8u);
  if ( v0 )
    v1 = GameSetting_ConstrAndReg_float(v0, (int)"fEnchantPettyLimit", 15.0);
  else
    v1 = 0;
  dword_B39534 = (int)v1;
  v2 = (float *)FormHeapAlloc(8u);
  if ( v2 )
    v3 = GameSetting_ConstrAndReg_float(v2, (int)"fEnchantLesserLimit", 25.0);
  else
    v3 = 0;
  dword_B39538 = (int)v3;
  v4 = (float *)FormHeapAlloc(8u);
  if ( v4 )
    v5 = GameSetting_ConstrAndReg_float(v4, (int)"fEnchantCommonLimit", 40.0);
  else
    v5 = 0;
  dword_B3953C = (int)v5;
  v6 = (float *)FormHeapAlloc(8u);
  if ( v6 )
    v7 = GameSetting_ConstrAndReg_float(v6, (int)"fEnchantGreaterLimit", 60.0);
  else
    v7 = 0;
  dword_B39540 = (int)v7;
  v8 = (float *)FormHeapAlloc(8u);
  if ( v8 )
    result = GameSetting_ConstrAndReg_float(v8, (int)"fEnchantGrandLimit", 85.0);
  else
    result = 0;
  dword_B39544 = (int)result;
  return result;
}
