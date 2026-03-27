char __cdecl sub_4F4D50(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a2 )
  {
    if ( sub_520EF0() == a2 )
      *a4 = 1.0;
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsUsedItem >> %0.2f", *a4);
  return 1;
}
