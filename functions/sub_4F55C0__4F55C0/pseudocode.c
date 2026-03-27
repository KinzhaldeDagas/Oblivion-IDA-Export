char __cdecl sub_4F55C0(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( PlayerCharacter::IsJailed(TESDataHandler_g_PlayerRef) )
    *a4 = 1.0;
  if ( IsConsoleMode )
    Interface_ConsolePrint("IsPlayerInJail >> %0.2f", *a4);
  return 1;
}
