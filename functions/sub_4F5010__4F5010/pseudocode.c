char __cdecl sub_4F5010(int a1, int a2, int a3, double *a4)
{
  double v7; // st5

  *a4 = 0.0;
  if ( !a2 )
    return 1;
  v7 = (double)sub_440F70((int *)TES, a2);
  *a4 = v7;
  if ( !IsConsoleMode )
    return 1;
  Interface_ConsolePrint("Dead Count: %0.2f", v7);
  return 1;
}
