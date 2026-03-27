char __cdecl sub_4F71D0(int a1, char a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a2 )
  {
    if ( sub_520EF0() )
    {
      if ( *(_BYTE *)(sub_520EF0() + 4) == a2 )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsUsedItemType >> %0.2f", *a4);
  return 1;
}
