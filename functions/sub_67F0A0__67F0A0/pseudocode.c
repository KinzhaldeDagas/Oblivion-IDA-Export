// Verified: reads policy byte 0 at qword_B3BB2C[0xBA]. CalcLowPathToPoint's first boolean argument is saved/restored through this accessor. TravelPath_ComputeDoorTransitionPenalty skips its lock/access penalty branch when this flag is true.
bool __cdecl TravelPath_GetIgnoreLocks()
{
  return LOBYTE(qword_B3BB2C[0xBA]); /*0x67f0a5*/
}
