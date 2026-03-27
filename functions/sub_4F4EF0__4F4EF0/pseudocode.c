char __cdecl sub_4F4EF0(int a1, int a2, int a3, double *a4)
{
  double v7; // st7

  v7 = (double)(GetRandomLargeInteger_(0) % 0x64);
  *a4 = v7;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetRandomPercent >> %0.2f", v7);
  return 1;
}
