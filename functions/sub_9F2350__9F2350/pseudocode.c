// Static GameSetting constructor only; not the runtime validation callback.
int InitGameSetting_sNoFastTravelAlarm()
{
  GameSetting_ConstrAndReg(&stru_B38B60, "sNoFastTravelAlarm", "You cannot fast travel while guards are pursuing you."); /*0x9f235f*/
  return atexit(sub_A21DE0); /*0x9f236f*/
}
