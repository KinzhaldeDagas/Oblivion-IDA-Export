char __cdecl sub_4F4DE0(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( sub_520F30() )
    *a4 = 1.0;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsUsedItemActivate >> %0.2f", *a4);
  return 1;
}
