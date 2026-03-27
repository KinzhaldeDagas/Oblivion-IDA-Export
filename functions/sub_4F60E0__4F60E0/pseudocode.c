char __cdecl sub_4F60E0(int a1, int a2, int a3, double *a4)
{
  double v7; // st5

  if ( !a1 )
  {
    if ( !a2 )
      goto LABEL_8;
    v7 = (double)(*(_BYTE *)(a2 + 4) & 1);
    goto LABEL_7;
  }
  *a4 = 0.0;
  if ( (*(_DWORD *)(a1 + 8) & 0x800) != 0 || sub_4FA560(a1) )
  {
    v7 = 1.0;
LABEL_7:
    *a4 = v7;
  }
LABEL_8:
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetDisabled >> %0.f", *a4);
  return 1;
}
