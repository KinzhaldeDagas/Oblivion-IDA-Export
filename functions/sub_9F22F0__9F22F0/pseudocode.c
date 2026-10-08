// Static GameSetting constructor only; not the runtime validation callback.
int InitGameSetting_sNoFastTravelScriptBlock()
{
  GameSetting_ConstrAndReg( /*0x9f22ff*/
    &stru_B38B48,
    "sNoFastTravelScriptBlock",
    "Fast travel is currently unavaliable from this location.");
  return atexit(sub_A21DB0); /*0x9f230f*/
}
