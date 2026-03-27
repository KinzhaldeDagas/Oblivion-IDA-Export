char __cdecl sub_4F5AE0(int a1, int a2, int a3, double *a4)
{
  if ( PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
    *a4 = 1.0;
  if ( IsConsoleMode )
  {
    if ( 0.0 != *a4 )
    {
      Interface_ConsolePrint("Time is passing");
      return 1;
    }
    Interface_ConsolePrint("Time is not passing");
  }
  return 1;
}
