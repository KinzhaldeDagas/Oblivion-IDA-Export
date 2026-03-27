char __cdecl sub_4F7470(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( TESDataHandler_g_PlayerRef->unk5C0 )
    *a4 = 1.0;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetPlayerControlsDisabled: %0.2f", *a4);
  return 1;
}
