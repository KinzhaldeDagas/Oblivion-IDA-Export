char __cdecl Cmd_GetPlayerInSEWorld(int a1, int a2, int a3, double *a4)
{
  UInt8 *p_isInSEWorld; // eax
  bool v5; // zf
  const char *v6; // eax

  *a4 = 0.0;
  p_isInSEWorld = &TESDataHandler_g_PlayerRef->isInSEWorld;
  if ( *p_isInSEWorld )
    *a4 = 1.0;
  if ( IsConsoleMode )
  {
    v5 = *p_isInSEWorld == 0;
    v6 = "is";
    if ( v5 )
      v6 = "is not";
    Interface_ConsolePrint("The player %s in the SE world", v6);
  }
  return 1;
}
