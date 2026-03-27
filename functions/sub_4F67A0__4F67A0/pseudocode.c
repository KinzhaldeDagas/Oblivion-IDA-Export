char __cdecl sub_4F67A0(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 0x3C) & 1) != 0 )
      *a4 = 1.0;
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetQuestRunning >> %0.2f", *a4);
  return 1;
}
