char __cdecl sub_4F6010(int a1, int a2, int a3, double *a4)
{
  double v4; // st7

  if ( a2 && *(_BYTE *)(a2 + 0x28) && *(float *)(a2 + 0x3C) > 0.0 )
    v4 = *(float *)(a2 + 0x3C);
  else
    v4 = flt_B33E9C;
  *a4 = v4;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetSecondsPassed >> %0.2f", *a4);
  return 1;
}
