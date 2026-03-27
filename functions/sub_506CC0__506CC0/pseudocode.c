char __cdecl sub_506CC0(int a1, int a2, Actor *a3, int a4, int a5, int a6, double *a7)
{
  sub_4F5DF0(a3, 0, 0, a7);
  if ( IsConsoleMode )
    Interface_ConsolePrint("IsEssential >> %0.2f", *a7);
  return 1;
}
