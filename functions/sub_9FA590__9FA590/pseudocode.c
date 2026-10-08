// Verified registration: fPathPreferredPointBonus defaults to 1.0 and is applied when actor-aware graph traversal evaluates a preferred point (low bit of point Z).
int sub_9FA590()
{
  GameSetting_ConstrAndReg_float(&g_fPathPreferredPointBonus, (int)"fPathPreferredPointBonus", 1.0); /*0x9fa5a0*/
  return atexit(sub_A24030); /*0x9fa5b0*/
}
