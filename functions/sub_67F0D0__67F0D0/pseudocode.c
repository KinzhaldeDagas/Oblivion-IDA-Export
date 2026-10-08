// Verified: writes policy byte 1 at qword_B3BB2C[0xBA] and returns the assigned value. The third CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'ignore min use'.
bool __cdecl TravelPath_SetIgnoreMinUse(bool enabled)
{
  BYTE1(qword_B3BB2C[0xBA]) = enabled; /*0x67f0d4*/
  return enabled; /*0x67f0d9*/
}
