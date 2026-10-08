// Verified: writes policy byte 0 at qword_B3BB2C[0xBA] and returns the assigned value. The registered CalcLowPathToPoint option description identifies it as ignore locks.
bool __cdecl TravelPath_SetIgnoreLocks(bool enabled)
{
  LOBYTE(qword_B3BB2C[0xBA]) = enabled; /*0x67f0b4*/
  return enabled; /*0x67f0b9*/
}
