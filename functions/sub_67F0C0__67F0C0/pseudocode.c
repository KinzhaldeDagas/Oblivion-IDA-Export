// Verified: reads policy byte 1 at qword_B3BB2C[0xBA]. When false, TravelPath_ComputeDoorTransitionPenalty may add the extra cost for a door whose TESObjectDOOR_HasMinUseFlag is set.
bool __cdecl TravelPath_GetIgnoreMinUse()
{
  return BYTE1(qword_B3BB2C[0xBA]); /*0x67f0c5*/
}
