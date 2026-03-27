char __cdecl sub_4F5520(char *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a1 )
    *a4 = (double)sub_4DE660(a1);
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetOpenState >> %0.2f", *a4);
  return 1;
}
