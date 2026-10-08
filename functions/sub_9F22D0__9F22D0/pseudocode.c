// Static GameSetting constructor only; not the runtime validation callback.
int InitGameSetting_sNoFastTravelCell()
{
  GameSetting_ConstrAndReg(&stru_B38B40, "sNoFastTravelCell", "You cannot fast travel from this location."); /*0x9f22df*/
  return atexit(sub_A21DA0); /*0x9f22ef*/
}
