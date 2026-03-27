char __cdecl sub_4F7220(int a1, int a2, int a3, double *a4)
{
  int v7; // eax

  v7 = 0;
  *a4 = 0.0;
  if ( a2 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(a2 + 4) - 0x31 <= 2 )
      v7 = a2;
  }
  if ( a1 )
  {
    if ( v7 )
    {
      if ( a1 == v7 )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsRef >> %0.2f", *a4);
  return 1;
}
