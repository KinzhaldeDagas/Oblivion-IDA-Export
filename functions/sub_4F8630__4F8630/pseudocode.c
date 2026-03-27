char __cdecl sub_4F8630(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( TESDataHandler_g_PlayerRef->vtbl->super.GetMountedHorse(TESDataHandler_g_PlayerRef)
    || TESDataHandler_g_PlayerRef->lastRiddenHorse )
  {
    *a4 = 1.0;
  }
  if ( IsConsoleMode )
  {
    if ( 0.0 != *a4 )
    {
      Interface_ConsolePrint("There is a last ridden horse ");
      return 1;
    }
    Interface_ConsolePrint("there is not a last ridden horse");
  }
  return 1;
}
