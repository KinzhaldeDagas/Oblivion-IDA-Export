// Verified registration: fPathNPCWadingPenalty defaults to 5000.0 and contributes to actor-aware traversal cost for wading points.
int sub_9FA5F0()
{
  GameSetting_ConstrAndReg_float(&g_fPathNPCWadingPenalty, (int)"fPathNPCWadingPenalty", 5000.0); /*0x9fa604*/
  return atexit(sub_A24050); /*0x9fa614*/
}
