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

  v0 = (float *)FormHeapAlloc(8u); /*0x9f1c24*/
  if ( v0 ) /*0x9f1c3a*/
    v1 = GameSetting_ConstrAndReg_float(v0, (int)"fEnchantPettyLimit", 15.0); /*0x9f1c4d*/
  else
    v1 = 0; /*0x9f1c54*/
  unk_B39534 = v1; /*0x9f1c5f*/
  v2 = (float *)FormHeapAlloc(8u); /*0x9f1c64*/
  if ( v2 ) /*0x9f1c7a*/
    v3 = GameSetting_ConstrAndReg_float(v2, (int)"fEnchantLesserLimit", 25.0); /*0x9f1c8d*/
  else
    v3 = 0; /*0x9f1c94*/
  unk_B39538 = v3; /*0x9f1c9c*/
  v4 = (float *)FormHeapAlloc(8u); /*0x9f1ca1*/
  if ( v4 ) /*0x9f1cb7*/
    v5 = GameSetting_ConstrAndReg_float(v4, (int)"fEnchantCommonLimit", 40.0); /*0x9f1cca*/
  else
    v5 = 0; /*0x9f1cd1*/
  unk_B3953C = v5; /*0x9f1cd9*/
  v6 = (float *)FormHeapAlloc(8u); /*0x9f1cde*/
  if ( v6 ) /*0x9f1cf4*/
    v7 = GameSetting_ConstrAndReg_float(v6, (int)"fEnchantGreaterLimit", 60.0); /*0x9f1d07*/
  else
    v7 = 0; /*0x9f1d0e*/
  unk_B39540 = v7; /*0x9f1d16*/
  v8 = (float *)FormHeapAlloc(8u); /*0x9f1d1b*/
  if ( v8 ) /*0x9f1d31*/
    result = GameSetting_ConstrAndReg_float(v8, (int)"fEnchantGrandLimit", 85.0); /*0x9f1d44*/
  else
    result = 0; /*0x9f1d4b*/
  unk_B39544 = result; /*0x9f1d4d*/
  return result; /*0x9f1d52*/
}
