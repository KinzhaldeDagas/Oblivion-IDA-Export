char __cdecl sub_4F8590(int a1, int a2, int a3, double *a4)
{
  int v4; // edx
  double v5; // st7

  v4 = TESDataHandler_g_PlayerRef->miscStats[a2];
  v5 = (double)v4;
  if ( v4 < 0 )
    v5 = v5 + dbl_A30E60;
  *a4 = v5;
  if ( IsConsoleMode )
    Interface_ConsolePrint("Player misc stat value %.02f", v5);
  return 1;
}
