// Registers sLength ('Length'), the Hair category control bound to TESNPC::hairLength.
int sub_9F6990()
{
  GameSetting_ConstrAndReg((int *)&g_gameSetting_sLength, (int)"sLength", (int)"Length"); /*0x9f699f*/
  return atexit(sub_A226D0); /*0x9f69af*/
}
