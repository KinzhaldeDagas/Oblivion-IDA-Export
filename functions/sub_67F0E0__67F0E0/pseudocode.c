// Verified: reads policy byte 2 at qword_B3BB2C[0xBA]. TravelPathSpaceDoorLink_IsEligibleInSpace permits references with the disabled bit (0x800) when this flag is true.
bool __cdecl TravelPath_GetAllowDisabledDoors()
{
  return BYTE2(qword_B3BB2C[0xBA]); /*0x67f0e5*/
}
