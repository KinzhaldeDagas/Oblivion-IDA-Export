// Static GameSetting constructor only; not the runtime validation callback.
int InitGameSetting_sNoFastTravelCombat()
{
  GameSetting_ConstrAndReg(&stru_B38B38, "sNoFastTravelCombat", "You cannot fast travel during combat!"); /*0x9f22bf*/
  return atexit(sub_A21D90); /*0x9f22cf*/
}
