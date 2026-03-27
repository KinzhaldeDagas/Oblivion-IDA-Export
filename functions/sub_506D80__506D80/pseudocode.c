char __cdecl sub_506D80(int a1, int a2, _DWORD *a3, int a4, int a5, int a6, double *a7)
{
  sub_4F8740(a3, 0, 0, a7);
  if ( IsConsoleMode )
    Interface_ConsolePrint("time dead >> %0.2f", *a7);
  return 1;
}
