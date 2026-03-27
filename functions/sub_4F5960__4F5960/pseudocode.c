char __cdecl sub_4F5960(int a1, int a2, int a3, double *a4)
{
  double v4; // st7

  *a4 = 0.0;
  v4 = (double)TESDataHandler_g_PlayerRef->vtbl->super.GetFame((Actor *)TESDataHandler_g_PlayerRef);
  *a4 = v4;
  if ( IsConsoleMode )
    Interface_ConsolePrint("Player Fame is %0.2f", v4);
  return 1;
}
