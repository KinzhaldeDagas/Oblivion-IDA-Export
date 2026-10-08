// Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
void __cdecl CSpeedTreeRT__SetError(const char *error)
{
  OB_stString28_AssignBytes_010201A0(&OB_g_strError_010201A0, error, strlen(error)); /*0x789602*/
}
