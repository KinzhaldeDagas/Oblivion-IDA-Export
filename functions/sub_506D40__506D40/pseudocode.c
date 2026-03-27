char __cdecl sub_506D40(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  sub_4F5E60(a3, 0, 0, a7);
  if ( IsConsoleMode )
    Interface_ConsolePrint("Player is moving to new area >> %0.2f", *a7);
  return 1;
}
