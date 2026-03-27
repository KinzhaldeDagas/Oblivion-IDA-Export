char __cdecl sub_5057D0(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  char result; // al

  result = sub_4F57A0(a3, 0, 0, a7);
  if ( result )
  {
    if ( IsConsoleMode )
      Interface_ConsolePrint("GetDoorDefaultOpen >> %0.2f", *a7);
    return 1;
  }
  return result;
}
