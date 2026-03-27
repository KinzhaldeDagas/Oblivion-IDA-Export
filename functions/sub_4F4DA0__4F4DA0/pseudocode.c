char __cdecl sub_4F4DA0(int a1, int a2, int a3, double *a4)
{
  double v7; // st7

  v7 = (double)sub_520F10();
  *a4 = v7;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsUsedItemLevel >> %0.2f", v7);
  return 1;
}
