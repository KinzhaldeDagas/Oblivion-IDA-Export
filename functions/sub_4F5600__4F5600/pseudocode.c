char __cdecl sub_4F5600(int a1, int a2, int a3, double *a4)
{
  double v5; // st7
  float v7; // [esp+18h] [ebp+10h]

  *a4 = 0.0;
  if ( sub_65DAC0(TESDataHandler_g_PlayerRef) )
    v5 = 1.0;
  else
    v5 = 0.0;
  v7 = v5;
  *a4 = v7;
  if ( IsConsoleMode )
    Interface_ConsolePrint("IsPlayerAMurderer >> %0.2f", v7);
  return 1;
}
