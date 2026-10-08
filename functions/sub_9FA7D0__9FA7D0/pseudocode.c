// Verified: registers GameSetting float fRoadPointReachDistance with default 500.0. No direct use of this setting is established in TESRoad_FindNearestConnectedPointInNearbyCells, whose dbl_A3A5B0 is the FLT_MAX sentinel; keep the relationship Candidate until a consumer is found.
int sub_9FA7D0()
{
  GameSetting_ConstrAndReg_float(&unk_B3A460, (int)"fRoadPointReachDistance", 500.0); /*0x9fa7e4*/
  return atexit(sub_A240F0); /*0x9fa7f4*/
}
