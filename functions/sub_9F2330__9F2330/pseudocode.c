// Static GameSetting constructor only; not the runtime validation callback.
int InitGameSetting_sFastTravelNoTravelHealthDamage()
{
  GameSetting_ConstrAndReg( /*0x9f233f*/
    &stru_B38B58,
    "sFastTravelNoTravelHealthDamage",
    "You can't fast travel while taking health damage");
  return atexit(sub_A21DD0); /*0x9f234f*/
}
