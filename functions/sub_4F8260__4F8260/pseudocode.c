char __cdecl sub_4F8260(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a2 )
  {
    if ( *(char *)(a2 + 0x34) < 0 )
      *a4 = 1.0;
  }
  if ( !IsConsoleMode )
    return 1;
  if ( 0.0 == *a4 )
    Interface_ConsolePrint("PC has not submitted to authority.");
  else
    Interface_ConsolePrint("PC submited to authority.");
  return 1;
}
