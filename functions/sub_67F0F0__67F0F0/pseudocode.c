// Verified: writes policy byte 2 at qword_B3BB2C[0xBA] and returns the assigned value. The second CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'allow disabled doors'.
bool __cdecl TravelPath_SetAllowDisabledDoors(bool enabled)
{
  BYTE2(qword_B3BB2C[0xBA]) = enabled; /*0x67f0f4*/
  return enabled; /*0x67f0f9*/
}
