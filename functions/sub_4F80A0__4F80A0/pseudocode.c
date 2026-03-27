char __cdecl sub_4F80A0(int a1, int a2, int a3, double *a4)
{
  double AmountStolenSold; // st7

  *a4 = 0.0;
  AmountStolenSold = (double)(int)TESDataHandler_g_PlayerRef->AmountStolenSold;
  *a4 = AmountStolenSold;
  if ( IsConsoleMode )
    Interface_ConsolePrint("Amount stolen the player sold >> %0.2f", AmountStolenSold);
  return 1;
}
