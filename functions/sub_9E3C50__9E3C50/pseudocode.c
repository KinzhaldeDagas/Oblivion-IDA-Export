// Initializes Oblivion fAttributeClassSecondaryBonus; native default 5.0.
int InitSetting_fAttributeClassSecondaryBonus()
{
  GameSetting_ConstrAndReg_float((float *)&dword_B361CC[0x48], (int)"fAttributeClassSecondaryBonus", 5.0); /*0x9e3c64*/
  return atexit(sub_A1C1F0); /*0x9e3c74*/
}
