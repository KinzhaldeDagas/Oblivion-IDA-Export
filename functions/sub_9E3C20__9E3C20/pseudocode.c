// Initializes Oblivion fAttributeClassPrimaryBonus; native default 5.0.
int InitSetting_fAttributeClassPrimaryBonus()
{
  GameSetting_ConstrAndReg_float((float *)&dword_B361CC[0x46], (int)"fAttributeClassPrimaryBonus", 5.0); /*0x9e3c34*/
  return atexit(sub_A1C1E0); /*0x9e3c44*/
}
